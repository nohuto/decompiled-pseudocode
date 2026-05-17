/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x18005D54C
 * Callers:
 *     RtlLockMemoryZone @ 0x18005D4A0 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005D680 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x18005D730 (RtlLockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // esi
  int v5; // eax
  int v7; // ebx
  __int64 (__fastcall **v8)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  v5 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_2:
    RtlpLockedMemoryZoneCount = v5 + 1;
  }
  else
  {
    v7 = 0;
    v8 = &RtlpMemoryZoneCriticalRoutines;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      ++v7;
      ++v8;
      if ( v7 )
      {
        v5 = RtlpLockedMemoryZoneCount;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v4;
}
