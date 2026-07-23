/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18005CF94
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005CF00 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800850B0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005D6D0 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
