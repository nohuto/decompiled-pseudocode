/*
 * XREFs of KeClockInterruptNotify @ 0x140216500
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140216420 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14021F0C0 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404CF860 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeAccumulateTicks @ 0x1402191B0 (KeAccumulateTicks.c)
 *     KiUpdateTime @ 0x14021C4D0 (KiUpdateTime.c)
 *     PoExecuteIdleCheck @ 0x14021CBF0 (PoExecuteIdleCheck.c)
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreClockTickRate @ 0x14027E5A0 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14027E614 (KiEventClockStateChange.c)
 *     KeIsForceIdleEngaged @ 0x14027F138 (KeIsForceIdleEngaged.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402ED85C (KiShouldScanSharedReadyQueue.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 *     KiIsQosGroupingActive @ 0x140396524 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeCheckAndApplyBamQos @ 0x140518FF0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x1405199B0 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140519CF0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x140519E08 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 *     PoSetProcessorQoS @ 0x14056911C (PoSetProcessorQoS.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r14
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
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
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
  __int64 v39; // rdx
  __int64 PrcbFlags; // rcx
  __int64 v41; // r9
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  unsigned __int8 EfficiencySchedulingClass; // r9
  int v49; // r11d
  unsigned __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // rdi
  unsigned int v54; // r8d
  bool v55; // r15
  unsigned int v56; // edx
  char v57; // al
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char v59; // dl
  __int64 v60; // r8
  char v61; // al
  unsigned __int64 v62; // rax
  unsigned __int8 v63; // bl
  _DWORD *v64; // r9
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  _DWORD v69[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v70; // [rsp+38h] [rbp-70h] BYREF
  __int64 v71; // [rsp+40h] [rbp-68h] BYREF
  __int64 v72; // [rsp+48h] [rbp-60h] BYREF
  __int64 v73; // [rsp+50h] [rbp-58h] BYREF
  __int64 v74; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  int v76; // [rsp+A0h] [rbp-8h]
  char v77; // [rsp+C0h] [rbp+18h]

  v2 = a2;
  v72 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v77 = 0;
  v71 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_28;
  _disable();
  v6 = KeGetCurrentPrcb();
  v69[0] = 0;
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
      KeYieldProcessorEx(v69, a2);
    while ( KiForceIdleLock );
  }
  if ( !CurrentPrcb->ClockOwner || !(unsigned __int8)KeIsForceIdleEngaged() )
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
  ++qword_140C31390;
  v14 = 1;
  v5 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
  v77 = 1;
  KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
  LOBYTE(v5->LowPart) = 0;
  v5[1] = InterruptTimePrecise;
LABEL_23:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v17 = v16[6] - 1;
      v16[6] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v15);
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
      KiUpdateTime(v18, v2);
      if ( KiClockOwnerOneShotRequestState == 2 )
      {
        v28 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          v29 = KeGetCurrentPrcb()->SchedulerAssist;
          v29[5] |= (-1 << (v28 + 1)) & 0xFFFC;
        }
        KiSetClockIntervalToMinimumRequested();
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && v28 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (v28 + 1));
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
        KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v71, &v72);
        _InterlockedExchange(&KiClockState, 0);
        KiEventClockStateChange(0LL, 2LL, &v72, &v71);
      }
      v35 = v34 + (unsigned int)KeTimeIncrement;
      v20[2] = v34;
      KiClockTimerNextTickTime = v35;
      goto LABEL_117;
    }
    v36 = KeGetCurrentPrcb();
    v37 = v76;
    ++v36->ClockInterrupts;
    ++v36->InterruptLastCount;
    _disable();
    v38 = MEMORY[0xFFFFF78000000320];
    if ( (v37 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v36, v36->LastTick, MEMORY[0xFFFFF78000000320], v2, v18);
    CurrentThread = v36->CurrentThread;
    v36->ClockKeepAlive = 1;
    if ( CurrentThread != v36->IdleThread )
    {
      if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
        goto LABEL_103;
      SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
      v73 = 0LL;
      v70 = 0LL;
      v74 = 0LL;
      if ( SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v39, v36, v41);
        ParentNode = v36->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v70,
          (__int64)&v74,
          (__int64)&v73);
        if ( (v73 & v36->GroupSetMember) == 0
          || (unsigned __int8)KiIsQosGroupingActive(
                                PrcbFlags,
                                v36->ParentNode->QosGroupingSets.SmtSet,
                                ParentNode->IdleNonParkedCpuSet)
          && (v45 & v46) != 0
          && (unsigned int)(unsigned __int8)CurrentThread->ThreadFlags2 - 1 <= 1
          && (v45 & v36->GroupSetMember) == 0 )
        {
          goto LABEL_103;
        }
        if ( (v70 & v36->GroupSetMember) == 0 )
        {
          if ( (v46 & ParentNode->IdleSmtSet) != 0 )
            v46 &= ParentNode->IdleSmtSet;
          if ( (v46 & v70) != 0 )
            goto LABEL_103;
          v47 = v46 & v74 & ~v70;
          if ( SystemHeteroCpuPolicy - 3 <= 1 )
            EfficiencySchedulingClass = v36->PowerState.EfficiencySchedulingClass;
          else
            EfficiencySchedulingClass = v36->PowerState.PerformanceSchedulingClass;
          if ( v47 )
          {
            v49 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v50, v47);
              v69[1] = v50;
              v51 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v49 + v50)]];
              v52 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v51 + 33210) : *(_BYTE *)(v51 + 33209);
              if ( v52 > EfficiencySchedulingClass )
                goto LABEL_103;
              v47 &= ~*(_QWORD *)(v51 + 200);
            }
            while ( v47 );
          }
        }
      }
      v53 = KeGetCurrentPrcb();
      PrcbFlags = (unsigned int)v53->PrcbFlags.PrcbFlags;
      if ( (PrcbFlags & 0x300) != 0 )
      {
        _disable();
        PrcbFlags = (unsigned int)v53->PrcbFlags.PrcbFlags;
        v54 = v53->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
        v55 = (v37 & 0x200) != 0;
        if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        {
          v56 = v54 | ((CurrentThread->ThreadFlags2 & 3) << 8);
          v53->PrcbFlags.PrcbFlags = v56;
          v57 = PoSetProcessorQoS(v53, (v56 >> 8) & 3);
          v54 = v53->PrcbFlags.PrcbFlags;
          if ( !v57 )
          {
LABEL_89:
            if ( (v54 & 0x300) == 0 )
              KeUpdatePendingQosRequest(v53);
            if ( v55 )
              _enable();
            goto LABEL_95;
          }
          v54 &= 0xFFFFFCFF;
        }
        v53->PrcbFlags.PrcbFlags = v54;
        goto LABEL_89;
      }
      if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        KeCheckAndApplyBamQos(v53, CurrentThread);
    }
LABEL_95:
    if ( MEMORY[0xFFFFF78000000320] <= v36->GenerationTarget )
    {
      SchedulingGroup = CurrentThread->SchedulingGroup;
      if ( !SchedulingGroup || (PrcbFlags = (__int64)SchedulingGroup + v36->ScbOffset) == 0 )
      {
LABEL_111:
        if ( (signed int)(v36->ReadyScanTick - v38) < 0
          && (!(unsigned int)KiShouldScanSharedReadyQueue(v36) || (v36->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v36->ReadySummary & 0x7FFE) == 0 )
        {
          v36->ReadyScanTick = v38 + 75;
        }
LABEL_117:
        if ( !v77 )
          return;
        goto LABEL_118;
      }
      while ( 1 )
      {
        v59 = *(_BYTE *)(PrcbFlags + 112);
        v60 = PrcbFlags - v36->ScbOffset;
        v61 = v59 & 0x10;
        if ( (v59 & 4) != 0 )
        {
          if ( v61 )
            goto LABEL_108;
          if ( (v59 & 2) == 0 )
          {
            if ( *(__int64 *)(v60 + 48) <= 0 )
              break;
LABEL_108:
            v62 = *(_QWORD *)(PrcbFlags + 24);
LABEL_109:
            if ( *(_QWORD *)PrcbFlags >= v62 )
              break;
          }
        }
        else
        {
          if ( v61 )
          {
            v62 = *(_QWORD *)(PrcbFlags + 8);
            goto LABEL_109;
          }
          if ( (v59 & 2) == 0 && *(__int64 *)(v60 + 48) <= 0 )
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
    {
      v36->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(PrcbFlags) = 2;
      HalRequestSoftwareInterrupt(PrcbFlags);
    }
    goto LABEL_117;
  }
LABEL_118:
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v63 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v63 <= 0xFu )
    {
      v64 = KeGetCurrentPrcb()->SchedulerAssist;
      v64[5] |= (-1 << (v63 + 1)) & 0xFFFC;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && v63 <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << (v63 + 1));
          v21 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
    }
    __writecr8(v63);
    if ( v5 )
      LOBYTE(v5->LowPart) = 1;
    ++qword_140C31398;
  }
}
