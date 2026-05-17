/*
 * XREFs of _fclrf @ 0x18009615A
 * Callers:
 *     _clrfp @ 0x180095150 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
