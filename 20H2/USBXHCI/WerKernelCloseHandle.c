/*
 * XREFs of WerKernelCloseHandle @ 0x1C0051BB8
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00789A8 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerKernelCloseHandle(void *a1)
{
  if ( a1 )
    return ZwClose(a1);
  else
    return -1073741811;
}
