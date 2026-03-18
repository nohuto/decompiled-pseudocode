/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x14062CDA8
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x140663690 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL, 0LL);
    else
      ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1080));
    KeAbPostRelease(a2 + 1080);
  }
  return KiLeaveGuardedRegionUnsafe(a3);
}
