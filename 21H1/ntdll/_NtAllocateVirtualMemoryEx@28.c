/*
 * XREFs of _NtAllocateVirtualMemoryEx@28 @ 0x4B2F30E0
 * Callers:
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return Wow64SystemServiceCall();
}
