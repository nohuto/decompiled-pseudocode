/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1402FCFDC
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     NtFlushProcessWriteBuffers @ 0x1402FCFC0 (NtFlushProcessWriteBuffers.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140560354 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140562214 (PpmSetExitLatencySamplingPercentage.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PspTerminateAllThreads @ 0x1406B369C (PspTerminateAllThreads.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1409044F0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14021E8A0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402FD120 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FD690 (KeCountSetBitsAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
