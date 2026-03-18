/*
 * XREFs of KiStartSavingSupervisorState @ 0x140A697F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiUpdateSavedSupervisorState @ 0x140A69870 (KiUpdateSavedSupervisorState.c)
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
    ExfTryToWakePushLock(&KiSupervisorXStateFeaturesLock);
  KeAbPostRelease((ULONG_PTR)&KiSupervisorXStateFeaturesLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return updated;
}
