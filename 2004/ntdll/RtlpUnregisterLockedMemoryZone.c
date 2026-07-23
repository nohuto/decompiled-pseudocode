/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18005CF44
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005CEB0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180084FB0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005D680 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
