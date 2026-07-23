/*
 * XREFs of KeClockInterruptNotify @ 0x1402C5F40
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1402C5E60 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x1402CEE40 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4A10 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 *     KeIsForceIdleEngaged @ 0x140211564 (KeIsForceIdleEngaged.c)
 *     KiEventClockStateChange @ 0x1402116E8 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x140211728 (KiRestoreClockTickRate.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiShouldScanSharedReadyQueue @ 0x14027AF04 (KiShouldScanSharedReadyQueue.c)
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsQosGroupingActive @ 0x140398FA4 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14051F0A0 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F4F8 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  LARGE_INTEGER *v5; // r12
  struct _KPRCB *v6; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r13
  __int64 PrcbFlags; // rcx
  __int64 ThreadFlags2; // rdx
  int v17; // eax
  unsigned __int8 v18; // di
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  bool v21; // zf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v23; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // bl
  _DWORD *v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  struct _KPRCB *v36; // rbx
  __int16 v37; // r15
  int v38; // r13d
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v42; // r8
  unsigned __int8 EfficiencySchedulingClass; // r9
  int v44; // r11d
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // rdi
  unsigned int v49; // r8d
  bool v50; // r15
  unsigned int v51; // edx
  char v52; // al
  __int64 v53; // r8
  char v54; // al
  unsigned __int64 v55; // rax
  unsigned __int8 v56; // bl
  _DWORD *v57; // r9
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  _DWORD v62[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v63; // [rsp+38h] [rbp-70h] BYREF
  __int64 v64; // [rsp+40h] [rbp-68h] BYREF
  __int64 v65; // [rsp+48h] [rbp-60h] BYREF
  __int64 v66; // [rsp+50h] [rbp-58h] BYREF
  __int64 v67; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  int v69; // [rsp+A0h] [rbp-8h]
  char v70; // [rsp+C0h] [rbp+18h]

  v65 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v70 = 0;
  v64 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_28;
  _disable();
  v6 = KeGetCurrentPrcb();
  v62[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[6];
        SchedulerAssist[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v9 = v6->SchedulerAssist;
    if ( v9 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v10 = v9[6] - 1;
        v9[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    do
      KeYieldProcessorEx(v62);
    while ( KiForceIdleLock );
  }
  if ( !CurrentPrcb->ClockOwner || !KeIsForceIdleEngaged() )
    goto LABEL_22;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
  if ( KiForceIdleWatchdogResetCount == 32 )
  {
    off_140C008C0[0]();
    v13 = 0;
  }
  else
  {
    v13 = KiForceIdleWatchdogResetCount + 1;
  }
  KiForceIdleWatchdogResetCount = v13;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
  {
    LOBYTE(v12) = 1;
    KiResetForceIdle(2LL, v12);
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  ++qword_140C31BD0;
  v14 = 1;
  v5 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
  v70 = 1;
  KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
  LOBYTE(v5->LowPart) = 0;
  v5[1] = InterruptTimePrecise;
LABEL_23:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  PrcbFlags = (__int64)KeGetCurrentPrcb();
  ThreadFlags2 = *(_QWORD *)(PrcbFlags + 33976);
  if ( ThreadFlags2 )
  {
    if ( *(_BYTE *)(PrcbFlags + 32) <= 1u )
    {
      v17 = *(_DWORD *)(ThreadFlags2 + 24) - 1;
      *(_DWORD *)(ThreadFlags2 + 24) = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(PrcbFlags);
    }
  }
  _enable();
  if ( !v14 )
  {
LABEL_28:
    v18 = *(_BYTE *)(a1 + 368) & 1;
    if ( CurrentPrcb->ClockOwner )
    {
      v19 = 3LL * (unsigned int)KiClockTickTraceIndex;
      KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
      v20 = (_QWORD *)((char *)&KiClockTickTraces + 8 * v19);
      v21 = KiClockOwnerOneShotRequestState == 1;
      v20[1] = MEMORY[0xFFFFF78000000008];
      if ( v21 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v23 = KeGetCurrentPrcb()->SchedulerAssist;
          v23[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KiClockOwnerOneShotRequestState = 2;
        KiClockOwnerOneShotRequest = 0LL;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v21 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      KiUpdateTime(v18, a2);
      if ( KiClockOwnerOneShotRequestState == 2 )
      {
        v28 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          PrcbFlags = (unsigned int)v28 + 1;
          v29 = KeGetCurrentPrcb()->SchedulerAssist;
          ThreadFlags2 = (-1LL << (v28 + 1)) & 0xFFFC;
          v29[5] |= ThreadFlags2;
        }
        KiSetClockIntervalToMinimumRequested(PrcbFlags, ThreadFlags2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && v28 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              PrcbFlags = (unsigned int)v28 + 1;
              ThreadFlags2 = -1LL << (v28 + 1);
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)ThreadFlags2;
              v21 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
        }
        __writecr8(v28);
      }
      *v20 = MEMORY[0xFFFFF78000000350];
      v34 = MEMORY[0xFFFFF78000000008];
      if ( KiClockState == 2 )
      {
        KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v64);
        _InterlockedExchange(&KiClockState, 0);
        KiEventClockStateChange(0, 2, &v65, &v64);
      }
      v35 = v34 + (unsigned int)KeTimeIncrement;
      v20[2] = v34;
      KiClockTimerNextTickTime = v35;
      goto LABEL_117;
    }
    v36 = KeGetCurrentPrcb();
    v37 = v69;
    ++v36->ClockInterrupts;
    ++v36->InterruptLastCount;
    _disable();
    v38 = MEMORY[0xFFFFF78000000320];
    if ( (v37 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v36, v36->LastTick, MEMORY[0xFFFFF78000000320], a2, v18);
    CurrentThread = v36->CurrentThread;
    v36->ClockKeepAlive = 1;
    if ( CurrentThread != v36->IdleThread )
    {
      if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
        goto LABEL_103;
      SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
      v66 = 0LL;
      v63 = 0LL;
      v67 = 0LL;
      if ( SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, ThreadFlags2, v36);
        ParentNode = v36->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v63,
          (__int64)&v67,
          (__int64)&v66);
        if ( (v66 & v36->GroupSetMember) == 0
          || (unsigned __int8)KiIsQosGroupingActive(
                                PrcbFlags,
                                v36->ParentNode->QosGroupingSets.SmtSet,
                                ParentNode->IdleNonParkedCpuSet)
          && (ThreadFlags2 & v42) != 0
          && (unsigned int)(unsigned __int8)CurrentThread->ThreadFlags2 - 1 <= 1
          && (ThreadFlags2 & v36->GroupSetMember) == 0 )
        {
          goto LABEL_103;
        }
        if ( (v63 & v36->GroupSetMember) == 0 )
        {
          ThreadFlags2 = v63;
          if ( (v42 & ParentNode->IdleSmtSet) != 0 )
            v42 &= ParentNode->IdleSmtSet;
          if ( (v42 & v63) != 0 )
            goto LABEL_103;
          ThreadFlags2 = v42 & v67 & ~v63;
          if ( SystemHeteroCpuPolicy - 3 <= 1 )
            EfficiencySchedulingClass = v36->PowerState.EfficiencySchedulingClass;
          else
            EfficiencySchedulingClass = v36->PowerState.PerformanceSchedulingClass;
          if ( ThreadFlags2 )
          {
            v44 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v45, ThreadFlags2);
              v62[1] = v45;
              v46 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v44 + v45)]];
              v47 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v46 + 33210) : *(_BYTE *)(v46 + 33209);
              if ( v47 > EfficiencySchedulingClass )
                goto LABEL_103;
              ThreadFlags2 &= ~*(_QWORD *)(v46 + 200);
            }
            while ( ThreadFlags2 );
          }
        }
      }
      v48 = KeGetCurrentPrcb();
      PrcbFlags = (unsigned int)v48->PrcbFlags.PrcbFlags;
      if ( (PrcbFlags & 0x300) != 0 )
      {
        _disable();
        PrcbFlags = (unsigned int)v48->PrcbFlags.PrcbFlags;
        ThreadFlags2 = (unsigned int)CurrentThread->ThreadFlags2;
        v49 = v48->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
        v50 = (v37 & 0x200) != 0;
        if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        {
          v51 = v49 | ((CurrentThread->ThreadFlags2 & 3) << 8);
          v48->PrcbFlags.PrcbFlags = v51;
          v52 = PoSetProcessorQoS(v48, (v51 >> 8) & 3);
          v49 = v48->PrcbFlags.PrcbFlags;
          if ( !v52 )
          {
LABEL_89:
            if ( (v49 & 0x300) == 0 )
              KeUpdatePendingQosRequest(v48);
            if ( v50 )
              _enable();
            goto LABEL_95;
          }
          v49 &= 0xFFFFFCFF;
        }
        v48->PrcbFlags.PrcbFlags = v49;
        goto LABEL_89;
      }
      if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        KeCheckAndApplyBamQos(v48, CurrentThread);
    }
LABEL_95:
    if ( MEMORY[0xFFFFF78000000320] <= v36->GenerationTarget )
    {
      PrcbFlags = (__int64)CurrentThread->SchedulingGroup;
      if ( !PrcbFlags || (PrcbFlags += v36->ScbOffset) == 0 )
      {
LABEL_111:
        if ( (signed int)(v36->ReadyScanTick - v38) < 0
          && (!KiShouldScanSharedReadyQueue((__int64)v36) || (v36->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v36->ReadySummary & 0x7FFE) == 0 )
        {
          v36->ReadyScanTick = v38 + 75;
        }
LABEL_117:
        if ( !v70 )
          return;
        goto LABEL_118;
      }
      while ( 1 )
      {
        ThreadFlags2 = *(unsigned __int8 *)(PrcbFlags + 112);
        v53 = PrcbFlags - v36->ScbOffset;
        v54 = ThreadFlags2 & 0x10;
        if ( (ThreadFlags2 & 4) != 0 )
        {
          if ( v54 )
            goto LABEL_108;
          if ( (ThreadFlags2 & 2) == 0 )
          {
            if ( *(__int64 *)(v53 + 48) <= 0 )
              break;
LABEL_108:
            v55 = *(_QWORD *)(PrcbFlags + 24);
LABEL_109:
            if ( *(_QWORD *)PrcbFlags >= v55 )
              break;
          }
        }
        else
        {
          if ( v54 )
          {
            v55 = *(_QWORD *)(PrcbFlags + 8);
            goto LABEL_109;
          }
          if ( (ThreadFlags2 & 2) == 0 && *(__int64 *)(v53 + 48) <= 0 )
            break;
        }
        PrcbFlags = *(_QWORD *)(PrcbFlags + 408);
        if ( !PrcbFlags )
          goto LABEL_111;
      }
    }
LABEL_103:
    v36->QuantumEnd = 1;
    if ( v36->NestingLevel )
      v36->InterruptRequest = 1;
    else
      HalRequestSoftwareInterrupt(2);
    goto LABEL_117;
  }
LABEL_118:
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v56 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
    {
      PrcbFlags = (unsigned int)v56 + 1;
      v57 = KeGetCurrentPrcb()->SchedulerAssist;
      ThreadFlags2 = (-1LL << (v56 + 1)) & 0xFFFC;
      v57[5] |= ThreadFlags2;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested(PrcbFlags, ThreadFlags2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && v56 <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v21 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
    }
    __writecr8(v56);
    if ( v5 )
      LOBYTE(v5->LowPart) = 1;
    ++qword_140C31BD8;
  }
}
