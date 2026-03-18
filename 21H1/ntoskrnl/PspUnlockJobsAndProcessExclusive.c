/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x140674678
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x14066F3F4 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // rcx

  v4 = *a1;
  while ( v4 )
  {
    v8 = *(_QWORD *)&a1[4 * --v4 + 2];
    if ( LOBYTE(a1[4 * v4 + 4]) )
      PspUnlockJobChain(v8, 0LL, 0);
    else
      ExReleaseResourceLite((PERESOURCE)(v8 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 1080);
    KeAbPostRelease(a2 + 1080);
  }
  return KiLeaveGuardedRegionUnsafe(a3, a2, a3, a4);
}
