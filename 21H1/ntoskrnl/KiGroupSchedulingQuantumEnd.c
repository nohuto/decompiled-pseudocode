/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140331DD0
 * Callers:
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiComputeGroupSchedulingRank @ 0x140332BC0 (KiComputeGroupSchedulingRank.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140333674 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x1403338B4 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1403348C4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140334B94 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x140334C40 (KiChooseLowestRankedThread.c)
 *     KiAddThreadToScbQueue @ 0x140335964 (KiAddThreadToScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140336610 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x140336A30 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x14035707C (KiInsertDeferredPreemptionApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r15
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
  unsigned int v22; // ecx
  __int64 ready; // rax
  __int64 v24; // rdi
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KPRCB *v30; // rdi
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rbp
  int v35; // r8d
  int v36; // r9d
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  char v39; // cl
  __int64 v40; // rax
  char v41; // al
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  char IsThreadRankNonZero; // al
  char v47; // cl
  __int64 v48; // rax
  __int64 v49; // rdx
  bool v50; // zf
  __int64 v51; // r10
  __int64 v52; // r10
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char v57[4]; // [rsp+30h] [rbp-58h] BYREF
  int v58; // [rsp+34h] [rbp-54h] BYREF
  int v59; // [rsp+38h] [rbp-50h] BYREF
  __int64 v60; // [rsp+40h] [rbp-48h]
  __int64 v61; // [rsp+48h] [rbp-40h]
  char v62; // [rsp+90h] [rbp+8h]
  __int64 v64; // [rsp+A8h] [rbp+20h]

  v64 = a4;
  v4 = 0LL;
  v5 = a2;
  v60 = 0LL;
  LOBYTE(a2) = 0;
  v57[0] = 0;
  v62 = 0;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v58 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v42 = SchedulerAssist[6];
      SchedulerAssist[6] = v42 + 1;
      if ( v42 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v37 = CurrentPrcb->SchedulerAssist;
    if ( v37 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v43 = v37[6] - 1;
        v37[6] = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v58, a2, v4, a4);
    while ( *(_QWORD *)(a1 + 48) );
    v38 = CurrentPrcb->SchedulerAssist;
    if ( v38 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = v38[6];
        v38[6] = v44 + 1;
        if ( v44 == -1 )
          goto LABEL_70;
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v61 = v12;
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
  v14 = *(_QWORD *)(v5 + 104);
  v15 = v14;
  v60 = v14;
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
        v62 = 1;
LABEL_17:
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
        {
          v19 = *(_QWORD *)(v5 + 104);
          v20 = v61;
          if ( v19 )
            v19 += *(unsigned int *)(a1 + 216);
          if ( !v10 || v61 )
          {
            if ( v8 && v61 && v13 )
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
                v34 = KiChooseLowestRankedThread(a1, v61, (unsigned int)(*(char *)(v61 + 195) + 1));
                if ( v34 )
                {
                  *(_BYTE *)(v20 + 388) = 1;
                  *(_DWORD *)(v20 + 436) = MEMORY[0xFFFFF78000000320];
                  if ( (*(_BYTE *)(v34 + 2) & 4) == 0
                    || (IsThreadRankNonZero = KiIsThreadRankNonZero(v34, a1), v47 = 1, !IsThreadRankNonZero) )
                  {
                    v47 = *(_BYTE *)(v34 + 195);
                  }
                  **(_BYTE **)(a1 + 56) = v47;
                  v48 = *(_QWORD *)(a1 + 33976);
                  if ( v48 )
                  {
                    v49 = (unsigned int)KiVpThreadSystemWorkPriority;
                    if ( v34 != *(_QWORD *)(a1 + 24) )
                      v49 = (unsigned int)v47;
                    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v49, 0LL);
                    v48 = *(_QWORD *)(a1 + 33976);
                  }
                  v50 = v34 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v34;
                  if ( v48 )
                    *(_BYTE *)(v48 + 16) = v50;
                  if ( *(_BYTE *)(v34 + 388) == 1 )
                    *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132)
                                           - *(_DWORD *)(v34 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v34 + 388) = 3;
                  v51 = *(_QWORD *)(v20 + 104);
                  if ( v51 )
                    LODWORD(v51) = *(_DWORD *)(a1 + 216) + v51;
                  LOBYTE(v36) = 1;
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v20, v51, v35, v36, (__int64)v57) )
                    KiAddThreadToScbQueue(a1, v52, v20, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v20, *(char *)(v20 + 195), 1, v57[0]);
                }
              }
            }
          }
          else
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v19, v4, a4, 0LL);
            v22 = *(char *)(v5 + 195);
            if ( ThreadEffectiveRankNonZero )
              ready = KiChooseLowestRankedThread(a1, v5, v22);
            else
              ready = KiSelectReadyThread(v22, a1);
            v24 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v41 = KiIsThreadRankNonZero(ready, a1), v39 = 1, !v41) )
                v39 = *(_BYTE *)(v24 + 195);
              **(_BYTE **)(a1 + 56) = v39;
              v40 = *(_QWORD *)(a1 + 33976);
              if ( v40 )
              {
                v45 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v24 != *(_QWORD *)(a1 + 24) )
                  v45 = (unsigned int)v39;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v45, 0LL);
                v40 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v24;
              if ( v40 )
                *(_BYTE *)(v40 + 16) = v24 == *(_QWORD *)(a1 + 24);
              if ( *(_BYTE *)(v24 + 388) == 1 )
                *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v24 + 388) = 3;
            }
          }
          if ( v19 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(v5) )
            {
              if ( (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v25 = KeGetCurrentPrcb();
                v26 = v25->SchedulerAssist;
                if ( v26 )
                {
                  if ( v25->NestingLevel <= 1u )
                  {
                    v53 = v26[6] - 1;
                    v26[6] = v53;
                    if ( !v53 )
                      KiRemoveSystemWorkPriorityKick(v25);
                  }
                }
                KiInsertDeferredPreemptionApc(a1, v5, 0LL);
                v30 = KeGetCurrentPrcb();
                v59 = 0;
                v31 = v30->SchedulerAssist;
                if ( v31 )
                {
                  if ( v30->NestingLevel <= 1u )
                  {
                    v54 = v31[6];
                    v31[6] = v54 + 1;
                    if ( v54 == -1 )
LABEL_106:
                      KiRemoveSystemWorkPriorityKick(v30);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  v32 = v30->SchedulerAssist;
                  if ( v32 )
                  {
                    if ( v30->NestingLevel <= 1u )
                    {
                      v55 = v32[6] - 1;
                      v32[6] = v55;
                      if ( !v55 )
                        KiRemoveSystemWorkPriorityKick(v30);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v59, v27, v28, v29);
                  while ( *(_QWORD *)(a1 + 48) );
                  v33 = v30->SchedulerAssist;
                  if ( v33 )
                  {
                    if ( v30->NestingLevel <= 1u )
                    {
                      v56 = v33[6];
                      v33[6] = v56 + 1;
                      if ( v56 == -1 )
                        goto LABEL_106;
                    }
                  }
                }
              }
            }
            else if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v19) && !*(_QWORD *)(a1 + 16) )
            {
              KiSelectNextThread(a1, v64);
            }
          }
          return;
        }
        v15 = v16 - *(unsigned int *)(a1 + 216);
        v60 = v15;
      }
      if ( (v17 & 2) == 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v16, v15) )
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
            v62 = 1;
            v8 = 1;
            goto LABEL_16;
          }
        }
      }
      v10 = 1;
      v8 = 1;
LABEL_16:
      v18 = v62;
      goto LABEL_17;
    }
  }
}
