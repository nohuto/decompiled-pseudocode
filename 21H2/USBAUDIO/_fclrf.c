/*
 * XREFs of _fclrf @ 0x1C0012E1A
 * Callers:
 *     _clrfp @ 0x1C0012D1C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
