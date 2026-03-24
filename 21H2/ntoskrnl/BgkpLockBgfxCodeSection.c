/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1409F3730
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x1409961D8 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     MmLockPagableDataSection @ 0x1406D0CD0 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53FB0, 0LL);
  v1 = dword_140C50BA8;
  if ( !dword_140C50BA8 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140C50BA8;
  }
  dword_140C50BA8 = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53FB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53FB0);
  KeAbPostRelease((ULONG_PTR)&qword_140C53FB0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
