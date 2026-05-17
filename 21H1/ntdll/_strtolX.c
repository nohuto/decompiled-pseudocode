/*
 * XREFs of _strtolX @ 0x4B2FA401
 * Callers:
 *     _atol @ 0x4B2F6680 (_atol.c)
 * Callees:
 *     strtoxlX @ 0x4B2FA1E6 (strtoxlX.c)
 */

int __cdecl strtolX(unsigned __int8 *a1, unsigned __int8 **a2, int a3, int a4)
{
  return strtoxlX((int)&__initiallocalestructinfo, a1, a2, a3, 0, a4);
}
