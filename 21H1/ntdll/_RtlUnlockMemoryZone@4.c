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

int __stdcall RtlUnlockMemoryZone(int a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax
  _DWORD *i; // esi
  _DWORD *v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 16);
  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 )
  {
    v2 = 0;
    v3 = v1 - 1;
    *(_DWORD *)(a1 + 20) = v3;
    if ( !v3 )
    {
      for ( i = *(_DWORD **)(a1 + 24); i; i = (_DWORD *)*i )
      {
        v6 = i;
        v7 = i[1];
        NtUnlockVirtualMemory(-1, &v6, &v7, 1);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(a1 + 16);
  return v2;
}
