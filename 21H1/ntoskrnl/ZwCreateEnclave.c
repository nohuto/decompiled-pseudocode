/*
 * XREFs of ZwCreateEnclave @ 0x1403F3830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
