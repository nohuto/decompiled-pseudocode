/*
 * XREFs of _NtInitializeEnclave@20 @ 0x4B2F3960
 * Callers:
 *     _LdrInitializeEnclave@20 @ 0x4B32DD30 (_LdrInitializeEnclave@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  return Wow64SystemServiceCall();
}
