/*
 * XREFs of RtlStringCbPrintfW @ 0x1C00156DC
 * Callers:
 *     TelemetryData_CreateReport @ 0x1C0050EAC (TelemetryData_CreateReport.c)
 *     Controller_SetDeviceDescription @ 0x1C006D5F0 (Controller_SetDeviceDescription.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C0078A34 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0078D48 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00097DC (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
