/*
 * XREFs of KeClockInterruptNotify @ 0x140305780
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140303240 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x140305670 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140521AC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14022FA04 (KiEventClockStateChange.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 *     PoExecuteIdleCheck @ 0x1405C6C1C (PoExecuteIdleCheck.c)
 */

unsigned __int64 __fastcall KeClockInterruptNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // r12
  unsigned __int8 v6; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  char *v9; // r15
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // r14
  struct _KPRCB *v11; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  __int64 ClockTickTraceIndex; // rcx
  char *v16; // r15
  unsigned __int8 v17; // bp
  __int64 v18; // rbx
  LARGE_INTEGER v19; // rsi
  __int64 v20; // r13
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v22; // rcx
  _KCLOCK_TIMER_STATE *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 result; // rax
  bool v26; // zf
  char *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  unsigned __int8 v33; // bl
  unsigned __int8 v34; // bl
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 InterruptTimePrecise; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  _DWORD *v49; // r9
  unsigned __int8 v50; // al
  _DWORD *v51; // r9
  int v52; // eax
  _DWORD *v53; // r9
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  _DWORD *v58; // r9
  unsigned __int8 v59; // al
  _DWORD *v60; // r9
  int v61; // eax
  __int16 v62; // bx
  __int64 v63; // rcx
  _DWORD *v64; // r9
  unsigned __int8 v65; // si
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  int v68; // eax
  unsigned __int8 v69; // di
  _DWORD *v70; // r9
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 CurrentIrql; // di
  _DWORD *v76; // r9
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  unsigned __int8 v81; // di
  _DWORD *v82; // r9
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  _DWORD *v85; // r8
  int v86; // eax
  LARGE_INTEGER v87; // [rsp+20h] [rbp-68h] BYREF
  __int64 v88; // [rsp+28h] [rbp-60h] BYREF
  __int64 v89; // [rsp+30h] [rbp-58h] BYREF
  char *v90; // [rsp+38h] [rbp-50h]
  _KCLOCK_TIMER_STATE *v91; // [rsp+40h] [rbp-48h]
  __int64 v92; // [rsp+48h] [rbp-40h]
  int v93; // [rsp+80h] [rbp-8h]
  int v94; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v95; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0;
  v89 = 0LL;
  v6 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0LL;
  v87.QuadPart = 0LL;
  v90 = 0LL;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v88 = 0LL;
  v91 = &CurrentPrcb->ClockTimerState;
  if ( !KiForceIdleDisabled )
  {
    _disable();
    v11 = KeGetCurrentPrcb();
    v94 = 0;
    SchedulerAssist = v11->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v35 = SchedulerAssist[6];
        SchedulerAssist[6] = v35 + 1;
        if ( v35 == -1 )
LABEL_43:
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      v31 = v11->SchedulerAssist;
      if ( v31 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v36 = v31[6] - 1;
          v31[6] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      do
        KeYieldProcessorEx(&v94, a2, a3, a4);
      while ( KiForceIdleLock );
      v32 = v11->SchedulerAssist;
      if ( v32 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v37 = v32[6];
          v32[6] = v37 + 1;
          if ( v37 == -1 )
            goto LABEL_43;
        }
      }
    }
    if ( CurrentPrcb->ClockOwner && !KiForceIdleDisabled && KiForceIdleState == 4 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v87);
      v41 = InterruptTimePrecise;
      if ( !KiClockTimerPerCpuTickScheduling )
        PoExecuteIdleCheck(InterruptTimePrecise);
      if ( KiForceIdleWatchdogResetCount == 32 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64))off_140C01F10[0])(v40, v39, a3);
        v42 = 0;
      }
      else
      {
        v42 = KiForceIdleWatchdogResetCount + 1;
      }
      KiForceIdleWatchdogResetCount = v42;
      if ( (unsigned __int64)(v41 - KiForceIdleActiveLastStartTime) > 0x1312D00 )
      {
        LOBYTE(v39) = 1;
        KiResetForceIdle(2LL, v39);
      }
      else
      {
        ++qword_140C2B190;
        v5 = 1;
        v9 = (char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
        v90 = v9;
        KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
        *v9 = 0;
        *((_QWORD *)v9 + 1) = v41;
      }
    }
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v43 = v14[6] - 1;
        v14[6] = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    _enable();
    if ( v5 )
    {
      result = 15LL;
      if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v13 = (struct _KPRCB *)((unsigned int)CurrentIrql + 1);
          v76 = KeGetCurrentPrcb()->SchedulerAssist;
          v76[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        LOBYTE(v13) = 1;
        CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        KiSetNextClockTickDueTime(v13);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v77 = KeGetCurrentIrql();
            if ( v77 <= 0xFu && CurrentIrql <= 0xFu && v77 >= 2u )
            {
              v78 = KeGetCurrentPrcb();
              v79 = v78->SchedulerAssist;
              v80 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v26 = (v80 & v79[5]) == 0;
              v79[5] &= v80;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v78);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( !v9 )
          goto LABEL_161;
      }
      else
      {
        if ( KiClockOwnerOneShotRequestState != 1 )
          return result;
        v81 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v81 <= 0xFu )
        {
          v82 = KeGetCurrentPrcb()->SchedulerAssist;
          v82[5] |= (-1 << (v81 + 1)) & 0xFFFC;
        }
        KiClockOwnerOneShotRequestState = 2;
        KiSetClockIntervalToMinimumRequested();
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            if ( v83 <= 0xFu && v81 <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = v84->SchedulerAssist;
              v86 = ~(unsigned __int16)(-1LL << (v81 + 1));
              v26 = (v86 & v85[5]) == 0;
              v85[5] &= v86;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v84);
            }
          }
        }
        result = v81;
        __writecr8(v81);
        if ( !v9 )
        {
LABEL_161:
          ++qword_140C2B198;
          return result;
        }
      }
      *v9 = 1;
      goto LABEL_161;
    }
  }
  ClockTickTraceIndex = CurrentPrcb->ClockTimerState.ClockTickTraceIndex;
  CurrentPrcb->ClockTimerState.ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
  v16 = (char *)p_ClockTimerState->ClockTickTraces + 32 * ClockTickTraceIndex + 8 * ClockTickTraceIndex;
  *((_QWORD *)v16 + 1) = MEMORY[0xFFFFF78000000008];
  v17 = *(_BYTE *)(a1 + 368) & 1;
  if ( !CurrentPrcb->ClockOwner )
  {
    if ( KiClockTimerPerCpuTickScheduling && !KiSerializeTimerExpiration )
    {
      v62 = v93;
      _disable();
      KiUpdateTimeAssist(0LL, 0, (__int64)&v87, (__int64)&v87);
      if ( (v62 & 0x200) != 0 )
        _enable();
      v63 = KeGetCurrentIrql();
      v95 = v63;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v63 <= 0xFu )
      {
        v64 = KeGetCurrentPrcb()->SchedulerAssist;
        v64[5] |= (-1 << (v63 + 1)) & 0xFFFC;
      }
      KiSetClockTimerKTimerDeadlines(CurrentPrcb, 0LL);
      v65 = v95;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && (unsigned __int8)v95 <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            a4 = (__int64)v67->SchedulerAssist;
            v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v95 + 1));
            v26 = (v68 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = (unsigned int)v68 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
      }
      __writecr8(v65);
    }
    KiUpdateRunTime(v17, v6, a3, a4);
    while ( 1 )
    {
      v18 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v19.QuadPart = MEMORY[0xFFFFF78000000350];
        v20 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v22 = MEMORY[0xFFFFF78000000340];
        if ( MEMORY[0xFFFFF78000000340] == v18 )
          break;
      }
      _mm_pause();
    }
    v23 = v91;
    v87 = PerformanceCounter;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v19.QuadPart )
    {
      v92 = 0LL;
      v24 = -1 - v19.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v22 = MEMORY[0xFFFFF78000000369];
        v24 <<= MEMORY[0xFFFFF78000000369];
      }
      v4 = ((unsigned __int64)v24 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v92 = v4;
    }
    *((_QWORD *)v16 + 2) = v4 + v20;
    *(_QWORD *)v16 = MEMORY[0xFFFFF78000000350];
    result = __rdtsc();
    v16[32] = 0;
    v26 = KiClockTimerPerCpuTickScheduling == 0;
    *((_QWORD *)v16 + 3) = result;
    if ( !v26 )
    {
      v69 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v69 <= 0xFu )
      {
        v22 = (unsigned int)v69 + 1;
        v70 = KeGetCurrentPrcb()->SchedulerAssist;
        v70[5] |= (-1 << (v69 + 1)) & 0xFFFC;
      }
      if ( v23->OneShotState == KClockTimerOneShotArmed )
        v23->OneShotState = KClockTimerOneShotRearmRequired;
      LOBYTE(v22) = 1;
      KiSetNextClockTickDueTime(v22);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v69 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << (v69 + 1));
            v26 = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
      }
      result = v69;
      __writecr8(v69);
    }
    return result;
  }
  v27 = (char *)&KiClockTickTraces + 40 * (unsigned int)KiClockTickTraceIndex;
  KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
  v26 = KiClockTimerPerCpuTickScheduling == 0;
  *((_QWORD *)v27 + 1) = MEMORY[0xFFFFF78000000008];
  if ( v26 )
  {
    if ( KiClockOwnerOneShotRequestState != 1 )
      goto LABEL_20;
    v33 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
    {
      v49 = KeGetCurrentPrcb()->SchedulerAssist;
      v49[5] |= (-1 << (v33 + 1)) & 0xFFFC;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiClockOwnerOneShotRequest = 0LL;
    if ( !KiIrqlFlags )
      goto LABEL_33;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    v50 = KeGetCurrentIrql();
    if ( v50 > 0xFu )
      goto LABEL_33;
    if ( v33 > 0xFu )
      goto LABEL_33;
    if ( v50 < 2u )
      goto LABEL_33;
    v46 = KeGetCurrentPrcb();
    v51 = v46->SchedulerAssist;
    v52 = ~(unsigned __int16)(-1LL << (v33 + 1));
    v26 = (v52 & v51[5]) == 0;
    v51[5] &= v52;
    if ( !v26 )
      goto LABEL_33;
LABEL_81:
    KiRemoveSystemWorkPriorityKick(v46);
LABEL_33:
    __writecr8(v33);
    goto LABEL_20;
  }
  if ( p_ClockTimerState->OneShotState == KClockTimerOneShotArmed )
  {
    v33 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      v44[5] |= (-1 << (v33 + 1)) & 0xFFFC;
    }
    p_ClockTimerState->OneShotState = KClockTimerOneShotRearmRequired;
    KiClockOwnerOneShotRequestState = 2;
    KiClockOwnerOneShotRequest = 0LL;
    if ( !KiIrqlFlags )
      goto LABEL_33;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    v45 = KeGetCurrentIrql();
    if ( v45 > 0xFu )
      goto LABEL_33;
    if ( v33 > 0xFu )
      goto LABEL_33;
    if ( v45 < 2u )
      goto LABEL_33;
    v46 = KeGetCurrentPrcb();
    v47 = v46->SchedulerAssist;
    v48 = ~(unsigned __int16)(-1LL << (v33 + 1));
    v26 = (v48 & v47[5]) == 0;
    v47[5] &= v48;
    if ( !v26 )
      goto LABEL_33;
    goto LABEL_81;
  }
LABEL_20:
  KiUpdateTime(v17, v6);
  if ( KiClockTimerPerCpuTickScheduling )
  {
    v34 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
    {
      v28 = (unsigned int)v34 + 1;
      v53 = KeGetCurrentPrcb()->SchedulerAssist;
      v53[5] |= (-1 << (v34 + 1)) & 0xFFFC;
    }
    LOBYTE(v28) = 1;
    KiSetNextClockTickDueTime(v28);
    if ( !KiIrqlFlags )
      goto LABEL_36;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_36;
    v54 = KeGetCurrentIrql();
    if ( v54 > 0xFu )
      goto LABEL_36;
    if ( v34 > 0xFu )
      goto LABEL_36;
    if ( v54 < 2u )
      goto LABEL_36;
    v55 = KeGetCurrentPrcb();
    v56 = v55->SchedulerAssist;
    v57 = ~(unsigned __int16)(-1LL << (v34 + 1));
    v26 = (v57 & v56[5]) == 0;
    v56[5] &= v57;
    if ( !v26 )
      goto LABEL_36;
    goto LABEL_101;
  }
  if ( KiClockOwnerOneShotRequestState != 2 )
    goto LABEL_22;
  v34 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
  {
    v58 = KeGetCurrentPrcb()->SchedulerAssist;
    v58[5] |= (-1 << (v34 + 1)) & 0xFFFC;
  }
  KiSetClockIntervalToMinimumRequested();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v59 = KeGetCurrentIrql();
      if ( v59 <= 0xFu && v34 <= 0xFu && v59 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v60 = v55->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (v34 + 1));
        v26 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
        if ( v26 )
LABEL_101:
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
LABEL_36:
  __writecr8(v34);
LABEL_22:
  *(_QWORD *)v27 = MEMORY[0xFFFFF78000000350];
  *(_QWORD *)v16 = MEMORY[0xFFFFF78000000350];
  *((_QWORD *)v27 + 3) = __rdtsc();
  *((_DWORD *)v27 + 8) = KeGetPcr()->Prcb.Number;
  v29 = __rdtsc();
  v16[32] = 1;
  *((_QWORD *)v16 + 3) = ((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29;
  v30 = MEMORY[0xFFFFF78000000008];
  if ( KiClockState == 2 )
  {
    KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v88, (int *)&v89);
    if ( !KiClockTimerPerCpuTickScheduling )
    {
      _InterlockedExchange(&KiClockState, 0);
      KiEventClockStateChange(0, 2, &v89, &v88);
    }
  }
  KiClockTimerNextTickTime = v30 + (unsigned int)KeTimeIncrement;
  result = v30 + p_ClockTimerState->TimeIncrement;
  p_ClockTimerState->NextTickDueTime = result;
  *((_QWORD *)v27 + 2) = v30;
  *((_QWORD *)v16 + 2) = v30;
  return result;
}
