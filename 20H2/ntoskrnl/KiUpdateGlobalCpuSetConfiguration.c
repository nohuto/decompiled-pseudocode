/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiTryToAcquireThreadLock @ 0x1402D8D68 (KiTryToAcquireThreadLock.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1402DC3E4 (KiCheckThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402F7C3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSendSoftwareInterrupt @ 0x1402F7E88 (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A5E14 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 i; // r15
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  int v14; // r14d
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rsi
  struct _KPRCB *v18; // rcx
  int v19; // r8d
  char v20; // al
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  struct _KPRCB *v23; // rsi
  _DWORD *v24; // rcx
  struct _KPRCB *v25; // rsi
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  __int64 v29; // rdi
  char v30; // cl
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  bool IsThreadRankNonZero; // al
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  int v46; // [rsp+78h] [rbp+10h] BYREF
  int v47; // [rsp+80h] [rbp+18h] BYREF
  int v48; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v7 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v7 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v31 = SchedulerAssist[6];
            SchedulerAssist[6] = v31 + 1;
            if ( v31 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v28 = CurrentPrcb->SchedulerAssist;
        if ( v28 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v28[6] - 1;
            v28[6] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v46, a2, a3, a4);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v10 = *(_QWORD *)(v7 + 8);
      if ( KiTryToAcquireThreadLock(v10, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v10 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = (__int64)v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v33 = *(_DWORD *)(v22 + 24) - 1;
          *(_DWORD *)(v22 + 24) = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      v23 = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v34 = v24[6];
            v24[6] = v34 + 1;
            if ( v34 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
          break;
        v35 = v23->SchedulerAssist;
        if ( v35 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v36 = v35[6] - 1;
            v35[6] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v47, v22, v11, v12);
        while ( *(_QWORD *)(v10 + 64) );
      }
      v25 = KeGetCurrentPrcb();
      v48 = 0;
      while ( 1 )
      {
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v37 = v26[6];
            v26[6] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v27 = v25->SchedulerAssist;
        if ( v27 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v38 = v27[6] - 1;
            v27[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        do
          KeYieldProcessorEx(&v48, v22, v11, v12);
        while ( *(_QWORD *)(v7 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 868));
      if ( v10 == *(_QWORD *)(v7 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v41 = v40[6] - 1;
          v40[6] = v41;
          if ( !v41 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      KiReleaseThreadLockSafe(v10);
    }
    v13 = *(_DWORD *)(v10 + 588);
    v14 = 0;
    if ( !KiCheckThreadAffinity(v10) )
    {
      KiComputeThreadAffinity(v15);
      v20 = *(_BYTE *)(v10 + 388);
      if ( v20 == 2 || v20 == 5 )
      {
        LOBYTE(v19) = 2;
        v14 = KiRescheduleThreadAfterAffinityChange(v10, (int)v10 + 576, v19, v7, 0LL, a1);
      }
    }
    v16 = *(_DWORD *)(v10 + 588);
    KiReleaseThreadLockSafe(v10);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v10, 1350LL, v13, v16);
    v17 = *(_QWORD *)(v7 + 16);
    if ( v17 && !KiCheckThreadAffinity(*(_QWORD *)(v7 + 16)) )
    {
      v29 = *(_QWORD *)(v7 + 8);
      if ( (*(_BYTE *)(v29 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v7 + 8), (struct _KPRCB *)v7),
            v30 = 1,
            !IsThreadRankNonZero) )
      {
        v30 = *(_BYTE *)(v29 + 195);
      }
      **(_BYTE **)(v7 + 56) = v30;
      if ( *(_QWORD *)(v7 + 33976) )
      {
        v43 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v29 != *(_QWORD *)(v7 + 24) )
          v43 = (unsigned int)v30;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v7 + 33976), v43, 0LL);
      }
      KiSelectNextThread(v7, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v17 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v17);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    v18 = KeGetCurrentPrcb();
    a2 = (__int64)v18->SchedulerAssist;
    if ( a2 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v44 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v44;
        if ( !v44 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( v14 )
    {
      v45 = *(unsigned int *)(v7 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v45 )
      {
        LOBYTE(a2) = 2;
        KiSendSoftwareInterrupt(v45, a2);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
