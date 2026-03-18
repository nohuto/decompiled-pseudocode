/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x140358FBC
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     NtFlushProcessWriteBuffers @ 0x140358FA0 (NtFlushProcessWriteBuffers.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14035D148 (PoFxSendSystemLatencyUpdate.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14055FD04 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140561BC4 (PpmSetExitLatencySamplingPercentage.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140903210 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140359670 (KeCountSetBitsAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // r14d
  int v4; // edi
  int v5; // eax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = (_DWORD)CurrentPrcb + 11704;
  if ( a1 )
  {
    v5 = KeNumberProcessors_0 - 1;
    v4 = 0;
    v3 = 1;
  }
  else
  {
    KeCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v5 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v5 )
  {
    KiIpiSendPacket(v3, v4, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
