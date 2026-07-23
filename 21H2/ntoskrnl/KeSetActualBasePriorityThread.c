/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1402D4E00
 * Callers:
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14024E85C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14028A80C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14028AA90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14028B5B8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     SmKmStoreHelperWorker @ 0x140291670 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140292A20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1402A0AE0 (MiFlushAllHintedStorePages.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     IoApplyPriorityInfoThread @ 0x140302290 (IoApplyPriorityInfoThread.c)
 *     PfpServiceMainThreadUnboost @ 0x140382C80 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x14038D098 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x1403A5388 (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C8990 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x1405500F4 (MiSetZeroPageThreadPriority.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407C9994 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxEmergencyWorker @ 0x1407D5240 (PopFxEmergencyWorker.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14029B830 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x1402D5610 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  struct _KDPC *v9; // rcx
  char v10; // al
  unsigned __int64 updated; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r14d
  int v15; // ecx
  __int64 v16; // r9
  int v17; // r15d
  signed int v18; // r13d
  struct _KPRCB *v19; // rsi
  _KTHREAD *NextThread; // r12
  bool v21; // cc
  __int64 ready; // rax
  _KTHREAD *v23; // r14
  char v24; // r14
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  struct _KPRCB *v30; // rdx
  int *v31; // rcx
  PVOID *v32; // rdx
  PVOID *p_SystemArgument2; // r8
  int v34; // ecx
  char IsThreadRankNonZero; // al
  char Priority; // dl
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // rax
  _KTHREAD *v41; // r14
  char v42; // al
  char v43; // cl
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  _BYTE *v46; // rax
  __int64 v47; // rdx
  bool v48; // zf
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  _DWORD *v55; // r8
  struct _KPRCB *v56; // rax
  __int64 Number; // rcx
  int v58; // eax
  unsigned __int8 v59; // [rsp+38h] [rbp-9h]
  volatile signed __int64 *v60; // [rsp+40h] [rbp-1h] BYREF
  __int64 v61; // [rsp+48h] [rbp+7h] BYREF
  _KTHREAD **p_NextThread; // [rsp+50h] [rbp+Fh]
  unsigned int v63; // [rsp+A8h] [rbp+67h]
  int v64; // [rsp+B0h] [rbp+6Fh] BYREF
  int v65; // [rsp+B8h] [rbp+77h] BYREF
  struct _KPRCB *v66; // [rsp+C0h] [rbp+7Fh] BYREF

  v64 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v61 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v59 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v65 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v50 = v6[6];
      v6[6] = v50 + 1;
      if ( v50 == -1 )
LABEL_94:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v44 = CurrentPrcb->SchedulerAssist;
    if ( v44 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v51 = v44[6] - 1;
        v44[6] = v51;
        if ( !v51 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v65);
    while ( *(_QWORD *)(a1 + 64) );
    v45 = CurrentPrcb->SchedulerAssist;
    if ( v45 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v52 = v45[6];
        v45[6] = v52 + 1;
        if ( v52 == -1 )
          goto LABEL_94;
      }
    }
  }
  v7 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v8 = v7;
  v9 = (struct _KDPC *)KeGetCurrentPrcb();
  v63 = v7;
  if ( (char)v64 < (char)v7 )
  {
    if ( *(_BYTE *)(a1 + 871) )
    {
      v32 = (PVOID *)(a1 + 816);
      if ( *(_QWORD *)(a1 + 816) == 1LL )
      {
        p_SystemArgument2 = &v9[541].SystemArgument2;
        if ( v9 != (struct _KDPC *)-34672LL )
        {
          *v32 = *p_SystemArgument2;
          *p_SystemArgument2 = v32;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
          KiAbQueueAutoBoostDpc(v9);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v64;
  v10 = *(_BYTE *)(a1 + 564);
  if ( v10 )
  {
    if ( (v10 & 0xF) != 0 )
      *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v64 != *(char *)(a1 + 195) )
  {
    if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
      _enable();
    }
    v12 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v13 = (unsigned __int8)v64;
    *(_QWORD *)(a1 + 32) = v12;
    v66 = 0LL;
    v60 = 0LL;
    v14 = (char)KiComputePriorityFloor(a1, v13);
    if ( *(char *)(a1 + 195) != v14 )
    {
      v15 = (unsigned __int8)KiAcquireThreadStateLock(a1, &v66, &v60);
      v17 = 0;
      v18 = *(char *)(a1 + 195);
      if ( v15 == 2 )
      {
        v19 = v66;
        NextThread = v66->NextThread;
        p_NextThread = &v66->NextThread;
        LOBYTE(v16) = NextThread == 0LL;
        KiUpdateThreadPriority(v66, a1, (unsigned int)v14, v16);
        v21 = v14 <= v18;
        if ( v14 < v18 )
        {
          if ( !NextThread )
          {
            v19 = v66;
            if ( *(_BYTE *)(a1 + 388) != 2 )
            {
              v8 = v63;
              if ( v66->ReadySummary >> (v14 + 1) )
                *(_BYTE *)(a1 + 112) |= 0x10u;
              goto LABEL_20;
            }
            ready = KiSelectReadyThreadEx(v66, (_KTHREAD *)a1, 0);
            v23 = (_KTHREAD *)ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v19);
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v23->Priority;
              }
              else
              {
                Priority = *(_BYTE *)(ready + 195);
              }
              *v19->PriorityState = Priority;
              v37 = v19->SchedulerAssist;
              if ( v37 )
              {
                if ( v23 == v19->IdleThread )
                  v38 = (unsigned int)KiVpThreadSystemWorkPriority;
                else
                  v38 = (unsigned int)Priority;
                KiSetSchedulerAssistPriority(v37, v38, 0LL);
                v37 = v19->SchedulerAssist;
              }
              v39 = v23 == v19->IdleThread;
              *p_NextThread = v23;
              if ( v37 )
                v37[16] = v39;
              if ( v23->WaitBlockFill6[68] == 1 )
                v23->ReadyTime = v23->ReadyTime - v23->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v19 = v66;
              v8 = v63;
              v23->WaitBlockFill6[68] = 3;
              v24 = 1;
              goto LABEL_21;
            }
            goto LABEL_19;
          }
          v21 = v14 <= v18;
        }
        if ( v21 || NextThread )
        {
LABEL_19:
          v8 = v63;
LABEL_20:
          v24 = 0;
LABEL_21:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v25, (__int64)v19, v60);
          if ( v24 && KeGetPcr()->Prcb.Number != v66->Number )
            KiSendSoftwareInterrupt();
          if ( v17 > 0 )
          {
            v30 = KeGetCurrentPrcb();
            if ( (KiVelocityFlags & 2) != 0 )
            {
              v31 = (int *)v66->SchedulerAssist;
              if ( v31 )
              {
                if ( v30->SchedulerAssist )
                {
                  if ( v30 != v66 && v17 >= 8 )
                  {
                    v53 = *v31;
                    v54 = *v31 & 0x40000;
                    if ( (v53 & 0x100000) != 0 || v54 && (unsigned __int8)v53 < v17 )
                    {
                      v39 = HvlpVirtualProcessorsIdentityMapped == 0;
                      v55 = v30->SchedulerAssist;
                      v56 = v66;
                      v55[3] = 2;
                      Number = v56->Number;
                      if ( v39 )
                        LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                      v55[2] = Number;
                      __writemsr(0x400000C2u, (unsigned int)Number);
                    }
                  }
                }
              }
            }
          }
          CurrentIrql = v59;
          goto LABEL_24;
        }
        v19 = v66;
        v8 = v63;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_20;
      }
      else
      {
        v34 = v15 - 1;
        if ( !v34 )
        {
          v19 = v66;
          KiRemoveThreadFromAnyReadyQueue((__int64)v66, (__int64)v60, a1, v18);
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v14, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, v14, (__int64)&v61);
          goto LABEL_20;
        }
        if ( v34 != 2 )
        {
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v14, 0LL);
          v19 = v66;
          goto LABEL_20;
        }
        v19 = v66;
        LOBYTE(v16) = 1;
        KiUpdateThreadPriority(v66, a1, (unsigned int)v14, v16);
        if ( v14 < v18 )
        {
          v40 = KiSelectReadyThreadEx(v19, (_KTHREAD *)a1, 0);
          v41 = (_KTHREAD *)v40;
          if ( v40 )
          {
            if ( (*(_BYTE *)(v40 + 2) & 4) != 0 )
            {
              v42 = KiIsThreadRankNonZero(v40, v19);
              v43 = 1;
              if ( !v42 )
                v43 = v41->Priority;
            }
            else
            {
              v43 = *(_BYTE *)(v40 + 195);
            }
            *v19->PriorityState = v43;
            v46 = v19->SchedulerAssist;
            if ( v46 )
            {
              v47 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v41 != v19->IdleThread )
                v47 = (unsigned int)v43;
              KiSetSchedulerAssistPriority(v19->SchedulerAssist, v47, 0LL);
              v46 = v19->SchedulerAssist;
            }
            v48 = v41 == v19->IdleThread;
            v19->NextThread = v41;
            if ( v46 )
              v46[16] = v48;
            if ( v41->WaitBlockFill6[68] == 1 )
              v41->ReadyTime = v41->ReadyTime - v41->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v41->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList((__int64)&v61, a1);
            v19 = v66;
          }
          goto LABEL_20;
        }
      }
      v17 = v14;
      goto LABEL_20;
    }
  }
LABEL_24:
  v26 = *(volatile signed __int32 **)(a1 + 232);
  if ( v26 && (*(_BYTE *)v26 & 0x7F) == 0x15 )
  {
    KiPriQueueThreadPriorityChanged(v26, a1);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v58 = v28[6] - 1;
        v28[6] = v58;
        if ( !v58 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  KiProcessDeferredReadyList(CurrentPrcb, &v61, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v8, v64, (__int64)&v64);
  return v8;
}
