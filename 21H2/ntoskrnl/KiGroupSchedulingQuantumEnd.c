/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140290B9C
 * Callers:
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 * Callees:
 *     KiRecomputeGroupSchedulingRank @ 0x140210178 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x140210224 (KiChooseLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x140210664 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140210CE4 (KiRemoveSchedulingGroupQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x14022A040 (KiComputeGroupSchedulingRank.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14023BD18 (KiCheckForMaxOverQuotaScb.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140242E70 (KiCheckMaxOverQuotaTransition.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 *     KiShouldPreemptionBeDeferred @ 0x140291E98 (KiShouldPreemptionBeDeferred.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402EDFE8 (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  char v5; // r12
  char v6; // r15
  unsigned __int64 v8; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _KTHREAD *v11; // rbp
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // r14
  _KTHREAD *v18; // rbp
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 ready; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  _BYTE *v25; // rsi
  char v26; // cl
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  struct _KPRCB *v34; // rdi
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r8
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  char v44; // al
  char v45; // al
  unsigned int v46; // ecx
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v51; // cl
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // edx
  char v57; // al
  char v58; // al
  __int64 v59; // rax
  bool v60; // cl
  __int64 v61; // rdi
  int v62; // eax
  int v63; // eax
  int v64; // eax
  char v65; // [rsp+30h] [rbp-58h] BYREF
  int v66; // [rsp+34h] [rbp-54h] BYREF
  int v67; // [rsp+38h] [rbp-50h] BYREF
  _KTHREAD *v68; // [rsp+40h] [rbp-48h]
  char v69; // [rsp+90h] [rbp+8h]
  char v70; // [rsp+A0h] [rbp+18h]

  v70 = a3;
  v65 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v69 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v66 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = SchedulerAssist[6];
        SchedulerAssist[6] = v41 + 1;
        if ( v41 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v37 = CurrentPrcb->SchedulerAssist;
    if ( v37 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v42 = v37[6] - 1;
        v37[6] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v66);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v11 = *(_KTHREAD **)(a1 + 16);
  SchedulingGroup = 0LL;
  v68 = v11;
  if ( v11 )
  {
    SchedulingGroup = v11->SchedulingGroup;
    if ( SchedulingGroup )
      SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + *(unsigned int *)(a1 + 216));
  }
  if ( v8 > *(_QWORD *)(a1 + 34520) )
  {
    KiGroupSchedulingGenerationEnd(a1, v8, 0LL);
    return;
  }
  v13 = *(_QWORD *)(v4 + 104);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(unsigned int *)(a1 + 216) + v13;
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = *(_BYTE *)(v15 + 112);
        if ( (v16 & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v14, a1, v15);
        if ( (*(_BYTE *)(v15 + 112) & 4) == 0 )
          goto LABEL_12;
        v6 = 1;
        v5 = 1;
        if ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)v15 )
          goto LABEL_12;
        LOBYTE(a2) = 1;
        v69 = 1;
LABEL_13:
        v15 = *(_QWORD *)(v15 + 408);
        if ( !v15 )
        {
          v17 = *(_QWORD *)(v4 + 104);
          v18 = v68;
          if ( v17 )
            v17 += *(unsigned int *)(a1 + 216);
          if ( !v6 || v68 )
          {
            if ( v5 && v68 && SchedulingGroup )
            {
              if ( SchedulingGroup == (_KSCHEDULING_GROUP *volatile)v17 )
                goto LABEL_60;
              do
              {
                if ( !SchedulingGroup )
                  break;
                SchedulingGroup = (_KSCHEDULING_GROUP *volatile)SchedulingGroup->PerProcessor[0].ReadyListHead[9].Flink;
              }
              while ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)v17 );
              if ( (_KSCHEDULING_GROUP *volatile)v17 == SchedulingGroup || (_BYTE)a2 )
              {
LABEL_60:
                v38 = KiChooseLowestRankedThread((struct _KPRCB *)a1, v68, v68->Priority + 1);
                if ( v38 )
                {
                  v18->WaitBlockFill6[68] = 1;
                  v18->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
                  v47 = *(_BYTE **)(a1 + 56);
                  if ( (*(_BYTE *)(v38 + 2) & 4) == 0
                    || *(char *)(v38 + 195) >= 16
                    || !*(_QWORD *)(v38 + 104)
                    || (v48 = *(_QWORD *)(v38 + 104)) == 0
                    || (v49 = *(unsigned int *)(a1 + 216) + v48) == 0
                    || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v38, v49, v39, 0, 0LL),
                        v51 = 1,
                        !ThreadEffectiveRankNonZero) )
                  {
                    v51 = *(_BYTE *)(v38 + 195);
                  }
                  v52 = v51 & 0x7F | (*(_BYTE *)(v38 + 119) << 7);
                  *v47 = v52;
                  v53 = *(_QWORD *)(a1 + 35000);
                  if ( v53 )
                  {
                    if ( v38 == *(_QWORD *)(a1 + 24) )
                      v54 = (unsigned int)KiVpThreadSystemWorkPriority;
                    else
                      v54 = v52 & 0x7F;
                    KiSetSchedulerAssistPriority(v53, v54, 0LL);
                  }
                  v55 = *(_QWORD *)(a1 + 56);
                  if ( KeHeteroSystem )
                  {
                    v56 = *(_DWORD *)(v38 + 80);
                    v57 = (*(_BYTE *)(v55 + 64) ^ *(_BYTE *)(v38 + 512)) & 7 ^ *(_BYTE *)(v55 + 64);
                    v58 = (v57 ^ (8 * *(_BYTE *)(v38 + 516))) & 0x38 ^ v57;
                    if ( v56 <= *(_DWORD *)(v38 + 84) )
                      v56 = *(_DWORD *)(v38 + 84);
                    *(_BYTE *)(v55 + 64) = (v56 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v58 & 0xBF;
                  }
                  v59 = *(_QWORD *)(a1 + 35000);
                  v60 = v38 == *(_QWORD *)(a1 + 24);
                  *(_QWORD *)(a1 + 16) = v38;
                  if ( v59 )
                    *(_BYTE *)(v59 + 16) = v60;
                  if ( *(_BYTE *)(v38 + 388) == 1 )
                    *(_DWORD *)(v38 + 132) = *(_DWORD *)(v38 + 132)
                                           - *(_DWORD *)(v38 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v38 + 388) = 3;
                  v61 = (__int64)v18->SchedulingGroup;
                  if ( v61 )
                    v61 += *(unsigned int *)(a1 + 216);
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero((__int64)v18, v61, v55, 1, (bool *)&v65) )
                    KiAddThreadToScbQueue(a1, v61, (__int64)v18, 1);
                  else
                    KiAddThreadToPrcbQueue(a1, (__int64)v18, v18->Priority, 1, v65);
                }
              }
            }
          }
          else
          {
            v20 = KiGetThreadEffectiveRankNonZero(v4, v17, a3, 1, 0LL);
            v21 = (unsigned int)*(char *)(v4 + 195);
            if ( v20 )
              ready = KiChooseLowestRankedThread((struct _KPRCB *)a1, (_KTHREAD *)v4, v21);
            else
              ready = KiSelectReadyThread(v21, a1);
            v24 = ready;
            if ( ready )
            {
              v25 = *(_BYTE **)(a1 + 56);
              if ( (*(_BYTE *)(ready + 2) & 4) == 0
                || *(char *)(ready + 195) >= 16
                || !*(_QWORD *)(ready + 104)
                || (a2 = *(_QWORD *)(ready + 104)) == 0
                || (a2 += *(unsigned int *)(a1 + 216)) == 0
                || (v40 = KiGetThreadEffectiveRankNonZero(ready, a2, v23, 0, 0LL), v26 = 1, !v40) )
              {
                v26 = *(_BYTE *)(v24 + 195);
              }
              v27 = v26 & 0x7F | (*(_BYTE *)(v24 + 119) << 7);
              *v25 = v27;
              v28 = *(_QWORD *)(a1 + 35000);
              if ( v28 )
              {
                if ( v24 == *(_QWORD *)(a1 + 24) )
                  v43 = (unsigned int)KiVpThreadSystemWorkPriority;
                else
                  v43 = v27 & 0x7F;
                KiSetSchedulerAssistPriority(v28, v43, 0LL);
              }
              v29 = *(_QWORD *)(a1 + 56);
              if ( KeHeteroSystem )
              {
                a2 = *(unsigned int *)(v24 + 80);
                v44 = (*(_BYTE *)(v29 + 64) ^ *(_BYTE *)(v24 + 512)) & 7 ^ *(_BYTE *)(v29 + 64);
                v45 = (v44 ^ (8 * *(_BYTE *)(v24 + 516))) & 0x38 ^ v44;
                v46 = *(_DWORD *)(v24 + 84);
                if ( (unsigned int)a2 <= v46 )
                  a2 = v46;
                *(_BYTE *)(v29 + 64) = ((unsigned int)a2 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v45 & 0xBF;
              }
              v30 = *(_QWORD *)(a1 + 35000);
              v31 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 16) = v24;
              if ( v30 )
                *(_BYTE *)(v30 + 16) = v24 == v31;
              if ( *(_BYTE *)(v24 + 388) == 1 )
                *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v24 + 388) = 3;
            }
          }
          if ( v17 )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred(v4, a2) )
            {
              if ( (*(_DWORD *)(v4 + 120) & 0xC00) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                v32 = KeGetCurrentPrcb();
                v33 = v32->SchedulerAssist;
                if ( v33 )
                {
                  if ( v32->NestingLevel <= 1u )
                  {
                    v62 = v33[6] - 1;
                    v33[6] = v62;
                    if ( !v62 )
                      KiRemoveSystemWorkPriorityKick(v32);
                  }
                }
                KiInsertDeferredPreemptionApc(a1, v4, 0LL);
                v34 = KeGetCurrentPrcb();
                v67 = 0;
                while ( 1 )
                {
                  v35 = v34->SchedulerAssist;
                  if ( v35 )
                  {
                    if ( v34->NestingLevel <= 1u )
                    {
                      v63 = v35[6];
                      v35[6] = v63 + 1;
                      if ( v63 == -1 )
                        KiRemoveSystemWorkPriorityKick(v34);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                    break;
                  v36 = v34->SchedulerAssist;
                  if ( v36 )
                  {
                    if ( v34->NestingLevel <= 1u )
                    {
                      v64 = v36[6] - 1;
                      v36[6] = v64;
                      if ( !v64 )
                        KiRemoveSystemWorkPriorityKick(v34);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v67);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( KiCheckForMaxOverQuotaScb(v17) )
            {
              if ( !*(_QWORD *)(a1 + 16) )
                KiSelectNextThread(a1, a4, v19);
            }
          }
          return;
        }
        v14 = v15 - *(unsigned int *)(a1 + 216);
      }
      if ( (v16 & 2) != 0 )
      {
        v6 = 1;
        v5 = 1;
LABEL_12:
        LOBYTE(a2) = v69;
        goto LABEL_13;
      }
      if ( KiCheckMaxOverQuotaTransition(v15, v14) )
      {
        if ( (*(_BYTE *)(v15 + 112) & 1) != 0 )
          KiRemoveSchedulingGroupQueue(a1, v15, 1);
      }
      else
      {
        if ( *(_QWORD *)v15 < *(_QWORD *)(v15 + 24) )
        {
          if ( v70 )
            v6 = 1;
          goto LABEL_12;
        }
        KiRecomputeGroupSchedulingRank(v14, v15, a1);
        if ( SchedulingGroup == (_KSCHEDULING_GROUP *volatile)v15 )
        {
          LOBYTE(a2) = 1;
          v69 = 1;
          goto LABEL_29;
        }
      }
      LOBYTE(a2) = v69;
LABEL_29:
      v6 = 1;
      v5 = 1;
      goto LABEL_13;
    }
  }
}
