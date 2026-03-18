/*
 * XREFs of PspUnlockJobAssignment @ 0x14066F510
 * Callers:
 *     PspLockJobChain @ 0x14066F47C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140675570 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspJobAssignmentLock);
  result = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
    return KiLeaveGuardedRegionUnsafe(a1, v3, v4, v5);
  return result;
}
