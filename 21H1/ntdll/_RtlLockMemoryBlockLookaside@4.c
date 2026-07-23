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

NTSTATUS __cdecl RtlLockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int locked; // edi

  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 6) )
    goto LABEL_8;
  locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
    if ( locked < 0 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      goto LABEL_9;
    }
    locked = RtlpRegisterLockedMemoryBlockLookaside();
    if ( locked < 0 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
      goto LABEL_9;
    }
LABEL_8:
    ++*((_DWORD *)MemoryBlockLookaside + 6);
  }
LABEL_9:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return locked;
}
