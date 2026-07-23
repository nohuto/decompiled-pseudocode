/*
 * XREFs of ZwSetInformationProcess @ 0x1403F26B0
 * Callers:
 *     RtlCreateUserStack @ 0x14063900C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406DB328 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
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
