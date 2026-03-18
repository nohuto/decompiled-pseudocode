/*
 * XREFs of _fclrf @ 0x1C00D368A
 * Callers:
 *     _clrfp @ 0x1C00D358C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
