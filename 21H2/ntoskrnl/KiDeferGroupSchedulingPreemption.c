/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x140291C10
 * Callers:
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x140210664 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 *     KiShouldPreemptionBeDeferred @ 0x140291E98 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402EDFE8 (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int ThreadEffectiveRankNonZero; // r15d
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rbp
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _BYTE *v13; // r14
  char v14; // cl
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // edx
  char v28; // al
  char v29; // al
  int v30; // edx
  int v31; // eax
  char v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1, a2) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v33 = 0;
  v32 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[6];
        SchedulerAssist[6] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v20[6] - 1;
        v20[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v33);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v7 == *(_QWORD *)(a2 + 24)
    || !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(a1 + 576), a2)
    || ((v9 = *(_QWORD *)(v7 + 104)) == 0
     || (v9 += *(unsigned int *)(a2 + 216)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v9, v8, 1, (bool *)&v32)) == 0)
    && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 && v10->NestingLevel <= 1u )
    {
      v31 = v11[6] - 1;
      v11[6] = v31;
      if ( !v31 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  v13 = *(_BYTE **)(a2 + 56);
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || *(char *)(a1 + 195) >= 16
    || !*(_QWORD *)(a1 + 104)
    || (v21 = *(_QWORD *)(a1 + 104)) == 0
    || (v22 = *(unsigned int *)(a2 + 216) + v21) == 0
    || (v23 = KiGetThreadEffectiveRankNonZero(a1, v22, v8, 0, 0LL), v14 = 1, !v23) )
  {
    v14 = *(_BYTE *)(a1 + 195);
  }
  v15 = v14 & 0x7F | (*(_BYTE *)(a1 + 119) << 7);
  *v13 = v15;
  v16 = *(_QWORD *)(a2 + 35000);
  if ( v16 )
  {
    if ( a1 == *(_QWORD *)(a2 + 24) )
      v26 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v26 = v15 & 0x7F;
    KiSetSchedulerAssistPriority(v16, v26, 0LL);
  }
  v17 = *(_QWORD *)(a2 + 56);
  if ( KeHeteroSystem )
  {
    v27 = *(_DWORD *)(a1 + 80);
    v28 = (*(_BYTE *)(v17 + 64) ^ *(_BYTE *)(a1 + 512)) & 7 ^ *(_BYTE *)(v17 + 64);
    v29 = (v28 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v28;
    if ( v27 <= *(_DWORD *)(a1 + 84) )
      v27 = *(_DWORD *)(a1 + 84);
    *(_BYTE *)(v17 + 64) = (v27 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v29 & 0xBF;
  }
  *(_BYTE *)(v7 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v9, v7, 1);
  else
    KiAddThreadToPrcbQueue(a2, v7, *(char *)(v7 + 195), 1, v32);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v30 = v19[6] - 1;
      v19[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
