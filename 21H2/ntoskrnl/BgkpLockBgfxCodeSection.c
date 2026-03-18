/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140AAB660
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140B56D04 (BgkInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 */

char BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C5A8F0, 0LL);
  v1 = dword_140C54D3C;
  if ( !dword_140C54D3C )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140C54D3C;
  }
  dword_140C54D3C = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A8F0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C5A8F0);
  KeAbPostRelease((ULONG_PTR)&qword_140C5A8F0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
