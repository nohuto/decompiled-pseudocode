/*
 * XREFs of _ZwCreateEnclave@36 @ 0x4B2F3400
 * Callers:
 *     _LdrCreateEnclave@36 @ 0x4B32DC50 (_LdrCreateEnclave@36.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
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
  return Wow64SystemServiceCall();
}
