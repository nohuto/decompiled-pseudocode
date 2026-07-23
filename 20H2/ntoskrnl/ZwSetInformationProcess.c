/*
 * XREFs of ZwSetInformationProcess @ 0x1403F84F0
 * Callers:
 *     RtlCreateUserStack @ 0x140685EDC (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406D12FC (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
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
