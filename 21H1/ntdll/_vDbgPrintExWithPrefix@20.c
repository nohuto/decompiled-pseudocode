/*
 * XREFs of _vDbgPrintExWithPrefix@20 @ 0x4B33EEF0
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)Prefix, ComponentId, Level, (int)Format, arglist, 1);
}
