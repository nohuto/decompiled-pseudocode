/*
 * XREFs of _NtUnlockVirtualMemory@16 @ 0x4B2F4630
 * Callers:
 *     _RtlLockMemoryZone@4 @ 0x4B2A95D0 (_RtlLockMemoryZone@4.c)
 *     _RtlUnlockMemoryZone@4 @ 0x4B2A9910 (_RtlUnlockMemoryZone@4.c)
 *     _RtlUnlockModuleSection@4 @ 0x4B2A99B0 (_RtlUnlockModuleSection@4.c)
 *     _RtlLockCurrentThread@0 @ 0x4B368C20 (_RtlLockCurrentThread@0.c)
 *     _RtlUnlockCurrentThread@0 @ 0x4B368CC0 (_RtlUnlockCurrentThread@0.c)
 *     _RtlpUnlockStack@0 @ 0x4B368D7F (_RtlpUnlockStack@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  return Wow64SystemServiceCall();
}
