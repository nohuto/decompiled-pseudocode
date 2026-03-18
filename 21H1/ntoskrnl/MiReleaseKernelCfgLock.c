/*
 * XREFs of MiReleaseKernelCfgLock @ 0x1408D2FB8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x14075E734 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CB80);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CB80);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
}
