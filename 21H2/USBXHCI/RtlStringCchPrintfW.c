/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0005B6C
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006BBC4 (Counter_CreateTransferRingInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006D2CC (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C006E8E0 (Counter_CreateCommonBufferInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0005BA8 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
