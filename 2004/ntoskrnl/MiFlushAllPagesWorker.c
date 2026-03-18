/*
 * XREFs of MiFlushAllPagesWorker @ 0x140380308
 * Callers:
 *     MiFlushAllPages @ 0x140384458 (MiFlushAllPages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140310698 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x1403106F4 (MiCanFlushMakeProgress.c)
 *     CcNotifyWriteBehindEx @ 0x140380408 (CcNotifyWriteBehindEx.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 784));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 788));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2LL, *(_QWORD *)(a1 + 176));
    if ( *(_DWORD *)(a1 + 1160) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 7488) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 784), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 788), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
