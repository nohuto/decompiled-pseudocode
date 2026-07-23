/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x14027B680
 * Callers:
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x140268584 (KiInsertDeferredPreemptionApc.c)
 *     KiShouldPreemptionBeDeferred @ 0x14027B894 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x14029D044 (KiAddThreadToScbQueue.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  char IsThreadRankNonZero; // al
  char v15; // cl
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // r8
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edx
  int v23; // eax
  char v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v25 = 0;
  v24 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[6];
        SchedulerAssist[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v18[6] - 1;
        v18[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v7 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v10 = *(_QWORD *)(v7 + 104)) == 0
     || (v10 += *(unsigned int *)(a2 + 216)) == 0
     || (LOBYTE(v9) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v10, v8, v9, (__int64)&v24)) == 0))
    && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 && v11->NestingLevel <= 1u )
    {
      v23 = v12[6] - 1;
      v12[6] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a2), v15 = 1, !IsThreadRankNonZero) )
  {
    v15 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v15;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v21 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v21 = (unsigned int)v15;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v21, 0LL);
  }
  *(_BYTE *)(v7 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v10, v7, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v7, *(char *)(v7 + 195), 1, v24);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v22 = v17[6] - 1;
      v17[6] = v22;
      if ( !v22 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0);
  return 1;
}
