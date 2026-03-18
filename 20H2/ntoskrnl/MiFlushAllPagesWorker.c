/*
 * XREFs of MiFlushAllPagesWorker @ 0x140381B50
 * Callers:
 *     MiFlushAllPages @ 0x140386588 (MiFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403322B0 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x14033B240 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14033B29C (MiCanFlushMakeProgress.c)
 *     CcNotifyWriteBehindEx @ 0x140381C50 (CcNotifyWriteBehindEx.c)
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
