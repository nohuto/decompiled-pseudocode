/*
 * XREFs of _fclrf @ 0x1C00131FA
 * Callers:
 *     _clrfp @ 0x1C00130FC (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
