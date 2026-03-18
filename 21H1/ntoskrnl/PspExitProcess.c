/*
 * XREFs of PspExitProcess @ 0x140662D14
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402D5518 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x1402D5624 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x140369E14 (ExCleanTimerResolutionRequest.c)
 *     PfSnEndProcessTrace @ 0x1405D40A8 (PfSnEndProcessTrace.c)
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x14063787C (PspCallProcessNotifyRoutines.c)
 *     DbgkFlushErrorPort @ 0x140663500 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 */

void __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _DMA_ADAPTER *v8; // rcx

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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
    }
  }
  v8 = *(struct _DMA_ADAPTER **)(a2 + 1464);
  if ( !v8 )
    goto LABEL_7;
  if ( v8 != (struct _DMA_ADAPTER *)1 )
  {
    HalPutDmaAdapter(v8);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v8);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
