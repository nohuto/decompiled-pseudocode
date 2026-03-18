/*
 * XREFs of PspUnlockJobAssignment @ 0x1406635D0
 * Callers:
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspLockJobChain @ 0x1406637C0 (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140710AE4 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
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
