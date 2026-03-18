/*
 * XREFs of _fclrf @ 0x1403D248A
 * Callers:
 *     _clrfp @ 0x1403D2380 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
