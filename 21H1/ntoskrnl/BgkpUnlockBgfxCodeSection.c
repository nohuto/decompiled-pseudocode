/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x1409EE3F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumeFinished @ 0x14098CCEC (BgkResumeFinished.c)
 *     BgkResumePrepare @ 0x140991A38 (BgkResumePrepare.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53EB0, 0LL);
  if ( !--dword_140C50AC4 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53EB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53EB0);
  KeAbPostRelease((ULONG_PTR)&qword_140C53EB0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
