/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1408DA148
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x14076F114 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CAC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CAC0);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CAC0);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
