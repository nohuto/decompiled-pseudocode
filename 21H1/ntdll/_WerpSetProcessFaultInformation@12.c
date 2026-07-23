/*
 * XREFs of _WerpSetProcessFaultInformation@12 @ 0x4B33B2F4
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 */

NTSTATUS __thiscall WerpSetProcessFaultInformation(HANDLE ProcessHandle, int a2)
{
  _DWORD ProcessInformation[2]; // [esp+0h] [ebp-8h] BYREF

  if ( !ProcessHandle )
    return -1073741585;
  ProcessInformation[1] = 0;
  ProcessInformation[0] = 1;
  return ZwSetInformationProcess(ProcessHandle, ProcessFaultInformation, ProcessInformation, 8u);
}
