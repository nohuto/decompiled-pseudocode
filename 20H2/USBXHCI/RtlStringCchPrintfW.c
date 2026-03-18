/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0009784
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00170F0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006C390 (Counter_CreateTransferRingInstance.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C006F76C (Counter_CreateCommonBufferInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C007222C (Counter_CreateInterrupterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00097DC (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
