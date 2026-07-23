/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408D0414
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CF404 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0170 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CCE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CCE8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CCE8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
