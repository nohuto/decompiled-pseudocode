/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1402EE560
 * Callers:
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402EE774 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x1402F0824 (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F18F0 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402FB09C (KiInsertDeferredPreemptionApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbp
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  char IsThreadRankNonZero; // al
  char v18; // cl
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // r8
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // edx
  int v26; // eax
  char v27; // [rsp+60h] [rbp+8h] BYREF
  int v28; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v28 = 0;
  v27 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[6];
        SchedulerAssist[6] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v21[6] - 1;
        v21[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v28, v4, v5, v6);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v10 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v13 = *(_QWORD *)(v10 + 104)) == 0
     || (v13 += *(unsigned int *)(a2 + 216)) == 0
     || (LOBYTE(v12) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v10, v13, v11, v12, (__int64)&v27)) == 0))
    && *(_BYTE *)(v10 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 && v14->NestingLevel <= 1u )
    {
      v26 = v15[6] - 1;
      v15[6] = v26;
      if ( !v26 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a2), v18 = 1, !IsThreadRankNonZero) )
  {
    v18 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v18;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v24 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v24 = (unsigned int)v18;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v24, 0LL);
  }
  *(_BYTE *)(v10 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v13, v10, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v10, *(char *)(v10 + 195), 1, v27);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v19 = KeGetCurrentPrcb();
  v20 = v19->SchedulerAssist;
  if ( v20 )
  {
    if ( v19->NestingLevel <= 1u )
    {
      v25 = v20[6] - 1;
      v20[6] = v25;
      if ( !v25 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
