/*
 * XREFs of PsspDumpObject_Process @ 0x4B387FC0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Process(
        HANDLE ProcessHandle,
        _DWORD *ProcessInformation,
        unsigned int a3,
        PULONG ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 0x20 )
    return -1073741789;
  *ProcessInformation = 32;
  return ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x20u, ReturnLength);
}
