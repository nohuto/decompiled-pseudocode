/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1408D4308
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CA40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CA40);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CA40);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
