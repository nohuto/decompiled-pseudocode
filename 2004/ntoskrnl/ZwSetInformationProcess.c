/*
 * XREFs of ZwSetInformationProcess @ 0x1403F3940
 * Callers:
 *     RtlCreateUserStack @ 0x140603FCC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406FE398 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140781E8C (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
