/*
 * XREFs of RtlStringCchPrintfW @ 0x1C00287E0
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00184A0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002866C (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C0055B10 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C0067C58 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACD30 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0028838 (RtlStringVPrintfWorkerW_0.c)
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
    return RtlStringVPrintfWorkerW_0(pszDest, cchDest, 0LL, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
