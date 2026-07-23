/*
 * XREFs of ZwQueryInformationProcess @ 0x1403F2650
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405BDFB0 (BiLogFileOwnerProcess.c)
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
