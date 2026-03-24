/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1408D7908
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1407731A4 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CC40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CC40);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CC40);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
