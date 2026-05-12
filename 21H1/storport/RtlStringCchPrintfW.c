/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0017DFC
 * Callers:
 *     RaidUnitGetInstanceId @ 0x1C0017D78 (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C0017E54 (RaidUnitGetDeviceId.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C001A8F4 (StorpTelemetryGetStartStopCycleCounter.c)
 *     RaidCreateDeviceName @ 0x1C004363C (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0044694 (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C00449E0 (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00515C4 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073A40 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00137A4 (RtlStringVPrintfWorkerW.c)
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
