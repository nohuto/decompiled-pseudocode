/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1402F374C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140224C34 (PoFxSendSystemLatencyUpdate.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     NtFlushProcessWriteBuffers @ 0x1402F3730 (NtFlushProcessWriteBuffers.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1405C70B4 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405C8AFC (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // r15d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rsi
  _KPROCESS *Process; // rbx
  int v6; // eax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  p_StaticAffinity = &CurrentPrcb->StaticAffinity;
  if ( a1 )
  {
    v3 = 1;
    v6 = KeNumberProcessors_0 - 1;
    LODWORD(p_StaticAffinity) = 0;
  }
  else
  {
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v6 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v6 )
  {
    KiIpiSendPacket(v3, (_DWORD)p_StaticAffinity, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
