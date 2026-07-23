/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x140229114
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402293B0 (KiTryToAcquireThreadLock.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x14027A8F4 (KiCheckThreadAffinity.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14029D960 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // r15
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // rsi
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // r8d
  char v15; // al
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rdi
  char v25; // cl
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // eax
  char IsThreadRankNonZero; // al
  __int64 v38; // rdx
  int v39; // eax
  int v40; // [rsp+78h] [rbp+10h] BYREF
  int v41; // [rsp+80h] [rbp+18h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v40 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v26 = SchedulerAssist[6];
            SchedulerAssist[6] = v26 + 1;
            if ( v26 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v27 = v23[6] - 1;
            v23[6] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v40);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v7 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v7, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v28 = v17[6] - 1;
          v17[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      v18 = KeGetCurrentPrcb();
      v41 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v29 = v19[6];
            v19[6] = v29 + 1;
            if ( v29 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
          break;
        v30 = v18->SchedulerAssist;
        if ( v30 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v31 = v30[6] - 1;
            v30[6] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v41);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v20 = KeGetCurrentPrcb();
      v42 = 0;
      while ( 1 )
      {
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v32 = v21[6];
            v21[6] = v32 + 1;
            if ( v32 == -1 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v22 = v20->SchedulerAssist;
        if ( v22 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v33 = v22[6] - 1;
            v22[6] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        do
          KeYieldProcessorEx(&v42);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
      if ( v7 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v36 = v35[6] - 1;
          v35[6] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      KiReleaseThreadLockSafe(v7);
    }
    v8 = *(_DWORD *)(v7 + 588);
    v9 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v7) )
    {
      KiComputeThreadAffinity();
      v15 = *(_BYTE *)(v7 + 388);
      if ( v15 == 2 || v15 == 5 )
      {
        LOBYTE(v14) = 2;
        v9 = KiRescheduleThreadAfterAffinityChange(v7, (int)v7 + 576, v14, v4, 0LL, a1);
      }
    }
    v10 = *(_DWORD *)(v7 + 588);
    KiReleaseThreadLockSafe(v7);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v7, 1350LL, v8, v10);
    v11 = *(_QWORD *)(v4 + 16);
    if ( v11 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v24 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)(v24 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v4 + 8), v4), v25 = 1, !IsThreadRankNonZero) )
      {
        v25 = *(_BYTE *)(v24 + 195);
      }
      **(_BYTE **)(v4 + 56) = v25;
      if ( *(_QWORD *)(v4 + 33976) )
      {
        v38 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v24 != *(_QWORD *)(v4 + 24) )
          v38 = (unsigned int)v25;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v4 + 33976), v38, 0LL);
      }
      KiSelectNextThread(v4, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v11 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v11);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v39 = v13[6] - 1;
        v13[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    if ( v9 )
    {
      if ( KeGetPcr()->Prcb.Number != *(_DWORD *)(v4 + 36) )
        KiSendSoftwareInterrupt();
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
