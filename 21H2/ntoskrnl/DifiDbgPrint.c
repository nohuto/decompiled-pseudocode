/*
 * XREFs of DifiDbgPrint @ 0x140605160
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x140602808 (CarEtwWriteBugCheckEvent.c)
 *     CarInitLogging @ 0x140602EB8 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x1406051B0 (CarInitiateBugcheck.c)
 *     CarDoLiveDump @ 0x1406052FC (CarDoLiveDump.c)
 *     CarLiveDump @ 0x1406053C0 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifiDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
  return result;
}
