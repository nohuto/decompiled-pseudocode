/*
 * XREFs of KeClockInterruptNotify @ 0x14026F550
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x14026F470 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140278110 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404CF3B0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiSetClockIntervalToMinimumRequested @ 0x1402407D0 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x140241808 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14024187C (KiEventClockStateChange.c)
 *     KeIsForceIdleEngaged @ 0x140242A38 (KeIsForceIdleEngaged.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 *     KiUpdateTime @ 0x140275520 (KiUpdateTime.c)
 *     PoExecuteIdleCheck @ 0x140275C40 (PoExecuteIdleCheck.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     KiShouldScanSharedReadyQueue @ 0x14033299C (KiShouldScanSharedReadyQueue.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiIsQosGroupingActive @ 0x140395954 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeCheckAndApplyBamQos @ 0x1405189A0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x140519360 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1405196A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1405197B8 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 *     PoSetProcessorQoS @ 0x140568ACC (PoSetProcessorQoS.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  LARGE_INTEGER *v7; // r12
  struct _KPRCB *v8; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v14; // rdx
  int v15; // eax
  char v16; // r13
  __int64 PrcbFlags; // rcx
  __int64 ThreadFlags2; // rdx
  int v19; // eax
  unsigned __int8 v20; // di
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  bool v23; // zf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // bl
  _DWORD *v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rax
  struct _KPRCB *v38; // rbx
  __int16 v39; // r15
  int v40; // r13d
  __int64 v41; // r9
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v45; // r8
  unsigned __int8 EfficiencySchedulingClass; // r9
  int v47; // r11d
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // rdi
  unsigned int v52; // r8d
  bool v53; // r15
  unsigned int v54; // edx
  char v55; // al
  __int64 v56; // r8
  char v57; // al
  unsigned __int64 v58; // rax
  unsigned __int8 v59; // bl
  _DWORD *v60; // r9
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  _DWORD v65[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v66; // [rsp+38h] [rbp-70h] BYREF
  __int64 v67; // [rsp+40h] [rbp-68h] BYREF
  __int64 v68; // [rsp+48h] [rbp-60h] BYREF
  __int64 v69; // [rsp+50h] [rbp-58h] BYREF
  __int64 v70; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  int v72; // [rsp+A0h] [rbp-8h]
  char v73; // [rsp+C0h] [rbp+18h]

  v4 = a2;
  v68 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v73 = 0;
  v67 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_28;
  _disable();
  v8 = KeGetCurrentPrcb();
  v65[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[6];
        SchedulerAssist[6] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v11 = v8->SchedulerAssist;
    if ( v11 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v12 = v11[6] - 1;
        v11[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    do
      KeYieldProcessorEx(v65, a2, a3, a4);
    while ( KiForceIdleLock );
  }
  if ( !CurrentPrcb->ClockOwner || !KeIsForceIdleEngaged() )
    goto LABEL_22;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
  if ( KiForceIdleWatchdogResetCount == 32 )
  {
    off_140C008C0[0]();
    v15 = 0;
  }
  else
  {
    v15 = KiForceIdleWatchdogResetCount + 1;
  }
  KiForceIdleWatchdogResetCount = v15;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
  {
    LOBYTE(v14) = 1;
    KiResetForceIdle(2LL, v14);
LABEL_22:
    v16 = 0;
    goto LABEL_23;
  }
  ++qword_140C315B0;
  v16 = 1;
  v7 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
  v73 = 1;
  KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
  LOBYTE(v7->LowPart) = 0;
  v7[1] = InterruptTimePrecise;
LABEL_23:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  PrcbFlags = (__int64)KeGetCurrentPrcb();
  ThreadFlags2 = *(_QWORD *)(PrcbFlags + 33976);
  if ( ThreadFlags2 )
  {
    if ( *(_BYTE *)(PrcbFlags + 32) <= 1u )
    {
      v19 = *(_DWORD *)(ThreadFlags2 + 24) - 1;
      *(_DWORD *)(ThreadFlags2 + 24) = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(PrcbFlags);
    }
  }
  _enable();
  if ( !v16 )
  {
LABEL_28:
    v20 = *(_BYTE *)(a1 + 368) & 1;
    if ( CurrentPrcb->ClockOwner )
    {
      v21 = 3LL * (unsigned int)KiClockTickTraceIndex;
      KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
      v22 = (_QWORD *)((char *)&KiClockTickTraces + 8 * v21);
      v23 = KiClockOwnerOneShotRequestState == 1;
      v22[1] = MEMORY[0xFFFFF78000000008];
      if ( v23 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v25 = KeGetCurrentPrcb()->SchedulerAssist;
          v25[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KiClockOwnerOneShotRequestState = 2;
        KiClockOwnerOneShotRequest = 0LL;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      KiUpdateTime(v20, v4);
      if ( KiClockOwnerOneShotRequestState == 2 )
      {
        v30 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
        {
          PrcbFlags = (unsigned int)v30 + 1;
          v31 = KeGetCurrentPrcb()->SchedulerAssist;
          ThreadFlags2 = (-1LL << (v30 + 1)) & 0xFFFC;
          v31[5] |= ThreadFlags2;
        }
        KiSetClockIntervalToMinimumRequested(PrcbFlags, ThreadFlags2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v30 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              PrcbFlags = (unsigned int)v30 + 1;
              ThreadFlags2 = -1LL << (v30 + 1);
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)ThreadFlags2;
              v23 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v30);
      }
      *v22 = MEMORY[0xFFFFF78000000350];
      v36 = MEMORY[0xFFFFF78000000008];
      if ( KiClockState == 2 )
      {
        KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v67);
        _InterlockedExchange(&KiClockState, 0);
        KiEventClockStateChange(0, 2, &v68, &v67);
      }
      v37 = v36 + (unsigned int)KeTimeIncrement;
      v22[2] = v36;
      KiClockTimerNextTickTime = v37;
      goto LABEL_117;
    }
    v38 = KeGetCurrentPrcb();
    v39 = v72;
    ++v38->ClockInterrupts;
    ++v38->InterruptLastCount;
    _disable();
    v40 = MEMORY[0xFFFFF78000000320];
    if ( (v39 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v38, v38->LastTick, MEMORY[0xFFFFF78000000320], v4, v20);
    CurrentThread = v38->CurrentThread;
    v38->ClockKeepAlive = 1;
    if ( CurrentThread != v38->IdleThread )
    {
      if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
        goto LABEL_103;
      SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
      v69 = 0LL;
      v66 = 0LL;
      v70 = 0LL;
      if ( SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, ThreadFlags2, v38, v41);
        ParentNode = v38->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v66,
          (__int64)&v70,
          (__int64)&v69);
        if ( (v69 & v38->GroupSetMember) == 0
          || (unsigned __int8)KiIsQosGroupingActive(
                                PrcbFlags,
                                v38->ParentNode->QosGroupingSets.SmtSet,
                                ParentNode->IdleNonParkedCpuSet)
          && (ThreadFlags2 & v45) != 0
          && (unsigned int)(unsigned __int8)CurrentThread->ThreadFlags2 - 1 <= 1
          && (ThreadFlags2 & v38->GroupSetMember) == 0 )
        {
          goto LABEL_103;
        }
        if ( (v66 & v38->GroupSetMember) == 0 )
        {
          ThreadFlags2 = v66;
          if ( (v45 & ParentNode->IdleSmtSet) != 0 )
            v45 &= ParentNode->IdleSmtSet;
          if ( (v45 & v66) != 0 )
            goto LABEL_103;
          ThreadFlags2 = v45 & v70 & ~v66;
          if ( SystemHeteroCpuPolicy - 3 <= 1 )
            EfficiencySchedulingClass = v38->PowerState.EfficiencySchedulingClass;
          else
            EfficiencySchedulingClass = v38->PowerState.PerformanceSchedulingClass;
          if ( ThreadFlags2 )
          {
            v47 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v48, ThreadFlags2);
              v65[1] = v48;
              v49 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v47 + v48)]];
              v50 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v49 + 33210) : *(_BYTE *)(v49 + 33209);
              if ( v50 > EfficiencySchedulingClass )
                goto LABEL_103;
              ThreadFlags2 &= ~*(_QWORD *)(v49 + 200);
            }
            while ( ThreadFlags2 );
          }
        }
      }
      v51 = KeGetCurrentPrcb();
      PrcbFlags = (unsigned int)v51->PrcbFlags.PrcbFlags;
      if ( (PrcbFlags & 0x300) != 0 )
      {
        _disable();
        PrcbFlags = (unsigned int)v51->PrcbFlags.PrcbFlags;
        ThreadFlags2 = (unsigned int)CurrentThread->ThreadFlags2;
        v52 = v51->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
        v53 = (v39 & 0x200) != 0;
        if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        {
          v54 = v52 | ((CurrentThread->ThreadFlags2 & 3) << 8);
          v51->PrcbFlags.PrcbFlags = v54;
          v55 = PoSetProcessorQoS(v51, (v54 >> 8) & 3);
          v52 = v51->PrcbFlags.PrcbFlags;
          if ( !v55 )
          {
LABEL_89:
            if ( (v52 & 0x300) == 0 )
              KeUpdatePendingQosRequest(v51);
            if ( v53 )
              _enable();
            goto LABEL_95;
          }
          v52 &= 0xFFFFFCFF;
        }
        v51->PrcbFlags.PrcbFlags = v52;
        goto LABEL_89;
      }
      if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        KeCheckAndApplyBamQos(v51, CurrentThread);
    }
LABEL_95:
    if ( MEMORY[0xFFFFF78000000320] <= v38->GenerationTarget )
    {
      PrcbFlags = (__int64)CurrentThread->SchedulingGroup;
      if ( !PrcbFlags || (PrcbFlags += v38->ScbOffset) == 0 )
      {
LABEL_111:
        if ( (signed int)(v38->ReadyScanTick - v40) < 0
          && (!(unsigned int)KiShouldScanSharedReadyQueue(v38) || (v38->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v38->ReadySummary & 0x7FFE) == 0 )
        {
          v38->ReadyScanTick = v40 + 75;
        }
LABEL_117:
        if ( !v73 )
          return;
        goto LABEL_118;
      }
      while ( 1 )
      {
        ThreadFlags2 = *(unsigned __int8 *)(PrcbFlags + 112);
        v56 = PrcbFlags - v38->ScbOffset;
        v57 = ThreadFlags2 & 0x10;
        if ( (ThreadFlags2 & 4) != 0 )
        {
          if ( v57 )
            goto LABEL_108;
          if ( (ThreadFlags2 & 2) == 0 )
          {
            if ( *(__int64 *)(v56 + 48) <= 0 )
              break;
LABEL_108:
            v58 = *(_QWORD *)(PrcbFlags + 24);
LABEL_109:
            if ( *(_QWORD *)PrcbFlags >= v58 )
              break;
          }
        }
        else
        {
          if ( v57 )
          {
            v58 = *(_QWORD *)(PrcbFlags + 8);
            goto LABEL_109;
          }
          if ( (ThreadFlags2 & 2) == 0 && *(__int64 *)(v56 + 48) <= 0 )
            break;
        }
        PrcbFlags = *(_QWORD *)(PrcbFlags + 408);
        if ( !PrcbFlags )
          goto LABEL_111;
      }
    }
LABEL_103:
    v38->QuantumEnd = 1;
    if ( v38->NestingLevel )
    {
      v38->InterruptRequest = 1;
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
    v59 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
    {
      PrcbFlags = (unsigned int)v59 + 1;
      v60 = KeGetCurrentPrcb()->SchedulerAssist;
      ThreadFlags2 = (-1LL << (v59 + 1)) & 0xFFFC;
      v60[5] |= ThreadFlags2;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested(PrcbFlags, ThreadFlags2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v61 = KeGetCurrentIrql();
        if ( v61 <= 0xFu && v59 <= 0xFu && v61 >= 2u )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = ~(unsigned __int16)(-1LL << (v59 + 1));
          v23 = (v64 & v63[5]) == 0;
          v63[5] &= v64;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v62);
        }
      }
    }
    __writecr8(v59);
    if ( v7 )
      LOBYTE(v7->LowPart) = 1;
    ++qword_140C315B8;
  }
}
