/*
 * XREFs of _ZwLockVirtualMemory@16 @ 0x4B2F3A50
 * Callers:
 *     _RtlLockMemoryZone@4 @ 0x4B2A95D0 (_RtlLockMemoryZone@4.c)
 *     _RtlpModuleEnumeratorCallback@12 @ 0x4B2A9830 (_RtlpModuleEnumeratorCallback@12.c)
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 *     _RtlLockCurrentThread@0 @ 0x4B368C20 (_RtlLockCurrentThread@0.c)
 *     _RtlpLockStack@0 @ 0x4B368D27 (_RtlpLockStack@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  return Wow64SystemServiceCall();
}
