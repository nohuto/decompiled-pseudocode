/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408CCCB4
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CBCA4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CCA10 (MiDeleteImageExtentList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CAA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CAA8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CAA8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
