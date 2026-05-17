/*
 * XREFs of _wcstolX @ 0x4B2FAC41
 * Callers:
 *     __wtol @ 0x4B2F8040 (__wtol.c)
 * Callees:
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 */

int __cdecl wcstolX(unsigned __int16 *a1, unsigned __int16 **a2, int a3, int a4)
{
  return wcstoxlX((int)&__initiallocalestructinfo, a1, a2, a3, 0, a4);
}
