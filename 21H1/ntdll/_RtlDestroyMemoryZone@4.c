/*
 * XREFs of _RtlDestroyMemoryZone@4 @ 0x4B34D720
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 *     _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500 (_RtlDestroyMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlpUnregisterLockedMemoryZone@0 @ 0x4B2A9977 (_RtlpUnregisterLockedMemoryZone@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryZone(PVOID MemoryZone)
{
  _DWORD *v1; // esi
  PVOID BaseAddress; // [esp+4h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+8h] [ebp-4h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 5) )
    RtlpUnregisterLockedMemoryZone();
  v1 = (_DWORD *)*((_DWORD *)MemoryZone + 6);
  while ( v1 )
  {
    BaseAddress = v1;
    LODWORD(RegionSize) = v1[1];
    v1 = (_DWORD *)*v1;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  }
  return 0;
}
