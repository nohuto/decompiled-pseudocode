/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1409F6730
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x1409991D8 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140A9A074 (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1406B9550 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53E30, 0LL);
  v1 = dword_140C50A14;
  if ( !dword_140C50A14 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140C50A14;
  }
  dword_140C50A14 = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53E30, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53E30);
  KeAbPostRelease((ULONG_PTR)&qword_140C53E30);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
