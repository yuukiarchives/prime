#include <stdio.h>

/**
 * Determines if an integer is prime.
 */
int is_prime(const int n) {
    int i;

    /* Integers less than or equal to 1 are not prime. */
    if (n <= 1) {
        return 0;
    }

    /* Performs trial division by every integer `i` such that 2 <= `i` <= `n` - 1. */
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int i;

    /* Prints the primes less than 100. */
    for (i = 2; i < 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
