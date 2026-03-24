/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408D02B4
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CF2A4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0010 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CCA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CCA8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CCA8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
