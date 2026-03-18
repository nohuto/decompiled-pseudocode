/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408D2AF4
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408D1AE4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D2850 (MiDeleteImageExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CB28);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CB28);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
