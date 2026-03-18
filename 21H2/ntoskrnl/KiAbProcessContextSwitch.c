/*
 * XREFs of KiAbProcessContextSwitch @ 0x1402B4EC0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14033E1B0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbPropagateBoosts @ 0x140359140 (KiAbPropagateBoosts.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14035A0F0 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14035A160 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14035A264 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035A364 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035A6C8 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14035A718 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  char v7; // r15
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  unsigned int v9; // esi
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 LockedHeadEntry; // rax
  __int64 v17; // r13
  _QWORD *v18; // rbx
  __int64 v19; // rax
  char v20; // r9
  char CpuPriorityKey; // al
  int v22; // r10d
  char v23; // r13
  char v24; // al
  char v25; // r9
  char v26; // cl
  __int64 v27; // r14
  __int64 ExtensionTable; // rax
  _QWORD *v30; // [rsp+30h] [rbp-19h] BYREF
  __int64 v31; // [rsp+38h] [rbp-11h] BYREF
  _SINGLE_LIST_ENTRY *v32; // [rsp+40h] [rbp-9h]
  struct _KPRCB *v33; // [rsp+48h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp+7h] BYREF
  int v35; // [rsp+B0h] [rbp+67h] BYREF
  char v36; // [rsp+C0h] [rbp+77h]
  int v37; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) != 0x3F )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_BYTE *)(a1 + 792);
    v6 = *(_BYTE *)(a1 + 870);
    v7 = 0;
    v33 = CurrentPrcb;
    v30 = 0LL;
    p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
    v32 = &CurrentPrcb->AbSelfIoBoostsList;
    v31 = 0LL;
    v35 = 0;
    if ( (v5 | v6) != 63 )
    {
      v9 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
      v10 = !_BitScanForward((unsigned int *)&v11, v9);
      if ( !v10 )
      {
        v12 = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
        while ( 1 )
        {
          v9 &= v9 - 1;
          v13 = 96 * v11;
          v14 = v13 + a1 + 1696;
          v15 = *(_QWORD *)v14;
          if ( !*(_QWORD *)v14 || (v15 & 2) != 0 || (v15 & 1) != 0 )
            goto LABEL_15;
          if ( v15 < 0 )
          {
            if ( (*(_BYTE *)(v14 + 19) & 1) != 0 )
              goto LABEL_15;
            if ( *(_BYTE *)(v14 + 17) )
            {
              v26 = *(_BYTE *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1501);
              if ( v26 > 30 )
                v26 = 30;
              if ( v26 == *(_BYTE *)(v14 + 48) )
                goto LABEL_15;
            }
            else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v13 + a1 + 1696) == *(_BYTE *)(v14 + 48) )
            {
              goto LABEL_15;
            }
          }
          v35 = 0;
          v37 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v14, 1LL, &LockHandle);
          v17 = LockedHeadEntry;
          if ( LockedHeadEntry )
          {
            if ( *(_BYTE *)(v14 + 17) )
            {
              if ( v14 != LockedHeadEntry )
                KiAbEntryUpdateWaiterTreePosition(v14, LockedHeadEntry);
              v19 = *(_QWORD *)(v17 + 56);
              if ( v19 )
                v20 = *(_BYTE *)(v19 + 24);
              else
                v20 = 30;
              LOBYTE(v35) = v20;
              if ( !*(_BYTE *)(v17 + 17) )
              {
                v24 = KiAbOwnerComputeCpuPriorityKey(v17);
                if ( v24 < v25 )
                  LOBYTE(v35) = v24;
              }
              KiAbTryIncrementIoWaiterCounts(v14, v17);
              CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v14);
              v36 = CpuPriorityKey;
              if ( (char)v35 < CpuPriorityKey )
              {
                if ( v22 )
                {
LABEL_38:
                  KiAbIoBoostOwners(v17, v22, (unsigned int)&v30, (unsigned int)&v31, v12);
                  CpuPriorityKey = v36;
                }
                KiAbCpuBoostOwners(v17, (unsigned __int8)CpuPriorityKey, (unsigned int)&v30, (unsigned int)&v31, v12);
LABEL_40:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v23 = v37;
                if ( v37 )
                {
                  v27 = v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1696;
                  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v27, 1953261124LL) )
                  {
                    if ( (v23 & 1) != 0 )
                      IoBoostThreadIoPriority((KSPIN_LOCK *)v27, 2, 0x80000000);
                    if ( (v23 & 2) != 0 )
                    {
                      if ( *(_DWORD *)(v27 + 1448) )
                      {
                        ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                        if ( ExtensionTable )
                        {
                          (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v27);
                          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                        }
                      }
                    }
                    ObDereferenceObjectDeferDeleteWithTag((PVOID)v27, 0x746C6644u);
                  }
                }
                goto LABEL_15;
              }
              if ( v22 )
                goto LABEL_38;
            }
            else
            {
              if ( v14 != LockedHeadEntry )
                KiAbEntryUpdateOwnerTreePosition(v14, LockedHeadEntry);
              KiAbDetermineMaxWaiterPriority(v17, &v35);
              if ( v35 )
              {
                if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                     v14,
                                     (unsigned int)&v35,
                                     (unsigned int)&v30,
                                     (unsigned int)&v31,
                                     v12,
                                     (__int64)&v37)
                  && v14 != v17 )
                {
                  KiAbEntryUpdateOwnerTreePosition(v14, v17);
                }
                goto LABEL_40;
              }
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
LABEL_15:
          v10 = !_BitScanForward((unsigned int *)&v11, v9);
          if ( v10 )
          {
            CurrentPrcb = v33;
            p_AbSelfIoBoostsList = v32;
            break;
          }
        }
      }
    }
    KiAbPropagateBoosts(&v31, p_AbSelfIoBoostsList, &v30);
    v18 = v30;
    if ( v30 )
    {
      v30 = (_QWORD *)*v30;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, v18 - 27, &v30);
        v18 = v30;
        ++v7;
        if ( v30 )
          v30 = (_QWORD *)*v30;
        if ( (v7 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( v18 );
    }
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    if ( a2 )
      KiCheckForThreadDispatch((__int64)CurrentPrcb, 2u);
  }
}
