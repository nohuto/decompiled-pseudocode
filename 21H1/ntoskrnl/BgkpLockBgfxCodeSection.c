/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x1409F0730
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140991A38 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140A94C8C (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1406EF480 (MmLockPagableDataSection.c)
 */

_QWORD *BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53EB0, 0LL);
  v1 = dword_140C50AC4;
  if ( !dword_140C50AC4 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140C50AC4;
  }
  dword_140C50AC4 = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53EB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53EB0);
  KeAbPostRelease((ULONG_PTR)&qword_140C53EB0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
