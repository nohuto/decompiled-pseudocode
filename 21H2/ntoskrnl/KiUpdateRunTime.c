/*
 * XREFs of KiUpdateRunTime @ 0x140307660
 * Callers:
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 * Callees:
 *     KiSetDpcRequestFlag @ 0x14022B9E4 (KiSetDpcRequestFlag.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KiShouldScanSharedReadyQueue @ 0x14029135C (KiShouldScanSharedReadyQueue.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x14045AAC0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14045ABA8 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14045E06E (PoSetProcessorQoS.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 */

__int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // bp
  int v4; // esi
  struct _KPRCB *v5; // r9
  bool v6; // zf
  _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  struct _KPRCB *v9; // r14
  _KPRCBFLAG v10; // ecx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  __int64 i; // rcx
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  _DWORD *v17; // r8
  int v18; // eax
  unsigned int PrcbFlags; // r8d
  unsigned int v20; // edx
  __int16 v21; // [rsp+50h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v21;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  v6 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KiSetClockTimer((_DWORD)CurrentPrcb, -KeMaximumIncrement, KeMaximumIncrement, 3, 1, 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v5 = KeGetCurrentPrcb();
          v17 = v5->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v6 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v5);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( (KiVelocityFlags & 0x8000) != 0 && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v4) < 0 )
    {
      if ( KiShouldScanSharedReadyQueue((__int64)CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag((unsigned __int16 *)&CurrentPrcb->13244, 64);
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        CurrentPrcb->NormalPriorityReadyScanTick = v4 + KiNormalPriorityBoostScanLatencyTicks;
      }
    }
    result = CurrentThread->CycleTime;
    if ( result >= CurrentThread->QuantumTarget )
      goto LABEL_16;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL, v5);
    if ( (_DWORD)result )
      goto LABEL_16;
    v9 = KeGetCurrentPrcb();
    v10.PrcbFlags = (volatile int)v9->PrcbFlags;
    if ( (v10.PrcbFlags & 0x300) != 0 )
    {
      _disable();
      PrcbFlags = v9->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
      if ( (unsigned __int8)v9->PrcbFlags.PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
      {
        v20 = PrcbFlags | ((CurrentThread->ThreadFlags2 & 3) << 8);
        v9->PrcbFlags.PrcbFlags = v20;
        if ( (unsigned __int8)PoSetProcessorQoS(v9, (v20 >> 8) & 3) )
          v9->PrcbFlags.PrcbFlags &= 0xFFFFFCFF;
        PrcbFlags = v9->PrcbFlags.PrcbFlags;
      }
      else
      {
        v9->PrcbFlags.PrcbFlags = PrcbFlags;
      }
      if ( (PrcbFlags & 0x300) == 0 )
        KeUpdatePendingQosRequest(v9);
      if ( (v21 & 0x200) != 0 )
        _enable();
    }
    else if ( LOBYTE(v10.PrcbFlags) != LOBYTE(CurrentThread->ThreadFlags2) )
    {
      KeCheckAndApplyBamQos(v9, CurrentThread);
    }
  }
  result = MEMORY[0xFFFFF78000000320];
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
LABEL_16:
    CurrentPrcb->QuantumEnd = 1;
    if ( !CurrentPrcb->NestingLevel )
      return HalRequestSoftwareInterrupt(2);
    CurrentPrcb->InterruptRequest = 1;
    return result;
  }
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    result = CurrentPrcb->ScbOffset;
    for ( i = (__int64)SchedulingGroup + result; i; i = *(_QWORD *)(i + 408) )
    {
      v13 = i - CurrentPrcb->ScbOffset;
      result = *(unsigned __int8 *)(i + 112);
      if ( (result & 4) != 0 )
      {
        if ( (result & 0x10) != 0 )
        {
          result = *(_QWORD *)(i + 24);
LABEL_25:
          if ( *(_QWORD *)i >= (unsigned __int64)result )
            goto LABEL_16;
          continue;
        }
        if ( (result & 2) == 0 )
        {
          result = *(_QWORD *)(v13 + 48);
          if ( result <= 0 )
            goto LABEL_16;
          result = *(_QWORD *)(i + 24);
          if ( *(_QWORD *)i >= (unsigned __int64)result )
            goto LABEL_16;
        }
      }
      else
      {
        if ( (result & 0x10) != 0 )
        {
          result = *(_QWORD *)(i + 8);
          goto LABEL_25;
        }
        if ( (result & 2) == 0 )
        {
          result = *(_QWORD *)(v13 + 48);
          if ( result <= 0 )
            goto LABEL_16;
        }
      }
    }
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v4) < 0 )
  {
    result = KiShouldScanSharedReadyQueue((__int64)CurrentPrcb);
    if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v4 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
