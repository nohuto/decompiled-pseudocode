/*
 * XREFs of _fclrf @ 0x1C00D37BA
 * Callers:
 *     _clrfp @ 0x1C00D36BC (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
