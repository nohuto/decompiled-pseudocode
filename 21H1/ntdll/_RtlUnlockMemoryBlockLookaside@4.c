/*
 * XREFs of _RtlUnlockMemoryBlockLookaside@4 @ 0x4B34D630
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnlockMemoryZone@4 @ 0x4B2A9910 (_RtlUnlockMemoryZone@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpUnregisterLockedMemoryBlockLookaside@0 @ 0x4B34D6DA (_RtlpUnregisterLockedMemoryBlockLookaside@0.c)
 */

int __stdcall RtlUnlockMemoryBlockLookaside(int a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = v1 - 1;
    *(_DWORD *)(a1 + 24) = v3;
    if ( !v3 )
    {
      RtlUnlockMemoryZone(*(_DWORD *)(a1 + 8));
      RtlUnlockMemoryZone(*(_DWORD *)(a1 + 4));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return v2;
}
