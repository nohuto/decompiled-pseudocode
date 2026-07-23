/*
 * XREFs of KeClockInterruptNotify @ 0x140280F70
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140280E90 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140288A00 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D2E00 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiSetClockIntervalToMinimumRequested @ 0x140266620 (KiSetClockIntervalToMinimumRequested.c)
 *     KiEventClockStateChange @ 0x140266CF4 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x140266D34 (KiRestoreClockTickRate.c)
 *     PoExecuteIdleCheck @ 0x14027D7F0 (PoExecuteIdleCheck.c)
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402DCAB4 (KiShouldScanSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1402E0E68 (KeIsForceIdleEngaged.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiIsQosGroupingActive @ 0x1403989E4 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeCheckAndApplyBamQos @ 0x14051C9C0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14051D380 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051D6C0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051D7D8 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 *     PoSetProcessorQoS @ 0x14056CB4C (PoSetProcessorQoS.c)
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
  char v18; // di
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
  __int64 v39; // r9
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v43; // r8
  unsigned __int8 EfficiencySchedulingClass; // r9
  int v45; // r11d
  unsigned __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // rdi
  unsigned int v50; // r8d
  bool v51; // r15
  unsigned int v52; // edx
  char v53; // al
  __int64 v54; // r8
  char v55; // al
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // bl
  _DWORD *v58; // r9
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  _DWORD v63[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v64; // [rsp+38h] [rbp-70h] BYREF
  __int64 v65; // [rsp+40h] [rbp-68h] BYREF
  __int64 v66; // [rsp+48h] [rbp-60h] BYREF
  __int64 v67; // [rsp+50h] [rbp-58h] BYREF
  __int64 v68; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  int v70; // [rsp+A0h] [rbp-8h]
  char v71; // [rsp+C0h] [rbp+18h]

  v66 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v71 = 0;
  v65 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_28;
  _disable();
  v6 = KeGetCurrentPrcb();
  v63[0] = 0;
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
      KeYieldProcessorEx(v63);
    while ( KiForceIdleLock );
  }
  if ( !CurrentPrcb->ClockOwner || !(unsigned __int8)KeIsForceIdleEngaged() )
    goto LABEL_22;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  PoExecuteIdleCheck(InterruptTimePrecise.QuadPart);
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
  ++qword_140C31470;
  v14 = 1;
  v5 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
  v71 = 1;
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
        KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v65);
        _InterlockedExchange(&KiClockState, 0);
        KiEventClockStateChange(0, 2, &v66, &v65);
      }
      v35 = v34 + (unsigned int)KeTimeIncrement;
      v20[2] = v34;
      KiClockTimerNextTickTime = v35;
      goto LABEL_117;
    }
    v36 = KeGetCurrentPrcb();
    v37 = v70;
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
      v67 = 0LL;
      v64 = 0LL;
      v68 = 0LL;
      if ( SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, ThreadFlags2, v36, v39);
        ParentNode = v36->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v64,
          (__int64)&v68,
          (__int64)&v67);
        if ( (v67 & v36->GroupSetMember) == 0
          || (unsigned __int8)KiIsQosGroupingActive(
                                PrcbFlags,
                                v36->ParentNode->QosGroupingSets.SmtSet,
                                ParentNode->IdleNonParkedCpuSet)
          && (ThreadFlags2 & v43) != 0
          && (unsigned int)(unsigned __int8)CurrentThread->ThreadFlags2 - 1 <= 1
          && (ThreadFlags2 & v36->GroupSetMember) == 0 )
        {
          goto LABEL_103;
        }
        if ( (v64 & v36->GroupSetMember) == 0 )
        {
          ThreadFlags2 = v64;
          if ( (v43 & ParentNode->IdleSmtSet) != 0 )
            v43 &= ParentNode->IdleSmtSet;
          if ( (v43 & v64) != 0 )
            goto LABEL_103;
          ThreadFlags2 = v43 & v68 & ~v64;
          if ( SystemHeteroCpuPolicy - 3 <= 1 )
            EfficiencySchedulingClass = v36->PowerState.EfficiencySchedulingClass;
          else
            EfficiencySchedulingClass = v36->PowerState.PerformanceSchedulingClass;
          if ( ThreadFlags2 )
          {
            v45 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v46, ThreadFlags2);
              v63[1] = v46;
              v47 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v45 + v46)]];
              v48 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v47 + 33210) : *(_BYTE *)(v47 + 33209);
              if ( v48 > EfficiencySchedulingClass )
                goto LABEL_103;
              ThreadFlags2 &= ~*(_QWORD *)(v47 + 200);
            }
            while ( ThreadFlags2 );
          }
        }
      }
      v49 = KeGetCurrentPrcb();
      PrcbFlags = (unsigned int)v49->PrcbFlags.PrcbFlags;
      if ( (PrcbFlags & 0x300) != 0 )
      {
        _disable();
        PrcbFlags = (unsigned int)v49->PrcbFlags.PrcbFlags;
        ThreadFlags2 = (unsigned int)CurrentThread->ThreadFlags2;
        v50 = v49->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
        v51 = (v37 & 0x200) != 0;
        if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        {
          v52 = v50 | ((CurrentThread->ThreadFlags2 & 3) << 8);
          v49->PrcbFlags.PrcbFlags = v52;
          v53 = PoSetProcessorQoS(v49, (v52 >> 8) & 3);
          v50 = v49->PrcbFlags.PrcbFlags;
          if ( !v53 )
          {
LABEL_89:
            if ( (v50 & 0x300) == 0 )
              KeUpdatePendingQosRequest(v49);
            if ( v51 )
              _enable();
            goto LABEL_95;
          }
          v50 &= 0xFFFFFCFF;
        }
        v49->PrcbFlags.PrcbFlags = v50;
        goto LABEL_89;
      }
      if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        KeCheckAndApplyBamQos(v49, CurrentThread);
    }
LABEL_95:
    if ( MEMORY[0xFFFFF78000000320] <= v36->GenerationTarget )
    {
      PrcbFlags = (__int64)CurrentThread->SchedulingGroup;
      if ( !PrcbFlags || (PrcbFlags += v36->ScbOffset) == 0 )
      {
LABEL_111:
        if ( (signed int)(v36->ReadyScanTick - v38) < 0
          && (!(unsigned int)KiShouldScanSharedReadyQueue(v36) || (v36->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v36->ReadySummary & 0x7FFE) == 0 )
        {
          v36->ReadyScanTick = v38 + 75;
        }
LABEL_117:
        if ( !v71 )
          return;
        goto LABEL_118;
      }
      while ( 1 )
      {
        ThreadFlags2 = *(unsigned __int8 *)(PrcbFlags + 112);
        v54 = PrcbFlags - v36->ScbOffset;
        v55 = ThreadFlags2 & 0x10;
        if ( (ThreadFlags2 & 4) != 0 )
        {
          if ( v55 )
            goto LABEL_108;
          if ( (ThreadFlags2 & 2) == 0 )
          {
            if ( *(__int64 *)(v54 + 48) <= 0 )
              break;
LABEL_108:
            v56 = *(_QWORD *)(PrcbFlags + 24);
LABEL_109:
            if ( *(_QWORD *)PrcbFlags >= v56 )
              break;
          }
        }
        else
        {
          if ( v55 )
          {
            v56 = *(_QWORD *)(PrcbFlags + 8);
            goto LABEL_109;
          }
          if ( (ThreadFlags2 & 2) == 0 && *(__int64 *)(v54 + 48) <= 0 )
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
    v57 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
    {
      PrcbFlags = (unsigned int)v57 + 1;
      v58 = KeGetCurrentPrcb()->SchedulerAssist;
      ThreadFlags2 = (-1LL << (v57 + 1)) & 0xFFFC;
      v58[5] |= ThreadFlags2;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested(PrcbFlags, ThreadFlags2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && v57 <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v21 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v57);
    if ( v5 )
      LOBYTE(v5->LowPart) = 1;
    ++qword_140C31478;
  }
}
