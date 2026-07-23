/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x18005EACC
 * Callers:
 *     RtlLockMemoryZone @ 0x18005EA20 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005EC00 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x18005ECB0 (RtlLockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryZone()
{
  NTSTATUS v0; // esi
  int v1; // eax
  int v3; // ebx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  v1 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_2:
    RtlpLockedMemoryZoneCount = v1 + 1;
  }
  else
  {
    v3 = 0;
    v4 = (PVOID *)&RtlpMemoryZoneCriticalRoutines;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      ++v3;
      ++v4;
      if ( v3 )
      {
        v1 = RtlpLockedMemoryZoneCount;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v0;
}
