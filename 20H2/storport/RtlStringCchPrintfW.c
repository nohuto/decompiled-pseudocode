/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001A750
 * Callers:
 *     RaidUnitGetInstanceId @ 0x1C001A6CC (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C001A810 (RaidUnitGetDeviceId.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C001E914 (StorpTelemetryGetStartStopCycleCounter.c)
 *     RaidCreateDeviceName @ 0x1C0044C28 (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0045CA0 (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C0045FEC (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052B98 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C90 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001A7A8 (RtlStringVPrintfWorkerW.c)
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
