/*
 * XREFs of _RtlLockMemoryZone@4 @ 0x4B2A95D0
 * Callers:
 *     _RtlLockMemoryBlockLookaside@4 @ 0x4B34D570 (_RtlLockMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlpRegisterLockedMemoryZone@0 @ 0x4B2A964B (_RtlpRegisterLockedMemoryZone@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 */

NTSTATUS __cdecl RtlLockMemoryZone(PVOID MemoryZone)
{
  int locked; // ebx
  _DWORD *i; // edi
  _DWORD *j; // esi
  _DWORD *k; // esi
  PVOID BaseAddress; // [esp+10h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-4h] BYREF

  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 5) )
  {
LABEL_7:
    ++*((_DWORD *)MemoryZone + 5);
  }
  else
  {
    for ( i = (_DWORD *)*((_DWORD *)MemoryZone + 6); i; i = (_DWORD *)*i )
    {
      BaseAddress = i;
      LODWORD(RegionSize) = i[1];
      locked = ZwLockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
      if ( locked < 0 )
      {
        for ( j = (_DWORD *)*((_DWORD *)MemoryZone + 6); j != i; j = (_DWORD *)*j )
        {
          BaseAddress = j;
          LODWORD(RegionSize) = j[1];
          NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = (_DWORD *)*((_DWORD *)MemoryZone + 6); k; k = (_DWORD *)*k )
    {
      BaseAddress = k;
      LODWORD(RegionSize) = k[1];
      NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return locked;
}
