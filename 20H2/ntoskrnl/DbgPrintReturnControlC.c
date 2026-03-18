/*
 * XREFs of DbgPrintReturnControlC @ 0x140583B10
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintReturnControlC(PCCH Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, Format, va, 0);
}
