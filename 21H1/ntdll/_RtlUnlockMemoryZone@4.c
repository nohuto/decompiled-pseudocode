/*
 * XREFs of _RtlUnlockMemoryZone@4 @ 0x4B2A9910
 * Callers:
 *     _RtlLockMemoryBlockLookaside@4 @ 0x4B34D570 (_RtlLockMemoryBlockLookaside@4.c)
 *     _RtlUnlockMemoryBlockLookaside@4 @ 0x4B34D630 (_RtlUnlockMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlpUnregisterLockedMemoryZone@0 @ 0x4B2A9977 (_RtlpUnregisterLockedMemoryZone@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryZone(PVOID MemoryZone)
{
  int v1; // eax
  NTSTATUS v2; // edi
  int v3; // eax
  _DWORD *i; // esi
  PVOID BaseAddress; // [esp+Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+10h] [ebp-4h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v1 = *((_DWORD *)MemoryZone + 5);
  if ( v1 )
  {
    v2 = 0;
    v3 = v1 - 1;
    *((_DWORD *)MemoryZone + 5) = v3;
    if ( !v3 )
    {
      for ( i = (_DWORD *)*((_DWORD *)MemoryZone + 6); i; i = (_DWORD *)*i )
      {
        BaseAddress = i;
        LODWORD(RegionSize) = i[1];
        NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return v2;
}
