/*
 * XREFs of _DbgBreakPointWithStatus@4 @ 0x4B2F4CC0
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 * Callees:
 *     <none>
 */

int __stdcall DbgBreakPointWithStatus(int a1)
{
  return RtlpBreakWithStatusInstruction();
}
