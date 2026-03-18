/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x1409F43F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x14099913C (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x1409991D8 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14031C790 (MmUnlockPagableImageSection.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53E30, 0LL);
  if ( !--dword_140C50A14 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53E30, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53E30);
  KeAbPostRelease((ULONG_PTR)&qword_140C53E30);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
