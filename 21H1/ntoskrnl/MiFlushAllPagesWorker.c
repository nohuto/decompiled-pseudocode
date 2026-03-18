/*
 * XREFs of MiFlushAllPagesWorker @ 0x14037F430
 * Callers:
 *     MiFlushAllPages @ 0x14037F554 (MiFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x1402D06A0 (MiCanFlushMakeProgress.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 *     CcNotifyWriteBehindEx @ 0x14037F530 (CcNotifyWriteBehindEx.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
}
