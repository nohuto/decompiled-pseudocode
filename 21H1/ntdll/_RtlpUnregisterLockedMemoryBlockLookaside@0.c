/*
 * XREFs of _RtlpUnregisterLockedMemoryBlockLookaside@0 @ 0x4B34D6DA
 * Callers:
 *     _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500 (_RtlDestroyMemoryBlockLookaside@4.c)
 *     _RtlUnlockMemoryBlockLookaside@4 @ 0x4B34D630 (_RtlUnlockMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlUnlockModuleSection@4 @ 0x4B2A99B0 (_RtlUnlockModuleSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __stdcall RtlpUnregisterLockedMemoryBlockLookaside()
{
  unsigned int i; // esi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    for ( i = 0; i < 0x10; i += 4 )
      RtlUnlockModuleSection(*(const PVOID *)((char *)&RtlpMemoryBlockLookasideCriticalRoutines + i));
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
