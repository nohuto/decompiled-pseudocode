/*
 * XREFs of MiFlushAllPagesWorker @ 0x14038479C
 * Callers:
 *     MiFlushAllPages @ 0x1403846E4 (MiFlushAllPages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiCanFlushMakeProgress @ 0x14035BAF0 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14035BB54 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140384778 (CcNotifyWriteBehindEx.c)
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
    CcNotifyWriteBehindEx(2, *(_QWORD *)(a1 + 176));
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
