/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14026C9E0
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140234CF0 (IoApplyPriorityInfoThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023B900 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14023DC84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14023DF08 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14023EA30 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiFlushAllHintedStorePages @ 0x1402D0518 (MiFlushAllHintedStorePages.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0644 (MiWakeModifiedPageWriter.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140309030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140309210 (SmKmStoreHelperWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140320100 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 *     PfpServiceMainThreadUnboost @ 0x14037FE80 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x140389518 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x1403A1D18 (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C4100 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x14054A3C4 (MiSetZeroPageThreadPriority.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407B3A14 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxEmergencyWorker @ 0x1407BEFA0 (PopFxEmergencyWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x14026D1F0 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiSendSoftwareInterrupt @ 0x140302858 (KiSendSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14030F7B4 (KiPriQueueThreadPriorityChanged.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140337BD0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140337C60 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 *     EtwTracePriority @ 0x1405A22E4 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  struct _KPRCB *v11; // rcx
  char v12; // al
  __int64 updated; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r14d
  int v17; // ecx
  __int64 v18; // r9
  int v19; // r15d
  int v20; // r13d
  struct _KPRCB *v21; // rsi
  _KTHREAD *NextThread; // r12
  bool v23; // cc
  __int64 ready; // rax
  _KTHREAD *v25; // r14
  char v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  struct _KPRCB *v33; // rdx
  int *v34; // rcx
  struct _SINGLE_LIST_ENTRY *v35; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  int v37; // ecx
  __int64 Number; // rcx
  char IsThreadRankNonZero; // al
  char Priority; // dl
  _BYTE *v41; // rcx
  __int64 v42; // rdx
  bool v43; // zf
  __int64 v44; // rax
  _KTHREAD *v45; // r14
  char v46; // al
  char v47; // cl
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  _BYTE *v50; // rax
  __int64 v51; // rdx
  bool v52; // zf
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  _DWORD *v58; // r8
  struct _KPRCB *v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  unsigned __int8 v62; // [rsp+38h] [rbp-9h]
  __int64 v63; // [rsp+40h] [rbp-1h] BYREF
  __int64 v64; // [rsp+48h] [rbp+7h] BYREF
  _KTHREAD **p_NextThread; // [rsp+50h] [rbp+Fh]
  unsigned int v66; // [rsp+A8h] [rbp+67h]
  int v67; // [rsp+B0h] [rbp+6Fh] BYREF
  int v68; // [rsp+B8h] [rbp+77h] BYREF
  struct _KPRCB *v69; // [rsp+C0h] [rbp+7Fh] BYREF

  v67 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v64 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v68 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v53 = v8[6];
      v8[6] = v53 + 1;
      if ( v53 == -1 )
LABEL_94:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v48 = CurrentPrcb->SchedulerAssist;
    if ( v48 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v54 = v48[6] - 1;
        v48[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v68, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
    v49 = CurrentPrcb->SchedulerAssist;
    if ( v49 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v55 = v49[6];
        v49[6] = v55 + 1;
        if ( v55 == -1 )
          goto LABEL_94;
      }
    }
  }
  v9 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v10 = v9;
  v11 = KeGetCurrentPrcb();
  v66 = v9;
  if ( (char)v67 < (char)v9 )
  {
    if ( *(_BYTE *)(a1 + 871) )
    {
      v35 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
      if ( *(_QWORD *)(a1 + 816) == 1LL )
      {
        p_AbSelfIoBoostsList = &v11->AbSelfIoBoostsList;
        if ( v11 != (struct _KPRCB *)-34672LL )
        {
          v35->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v35;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
          KiAbQueueAutoBoostDpc(v11);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v67;
  v12 = *(_BYTE *)(a1 + 564);
  if ( v12 )
  {
    if ( (v12 & 0xF) != 0 )
      *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v67 != *(char *)(a1 + 195) )
  {
    if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
      _enable();
    }
    v14 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v15 = (unsigned __int8)v67;
    *(_QWORD *)(a1 + 32) = v14;
    v69 = 0LL;
    v63 = 0LL;
    v16 = (char)KiComputePriorityFloor(a1, v15);
    if ( *(char *)(a1 + 195) != v16 )
    {
      v17 = (unsigned __int8)KiAcquireThreadStateLock(a1, &v69, &v63);
      v19 = 0;
      v20 = *(char *)(a1 + 195);
      if ( v17 == 2 )
      {
        v21 = v69;
        NextThread = v69->NextThread;
        p_NextThread = &v69->NextThread;
        LOBYTE(v18) = NextThread == 0LL;
        KiUpdateThreadPriority(v69, a1, v16, v18);
        v23 = (int)v16 <= v20;
        if ( (int)v16 < v20 )
        {
          if ( !NextThread )
          {
            v21 = v69;
            if ( *(_BYTE *)(a1 + 388) != 2 )
            {
              v10 = v66;
              if ( v69->ReadySummary >> (v16 + 1) )
                *(_BYTE *)(a1 + 112) |= 0x10u;
              goto LABEL_20;
            }
            ready = KiSelectReadyThreadEx(v69, (_KTHREAD *)a1, 0);
            v25 = (_KTHREAD *)ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v21);
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v25->Priority;
              }
              else
              {
                Priority = *(_BYTE *)(ready + 195);
              }
              *v21->PriorityState = Priority;
              v41 = v21->SchedulerAssist;
              if ( v41 )
              {
                if ( v25 == v21->IdleThread )
                  v42 = (unsigned int)KiVpThreadSystemWorkPriority;
                else
                  v42 = (unsigned int)Priority;
                KiSetSchedulerAssistPriority(v41, v42, 0LL);
                v41 = v21->SchedulerAssist;
              }
              v43 = v25 == v21->IdleThread;
              *p_NextThread = v25;
              if ( v41 )
                v41[16] = v43;
              if ( v25->WaitBlockFill6[68] == 1 )
                v25->ReadyTime = v25->ReadyTime - v25->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v21 = v69;
              v10 = v66;
              v25->WaitBlockFill6[68] = 3;
              v26 = 1;
              goto LABEL_21;
            }
            goto LABEL_19;
          }
          v23 = (int)v16 <= v20;
        }
        if ( v23 || NextThread )
        {
LABEL_19:
          v10 = v66;
LABEL_20:
          v26 = 0;
LABEL_21:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v27, v21, v63);
          if ( v26 )
          {
            LODWORD(v28) = KeGetPcr()->Prcb.Number;
            Number = v69->Number;
            if ( (_DWORD)v28 != (_DWORD)Number )
            {
              LOBYTE(v28) = 2;
              KiSendSoftwareInterrupt(Number, v28);
            }
          }
          if ( v19 > 0 )
          {
            v33 = KeGetCurrentPrcb();
            if ( (KiVelocityFlags & 2) != 0 )
            {
              v34 = (int *)v69->SchedulerAssist;
              if ( v34 )
              {
                if ( v33->SchedulerAssist )
                {
                  if ( v33 != v69 && v19 >= 8 )
                  {
                    v56 = *v34;
                    v57 = *v34 & 0x40000;
                    if ( (v56 & 0x100000) != 0 || v57 && (unsigned __int8)v56 < v19 )
                    {
                      v43 = HvlpVirtualProcessorsIdentityMapped == 0;
                      v58 = v33->SchedulerAssist;
                      v59 = v69;
                      v58[3] = 2;
                      v60 = v59->Number;
                      if ( v43 )
                        LODWORD(v60) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v60 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v60] << 6);
                      v58[2] = v60;
                      __writemsr(0x400000C2u, (unsigned int)v60);
                    }
                  }
                }
              }
            }
          }
          CurrentIrql = v62;
          goto LABEL_24;
        }
        v21 = v69;
        v10 = v66;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_20;
      }
      else
      {
        v37 = v17 - 1;
        if ( !v37 )
        {
          v21 = v69;
          KiRemoveThreadFromAnyReadyQueue(v69, v63, a1, (unsigned int)v20);
          KiUpdateThreadPriority(0LL, a1, v16, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, v16, &v64);
          goto LABEL_20;
        }
        if ( v37 != 2 )
        {
          KiUpdateThreadPriority(0LL, a1, v16, 0LL);
          v21 = v69;
          goto LABEL_20;
        }
        v21 = v69;
        LOBYTE(v18) = 1;
        KiUpdateThreadPriority(v69, a1, v16, v18);
        if ( (int)v16 < v20 )
        {
          v44 = KiSelectReadyThreadEx(v21, (_KTHREAD *)a1, 0);
          v45 = (_KTHREAD *)v44;
          if ( v44 )
          {
            if ( (*(_BYTE *)(v44 + 2) & 4) != 0 )
            {
              v46 = KiIsThreadRankNonZero(v44, v21);
              v47 = 1;
              if ( !v46 )
                v47 = v45->Priority;
            }
            else
            {
              v47 = *(_BYTE *)(v44 + 195);
            }
            *v21->PriorityState = v47;
            v50 = v21->SchedulerAssist;
            if ( v50 )
            {
              v51 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v45 != v21->IdleThread )
                v51 = (unsigned int)v47;
              KiSetSchedulerAssistPriority(v21->SchedulerAssist, v51, 0LL);
              v50 = v21->SchedulerAssist;
            }
            v52 = v45 == v21->IdleThread;
            v21->NextThread = v45;
            if ( v50 )
              v50[16] = v52;
            if ( v45->WaitBlockFill6[68] == 1 )
              v45->ReadyTime = v45->ReadyTime - v45->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v45->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList(&v64, a1);
            v21 = v69;
          }
          goto LABEL_20;
        }
      }
      v19 = v16;
      goto LABEL_20;
    }
  }
LABEL_24:
  v29 = *(_BYTE **)(a1 + 232);
  if ( v29 && (*v29 & 0x7F) == 0x15 )
  {
    KiPriQueueThreadPriorityChanged(v29, a1);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v30 = KeGetCurrentPrcb();
    v31 = v30->SchedulerAssist;
    if ( v31 )
    {
      if ( v30->NestingLevel <= 1u )
      {
        v61 = v31[6] - 1;
        v31[6] = v61;
        if ( !v61 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  KiProcessDeferredReadyList(CurrentPrcb, &v64, CurrentIrql, SchedulerAssist);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v10, v67, (__int64)&v67);
  return v10;
}
