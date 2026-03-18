/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001DBA0
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C00561D4 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C0069028 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00068A0 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
