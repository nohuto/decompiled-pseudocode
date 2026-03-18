/*
 * XREFs of PspExitProcess @ 0x14061D5F4
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14026BB78 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x14026BC84 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x14036A7D4 (ExCleanTimerResolutionRequest.c)
 *     PspCallProcessNotifyRoutines @ 0x14060283C (PspCallProcessNotifyRoutines.c)
 *     DbgkFlushErrorPort @ 0x14061DDE0 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x14061DE30 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x14065E6E4 (EtwTraceProcess.c)
 *     PfSnEndProcessTrace @ 0x14070876C (PfSnEndProcessTrace.c)
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
      EtwTraceProcess(a2);
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
