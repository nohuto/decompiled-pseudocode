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

NTSTATUS __cdecl RtlUnlockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int v1; // eax
  NTSTATUS v2; // edi
  int v3; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v1 = *((_DWORD *)MemoryBlockLookaside + 6);
  if ( v1 )
  {
    v2 = 0;
    v3 = v1 - 1;
    *((_DWORD *)MemoryBlockLookaside + 6) = v3;
    if ( !v3 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v2;
}
