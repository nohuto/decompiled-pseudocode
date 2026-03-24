/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x14025708C (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x140259384 (KiCheckThreadAffinity.c)
 *     KiSendSoftwareInterrupt @ 0x140293DEC (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402AB270 (KiTryToAcquireThreadLock.c)
 *     KiInsertDeferredReadyList @ 0x1402EA540 (KiInsertDeferredReadyList.c)
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402EC610 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
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
  unsigned int v15; // esi
  __int64 v16; // rsi
  struct _KPRCB *v17; // rcx
  int v18; // r8d
  char v19; // al
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  struct _KPRCB *v24; // rsi
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  char v29; // cl
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  int v40; // eax
  bool IsThreadRankNonZero; // al
  __int64 v42; // rdx
  int v43; // eax
  int v44; // [rsp+78h] [rbp+10h] BYREF
  int v45; // [rsp+80h] [rbp+18h] BYREF
  int v46; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v7 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v7 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v44 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[6];
            SchedulerAssist[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v27 = CurrentPrcb->SchedulerAssist;
        if ( v27 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v31 = v27[6] - 1;
            v27[6] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v44, a2, a3, a4);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v10 = *(_QWORD *)(v7 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v10, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v10 + 868), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = (__int64)v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v32 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      v22 = KeGetCurrentPrcb();
      v45 = 0;
      while ( 1 )
      {
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v33 = v23[6];
            v23[6] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
          break;
        v34 = v22->SchedulerAssist;
        if ( v34 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v35 = v34[6] - 1;
            v34[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v45, v21, v11, v12);
        while ( *(_QWORD *)(v10 + 64) );
      }
      v24 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v36 = v25[6];
            v25[6] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v26 = v24->SchedulerAssist;
        if ( v26 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v37 = v26[6] - 1;
            v26[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v46, v21, v11, v12);
        while ( *(_QWORD *)(v7 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 868));
      if ( v10 == *(_QWORD *)(v7 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v40 = v39[6] - 1;
          v39[6] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      KiReleaseThreadLockSafe(v10);
    }
    v13 = *(_DWORD *)(v10 + 588);
    v14 = 0;
    if ( !KiCheckThreadAffinity(v10) )
    {
      KiComputeThreadAffinity();
      v19 = *(_BYTE *)(v10 + 388);
      if ( v19 == 2 || v19 == 5 )
      {
        LOBYTE(v18) = 2;
        v14 = KiRescheduleThreadAfterAffinityChange(v10, (int)v10 + 576, v18, v7, 0LL, a1);
      }
    }
    v15 = *(_DWORD *)(v10 + 588);
    KiReleaseThreadLockSafe(v10);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v10, 1350LL, v13, v15);
    v16 = *(_QWORD *)(v7 + 16);
    if ( v16 && !KiCheckThreadAffinity(*(_QWORD *)(v7 + 16)) )
    {
      v28 = *(_QWORD *)(v7 + 8);
      if ( (*(_BYTE *)(v28 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v7 + 8), (struct _KPRCB *)v7),
            v29 = 1,
            !IsThreadRankNonZero) )
      {
        v29 = *(_BYTE *)(v28 + 195);
      }
      **(_BYTE **)(v7 + 56) = v29;
      if ( *(_QWORD *)(v7 + 33976) )
      {
        v42 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v28 != *(_QWORD *)(v7 + 24) )
          v42 = (unsigned int)v29;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v7 + 33976), v42, 0LL);
      }
      KiSelectNextThread((struct _KPRCB *)v7, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v16);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    v17 = KeGetCurrentPrcb();
    a2 = (__int64)v17->SchedulerAssist;
    if ( a2 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v43 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( v14 )
    {
      if ( KeGetPcr()->Prcb.Number != *(_DWORD *)(v7 + 36) )
        KiSendSoftwareInterrupt();
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
