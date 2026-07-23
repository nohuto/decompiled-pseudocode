/*
 * XREFs of vDbgPrintEx @ 0x1800E0950
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509A8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, (char *)Format, arglist, 1);
}
