/*
 * XREFs of _NtQueryMutant@20 @ 0x4B2F3ED0
 * Callers:
 *     PsspDumpObject_Mutant @ 0x4B387F60 (PsspDumpObject_Mutant.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
