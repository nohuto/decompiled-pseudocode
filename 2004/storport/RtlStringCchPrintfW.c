/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0019C6C
 * Callers:
 *     RaidUnitGetInstanceId @ 0x1C0019BE8 (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C0019CC4 (RaidUnitGetDeviceId.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C001CA4C (StorpTelemetryGetStartStopCycleCounter.c)
 *     RaidCreateDeviceName @ 0x1C0043D24 (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0044D9C (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C00450E8 (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0051CD4 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073D8C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0015614 (RtlStringVPrintfWorkerW.c)
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
