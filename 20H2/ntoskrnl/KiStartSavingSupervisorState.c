/*
 * XREFs of KiStartSavingSupervisorState @ 0x1409B2800
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUpdateSavedSupervisorState @ 0x1409B2880 (KiUpdateSavedSupervisorState.c)
 */

__int64 KiStartSavingSupervisorState()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiSupervisorXStateFeaturesLock, 0LL);
  updated = KiUpdateSavedSupervisorState();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock);
  KeAbPostRelease((ULONG_PTR)&KiSupervisorXStateFeaturesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return updated;
}
