/*
 * XREFs of _vDbgPrintEx@16 @ 0x4B33EEC0
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(&dword_4B2850A4, ComponentId, Level, (int)Format, arglist, 1);
}
