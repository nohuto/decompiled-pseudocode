/*
 * XREFs of ZwQueryInformationProcess @ 0x1403F38E0
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405BE6D0 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
