/*
 * XREFs of _strtoul @ 0x4B2FA430
 * Callers:
 *     <none>
 * Callees:
 *     strtoxlX @ 0x4B2FA1E6 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX((int)&__initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
