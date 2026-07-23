/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x18005E504
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x18005E3D0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180085520 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005EC00 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryBlockLookaside()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v0 = (PVOID *)RtlpMemoryBlockLookasideCriticalRoutines;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
