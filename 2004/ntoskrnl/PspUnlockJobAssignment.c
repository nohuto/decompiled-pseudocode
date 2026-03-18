/*
 * XREFs of PspUnlockJobAssignment @ 0x140617DF0
 * Callers:
 *     PspLockJobChain @ 0x140617D5C (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14065761C (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  char result; // al

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  result = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
    return KiLeaveGuardedRegionUnsafe(a1);
  return result;
}
