/*
 * XREFs of _WerpProcessId@4 @ 0x4B33B2CF
 * Callers:
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 *     _WerpWaitForCrashReporting@16 @ 0x4B33B348 (_WerpWaitForCrashReporting@16.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __thiscall WerpProcessId(HANDLE ProcessHandle)
{
  _BYTE ProcessInformation[16]; // [esp+0h] [ebp-18h] BYREF
  int v3; // [esp+10h] [ebp-8h]

  if ( ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x18u, 0) >= 0 )
    return v3;
  else
    return 0;
}
