/*
 * XREFs of _RtlpRegisterLockedMemoryZone@0 @ 0x4B2A964B
 * Callers:
 *     _RtlLockMemoryZone@4 @ 0x4B2A95D0 (_RtlLockMemoryZone@4.c)
 * Callees:
 *     _RtlLockModuleSection@4 @ 0x4B2A96A0 (_RtlLockModuleSection@4.c)
 *     _RtlUnlockModuleSection@4 @ 0x4B2A99B0 (_RtlUnlockModuleSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

NTSTATUS __stdcall RtlpRegisterLockedMemoryZone()
{
  NTSTATUS v0; // edi
  int v1; // eax
  int v2; // esi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  v1 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_6:
    RtlpLockedMemoryZoneCount = v1 + 1;
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*(&RtlpMemoryZoneCriticalRoutines + v2));
      if ( v0 < 0 )
        break;
      if ( ++v2 )
      {
        v1 = RtlpLockedMemoryZoneCount;
        goto LABEL_6;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return v0;
}
