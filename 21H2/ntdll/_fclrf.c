/*
 * XREFs of _fclrf @ 0x18009685A
 * Callers:
 *     _clrfp @ 0x180095850 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
