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

int __stdcall RtlLockMemoryZone(int a1)
{
  int locked; // ebx
  _DWORD *i; // edi
  _DWORD *j; // esi
  _DWORD *k; // esi
  _DWORD *v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  locked = 0;
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) )
  {
LABEL_7:
    ++*(_DWORD *)(a1 + 20);
  }
  else
  {
    for ( i = *(_DWORD **)(a1 + 24); i; i = (_DWORD *)*i )
    {
      v6 = i;
      v7 = i[1];
      locked = ZwLockVirtualMemory(-1, &v6, &v7, 1);
      if ( locked < 0 )
      {
        for ( j = *(_DWORD **)(a1 + 24); j != i; j = (_DWORD *)*j )
        {
          v6 = j;
          v7 = j[1];
          NtUnlockVirtualMemory(-1, &v6, &v7, 1);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = *(_DWORD **)(a1 + 24); k; k = (_DWORD *)*k )
    {
      v6 = k;
      v7 = k[1];
      NtUnlockVirtualMemory(-1, &v6, &v7, 1);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(a1 + 16);
  return locked;
}
