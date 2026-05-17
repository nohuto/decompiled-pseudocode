/*
 * XREFs of _RtlLockMemoryBlockLookaside@4 @ 0x4B34D570
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLockMemoryZone@4 @ 0x4B2A95D0 (_RtlLockMemoryZone@4.c)
 *     _RtlUnlockMemoryZone@4 @ 0x4B2A9910 (_RtlUnlockMemoryZone@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpRegisterLockedMemoryBlockLookaside@0 @ 0x4B34D67B (_RtlpRegisterLockedMemoryBlockLookaside@0.c)
 */

int __stdcall RtlLockMemoryBlockLookaside(int a1)
{
  int locked; // edi

  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  if ( *(_DWORD *)(a1 + 24) )
    goto LABEL_8;
  locked = RtlLockMemoryZone(*(_DWORD *)(a1 + 4));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_DWORD *)(a1 + 8));
    if ( locked < 0 )
    {
      RtlUnlockMemoryZone(*(_DWORD *)(a1 + 4));
      goto LABEL_9;
    }
    locked = RtlpRegisterLockedMemoryBlockLookaside();
    if ( locked < 0 )
    {
      RtlUnlockMemoryZone(*(_DWORD *)(a1 + 4));
      RtlUnlockMemoryZone(*(_DWORD *)(a1 + 8));
      goto LABEL_9;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 24);
  }
LABEL_9:
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return locked;
}
