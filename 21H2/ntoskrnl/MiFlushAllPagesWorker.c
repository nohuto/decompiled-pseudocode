/*
 * XREFs of MiFlushAllPagesWorker @ 0x1403848EC
 * Callers:
 *     MiFlushAllPages @ 0x140384834 (MiFlushAllPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiCanFlushMakeProgress @ 0x1402A0A20 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     CcNotifyWriteBehindEx @ 0x1403848C8 (CcNotifyWriteBehindEx.c)
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
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
}
