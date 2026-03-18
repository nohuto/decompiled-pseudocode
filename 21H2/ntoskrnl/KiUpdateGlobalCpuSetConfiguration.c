/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14020E464
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x14020E67C (KiTryToAcquireThreadLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiCheckThreadAffinity @ 0x140290B74 (KiCheckThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // r12d
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r15d
  int v10; // r8d
  char v11; // al
  unsigned int v12; // esi
  __int64 v13; // rsi
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rdi
  _BYTE *v17; // r14
  char v18; // cl
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  int ThreadEffectiveRankNonZero; // eax
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  struct _KPRCB *v31; // rsi
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  struct _KPRCB *v36; // rsi
  _DWORD *v37; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // edx
  char v46; // al
  char v47; // al
  int v48; // eax
  __int64 v49; // rcx
  int v50; // [rsp+78h] [rbp+10h] BYREF
  int v51; // [rsp+80h] [rbp+18h] BYREF
  int v52; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v25 = SchedulerAssist[6];
            SchedulerAssist[6] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v27 = v26[6] - 1;
            v26[6] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v50);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v7 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v7, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v30 = v29[6] - 1;
          v29[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      v31 = KeGetCurrentPrcb();
      v51 = 0;
      while ( 1 )
      {
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v33 = v32[6];
            v32[6] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
          break;
        v34 = v31->SchedulerAssist;
        if ( v34 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v35 = v34[6] - 1;
            v34[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        do
          KeYieldProcessorEx(&v51);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v36 = KeGetCurrentPrcb();
      v52 = 0;
      while ( 1 )
      {
        v37 = v36->SchedulerAssist;
        if ( v37 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v38 = v37[6];
            v37[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v39 = v36->SchedulerAssist;
        if ( v39 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v40 = v39[6] - 1;
            v39[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        do
          KeYieldProcessorEx(&v52);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
      if ( v7 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v43 = v42[6] - 1;
          v42[6] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      KiReleaseThreadLockSafe(v7);
    }
    v8 = *(_DWORD *)(v7 + 588);
    v9 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v7) )
    {
      KiComputeThreadAffinity();
      v11 = *(_BYTE *)(v7 + 388);
      if ( v11 == 2 || v11 == 5 )
      {
        LOBYTE(v10) = 2;
        v9 = KiRescheduleThreadAfterAffinityChange(v7, *(_QWORD *)(v7 + 576), v10, v4, 0LL, a1);
      }
    }
    v12 = *(_DWORD *)(v7 + 588);
    KiReleaseThreadLockSafe(v7);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v7, 1350LL, v8, v12);
    v13 = *(_QWORD *)(v4 + 16);
    if ( v13 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v16 = *(_QWORD *)(v4 + 8);
      v17 = *(_BYTE **)(v4 + 56);
      if ( (*(_BYTE *)(v16 + 2) & 4) == 0
        || *(char *)(v16 + 195) >= 16
        || !*(_QWORD *)(v16 + 104)
        || (v22 = *(_QWORD *)(v16 + 104)) == 0
        || (v23 = *(unsigned int *)(v4 + 216) + v22) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v16, v23, 0, 0, 0LL),
            v18 = 1,
            !ThreadEffectiveRankNonZero) )
      {
        v18 = *(_BYTE *)(v16 + 195);
      }
      v19 = v18 & 0x7F | (*(_BYTE *)(v16 + 119) << 7);
      *v17 = v19;
      v20 = *(_QWORD *)(v4 + 35000);
      if ( v20 )
      {
        if ( v16 == *(_QWORD *)(v4 + 24) )
          v44 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v44 = v19 & 0x7F;
        KiSetSchedulerAssistPriority(v20, v44, 0LL);
      }
      v21 = *(_QWORD *)(v4 + 56);
      if ( KeHeteroSystem )
      {
        v45 = *(_DWORD *)(v16 + 80);
        v46 = (*(_BYTE *)(v21 + 64) ^ *(_BYTE *)(v16 + 512)) & 7 ^ *(_BYTE *)(v21 + 64);
        v47 = (v46 ^ (8 * *(_BYTE *)(v16 + 516))) & 0x38 ^ v46;
        if ( v45 <= *(_DWORD *)(v16 + 84) )
          v45 = *(_DWORD *)(v16 + 84);
        *(_BYTE *)(v21 + 64) = (v45 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v47 & 0xBF;
      }
      KiSelectNextThread(v4, a1, v21);
      _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v13);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v48 = v15[6] - 1;
        v15[6] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( v9 )
    {
      v49 = *(unsigned int *)(v4 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v49 )
      {
        LOBYTE(v15) = 2;
        KiSendSoftwareInterrupt(v49, v15);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
