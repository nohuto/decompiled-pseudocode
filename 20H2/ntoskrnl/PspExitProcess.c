/*
 * XREFs of PspExitProcess @ 0x14064E234
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14024423C (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x140244348 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x14036C7B4 (ExCleanTimerResolutionRequest.c)
 *     PspCallProcessNotifyRoutines @ 0x14062809C (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x140632174 (EtwTraceProcess.c)
 *     DbgkFlushErrorPort @ 0x14064EA20 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x14064EA70 (PsSetProcessTelemetryAppState.c)
 *     PfSnEndProcessTrace @ 0x1406F1174 (PfSnEndProcessTrace.c)
 */

void __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *v5; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(a2, 770);
    if ( (*(_DWORD *)(a2 + 2172) & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((_QWORD *)a2, 0LL, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v5 = *(struct _DMA_ADAPTER **)(a2 + 1464);
  if ( !v5 )
    goto LABEL_7;
  if ( v5 != (struct _DMA_ADAPTER *)1 )
  {
    HalPutDmaAdapter(v5);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v5);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2LL);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
