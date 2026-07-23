/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140279D50
 * Callers:
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402344D0 (KiCheckMaxOverQuotaTransition.c)
 *     KiInsertDeferredPreemptionApc @ 0x140268584 (KiInsertDeferredPreemptionApc.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14027AF28 (KiCheckForMaxOverQuotaScb.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 *     KiComputeGroupSchedulingRank @ 0x14027B1B0 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x14027B894 (KiShouldPreemptionBeDeferred.c)
 *     KiChooseLowestRankedThread @ 0x14029C310 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14029CB8C (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x14029D044 (KiAddThreadToScbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14029DC40 (KiRecomputeGroupSchedulingRank.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v7; // rsi
  char v8; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // r12
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rsi
  char v17; // al
  char v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rdi
  int ThreadEffectiveRankNonZero; // eax
  __int64 v22; // rcx
  __int64 ready; // rax
  __int64 v24; // rdi
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // rdi
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rbp
  int v32; // r8d
  int v33; // r9d
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  char v36; // cl
  __int64 v37; // rax
  char v38; // al
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  char IsThreadRankNonZero; // al
  char v44; // cl
  __int64 v45; // rax
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // r10
  __int64 v49; // r10
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  char v54[4]; // [rsp+30h] [rbp-58h] BYREF
  int v55; // [rsp+34h] [rbp-54h] BYREF
  int v56; // [rsp+38h] [rbp-50h] BYREF
  __int64 v57; // [rsp+40h] [rbp-48h]
  __int64 v58; // [rsp+48h] [rbp-40h]
  char v59; // [rsp+90h] [rbp+8h]
  __int64 v61; // [rsp+A8h] [rbp+20h]

  v61 = a4;
  LODWORD(v4) = 0;
  v57 = 0LL;
  v54[0] = 0;
  v59 = 0;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v55 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v39 = SchedulerAssist[6];
      SchedulerAssist[6] = v39 + 1;
      if ( v39 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v34 = CurrentPrcb->SchedulerAssist;
    if ( v34 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v40 = v34[6] - 1;
        v34[6] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v55);
    while ( *(_QWORD *)(a1 + 48) );
    v35 = CurrentPrcb->SchedulerAssist;
    if ( v35 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = v35[6];
        v35[6] = v41 + 1;
        if ( v41 == -1 )
          goto LABEL_70;
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v58 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
      v13 += *(unsigned int *)(a1 + 216);
  }
  if ( v7 > *(_QWORD *)(a1 + 33624) )
  {
    KiGroupSchedulingGenerationEnd(a1, v7, 0LL);
    return;
  }
  v14 = *(_QWORD *)(a2 + 104);
  v15 = v14;
  v57 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(a1 + 216) + v14;
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_BYTE *)(v16 + 112);
        if ( (v17 & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v15, a1, v16);
        if ( (*(_BYTE *)(v16 + 112) & 4) == 0 )
          goto LABEL_16;
        v10 = 1;
        v8 = 1;
        if ( v13 != v16 )
          goto LABEL_16;
        v18 = 1;
        v59 = 1;
LABEL_17:
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
        {
          v19 = *(_QWORD *)(a2 + 104);
          v20 = v58;
          if ( v19 )
            v19 += *(unsigned int *)(a1 + 216);
          if ( !v10 || v58 )
          {
            if ( v8 && v58 && v13 )
            {
              if ( v13 == v19 )
                goto LABEL_41;
              while ( v13 )
              {
                v13 = *(_QWORD *)(v13 + 408);
                if ( v13 == v19 )
                  goto LABEL_41;
              }
              if ( !v19 || v18 )
              {
LABEL_41:
                v31 = KiChooseLowestRankedThread(a1, v58, (unsigned int)(*(char *)(v58 + 195) + 1));
                if ( v31 )
                {
                  *(_BYTE *)(v20 + 388) = 1;
                  *(_DWORD *)(v20 + 436) = MEMORY[0xFFFFF78000000320];
                  if ( (*(_BYTE *)(v31 + 2) & 4) == 0
                    || (IsThreadRankNonZero = KiIsThreadRankNonZero(v31, a1), v44 = 1, !IsThreadRankNonZero) )
                  {
                    v44 = *(_BYTE *)(v31 + 195);
                  }
                  **(_BYTE **)(a1 + 56) = v44;
                  v45 = *(_QWORD *)(a1 + 33976);
                  if ( v45 )
                  {
                    v46 = (unsigned int)KiVpThreadSystemWorkPriority;
                    if ( v31 != *(_QWORD *)(a1 + 24) )
                      v46 = (unsigned int)v44;
                    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v46, 0LL);
                    v45 = *(_QWORD *)(a1 + 33976);
                  }
                  v47 = v31 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v31;
                  if ( v45 )
                    *(_BYTE *)(v45 + 16) = v47;
                  if ( *(_BYTE *)(v31 + 388) == 1 )
                    *(_DWORD *)(v31 + 132) = *(_DWORD *)(v31 + 132)
                                           - *(_DWORD *)(v31 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v31 + 388) = 3;
                  v48 = *(_QWORD *)(v20 + 104);
                  if ( v48 )
                    LODWORD(v48) = *(_DWORD *)(a1 + 216) + v48;
                  LOBYTE(v33) = 1;
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v20, v48, v32, v33, (__int64)v54) )
                    KiAddThreadToScbQueue(a1, v49, v20, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v20, *(char *)(v20 + 195), 1, v54[0]);
                }
              }
            }
          }
          else
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v19, v4, a4, 0LL);
            v22 = (unsigned int)*(char *)(a2 + 195);
            if ( ThreadEffectiveRankNonZero )
              ready = KiChooseLowestRankedThread(a1, a2, (unsigned int)v22);
            else
              ready = KiSelectReadyThread(v22, a1);
            v24 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v38 = KiIsThreadRankNonZero(ready, a1), v36 = 1, !v38) )
                v36 = *(_BYTE *)(v24 + 195);
              **(_BYTE **)(a1 + 56) = v36;
              v37 = *(_QWORD *)(a1 + 33976);
              if ( v37 )
              {
                v42 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v24 != *(_QWORD *)(a1 + 24) )
                  v42 = (unsigned int)v36;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v42, 0LL);
                v37 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v24;
              if ( v37 )
                *(_BYTE *)(v37 + 16) = v24 == *(_QWORD *)(a1 + 24);
              if ( *(_BYTE *)(v24 + 388) == 1 )
                *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v24 + 388) = 3;
            }
          }
          if ( v19 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(a2) )
            {
              if ( (*(_DWORD *)(a2 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v25 = KeGetCurrentPrcb();
                v26 = v25->SchedulerAssist;
                if ( v26 )
                {
                  if ( v25->NestingLevel <= 1u )
                  {
                    v50 = v26[6] - 1;
                    v26[6] = v50;
                    if ( !v50 )
                      KiRemoveSystemWorkPriorityKick(v25);
                  }
                }
                KiInsertDeferredPreemptionApc(a1, a2, 0);
                v27 = KeGetCurrentPrcb();
                v56 = 0;
                v28 = v27->SchedulerAssist;
                if ( v28 )
                {
                  if ( v27->NestingLevel <= 1u )
                  {
                    v51 = v28[6];
                    v28[6] = v51 + 1;
                    if ( v51 == -1 )
LABEL_106:
                      KiRemoveSystemWorkPriorityKick(v27);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  v29 = v27->SchedulerAssist;
                  if ( v29 )
                  {
                    if ( v27->NestingLevel <= 1u )
                    {
                      v52 = v29[6] - 1;
                      v29[6] = v52;
                      if ( !v52 )
                        KiRemoveSystemWorkPriorityKick(v27);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v56);
                  while ( *(_QWORD *)(a1 + 48) );
                  v30 = v27->SchedulerAssist;
                  if ( v30 )
                  {
                    if ( v27->NestingLevel <= 1u )
                    {
                      v53 = v30[6];
                      v30[6] = v53 + 1;
                      if ( v53 == -1 )
                        goto LABEL_106;
                    }
                  }
                }
              }
            }
            else if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v19) && !*(_QWORD *)(a1 + 16) )
            {
              KiSelectNextThread(a1, v61);
            }
          }
          return;
        }
        v15 = v16 - *(unsigned int *)(a1 + 216);
        v57 = v15;
      }
      if ( (v17 & 2) == 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v16, v15) )
        {
          if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
          {
            LOBYTE(v4) = 1;
            KiRemoveSchedulingGroupQueue(a1, v16, v4);
          }
        }
        else
        {
          if ( *(_QWORD *)v16 < *(_QWORD *)(v16 + 24) )
          {
            if ( a3 )
              v10 = 1;
            goto LABEL_16;
          }
          KiRecomputeGroupSchedulingRank(v15, v16, a1);
          if ( v13 == v16 )
          {
            v10 = 1;
            v59 = 1;
            v8 = 1;
            goto LABEL_16;
          }
        }
      }
      v10 = 1;
      v8 = 1;
LABEL_16:
      v18 = v59;
      goto LABEL_17;
    }
  }
}
