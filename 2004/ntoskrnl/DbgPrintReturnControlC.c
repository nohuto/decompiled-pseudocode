/*
 * XREFs of DbgPrintReturnControlC @ 0x1405801B0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintReturnControlC(PCCH Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, Format, va, 0);
}
