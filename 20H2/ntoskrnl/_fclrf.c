/*
 * XREFs of _fclrf @ 0x1403D5F5A
 * Callers:
 *     _clrfp @ 0x1403D5E50 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
