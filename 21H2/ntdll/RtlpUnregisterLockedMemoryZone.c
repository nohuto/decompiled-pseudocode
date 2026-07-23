/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18005E4C4
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005E430 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180085580 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005EC00 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
