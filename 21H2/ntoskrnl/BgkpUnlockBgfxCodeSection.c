/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x1409F13F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x14099508C (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x1409961D8 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53FB0, 0LL);
  if ( !--dword_140C50BA8 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53FB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53FB0);
  KeAbPostRelease((ULONG_PTR)&qword_140C53FB0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
