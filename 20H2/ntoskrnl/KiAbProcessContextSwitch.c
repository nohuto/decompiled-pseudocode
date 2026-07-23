/*
 * XREFs of KiAbProcessContextSwitch @ 0x14021DA40
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14035E3E8 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C56EC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140242170 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14024232C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140242430 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402432A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140243BEC (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140243CC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140243D08 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140243DFC (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int i; // ebx
  __int64 v3; // r8
  int v4; // r9d
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v6; // rdx
  char v7; // al
  __int64 p_AbSelfIoBoostsList; // r12
  __int64 v9; // rax
  unsigned int v10; // esi
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v17; // r9
  __int64 v18; // r14
  _QWORD *v19; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v21; // rax
  char v22; // r12
  int v23; // r10d
  unsigned __int8 CpuPriorityKey; // r13
  char v25; // al
  char v26; // r9
  char v27; // cl
  _DWORD *v28; // rdi
  __int64 ExtensionTable; // rax
  volatile signed __int16 *v31; // rdi
  signed __int32 v32[8]; // [rsp+0h] [rbp-69h] BYREF
  _SINGLE_LIST_ENTRY v33; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-21h] BYREF
  _SINGLE_LIST_ENTRY *v35; // [rsp+50h] [rbp-19h]
  struct _KPRCB *v36; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  int v38; // [rsp+D0h] [rbp+67h] BYREF
  int v39; // [rsp+D8h] [rbp+6Fh]
  int v40; // [rsp+E0h] [rbp+77h] BYREF
  int v41; // [rsp+E8h] [rbp+7Fh]

  v39 = a2;
  i = a2;
  v3 = *(char *)(a1 + 792) | (unsigned int)*(char *)(a1 + 870);
  if ( (_DWORD)v3 == 63 )
    return;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(unsigned __int8 *)(a1 + 792);
  v7 = v6 | *(_BYTE *)(a1 + 870);
  v33.Next = 0LL;
  v34 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v35 = &CurrentPrcb->AbSelfIoBoostsList;
  v36 = CurrentPrcb;
  v41 = 0;
  if ( v7 == 63 )
  {
    Next = v33.Next;
    goto LABEL_20;
  }
  v6 = (unsigned int)*(char *)(a1 + 792);
  v9 = *(_QWORD *)(a1 + 800);
  v10 = (v6 | *(char *)(a1 + 870)) ^ 0x3F;
  v11 = !_BitScanForward((unsigned int *)&a1, v10);
  if ( v11 )
    goto LABEL_18;
  v12 = v9;
  do
  {
    v10 &= v10 - 1;
    v13 = v12 + 96 * a1;
    v14 = *(_QWORD *)(v13 + 32);
    if ( !v14 || (v14 & 2) != 0 || (v14 & 1) != 0 )
      goto LABEL_15;
    if ( v14 >= 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
      goto LABEL_15;
    if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
    {
      if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v12 + 96 * a1, v6, v3, 0LL) == *(_BYTE *)(v13 + 48) )
        goto LABEL_15;
LABEL_9:
      v38 = v4;
      v40 = v4;
      v15 = v4;
      memset(&LockHandle, 0, sizeof(LockHandle));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v13);
      v18 = LockedHeadEntry;
      if ( !LockedHeadEntry )
        goto LABEL_15;
      if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
      {
        if ( v13 != LockedHeadEntry )
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
        KiAbDetermineMaxWaiterPriority(v18, &v38);
        if ( !v38 )
          goto LABEL_14;
        if ( (unsigned int)KiAbSetMinimumThreadPriority(
                             v13,
                             (unsigned int)&v38,
                             (unsigned int)&v33,
                             (unsigned int)&v34,
                             p_AbSelfIoBoostsList,
                             (__int64)&v40)
          && v13 != v18 )
        {
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
        }
        v15 = v40;
        goto LABEL_37;
      }
      if ( v13 != LockedHeadEntry )
        KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13);
      v21 = *(_QWORD *)(v18 + 56);
      if ( v21 )
        v17 = *(unsigned __int8 *)(v21 + 48);
      else
        LOBYTE(v17) = 15;
      v22 = v17;
      if ( (*(_BYTE *)(v18 + 25) & 1) == 0 )
      {
        v25 = KiAbOwnerComputeCpuPriorityKey(v18, v6, v3, v17);
        if ( v25 < v26 )
          v22 = v25;
      }
      KiAbTryIncrementIoWaiterCounts(v13, v18);
      CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
      if ( v22 < (char)CpuPriorityKey )
      {
        if ( !v23 )
        {
          p_AbSelfIoBoostsList = (__int64)v35;
          goto LABEL_36;
        }
      }
      else if ( !v23 )
      {
        p_AbSelfIoBoostsList = (__int64)v35;
LABEL_14:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_15;
      }
      p_AbSelfIoBoostsList = (__int64)v35;
      KiAbIoBoostOwners(v18, v23, (unsigned int)&v33, (unsigned int)&v34, (__int64)v35);
LABEL_36:
      KiAbCpuBoostOwners(v18, CpuPriorityKey, (unsigned int)&v33, (unsigned int)&v34, p_AbSelfIoBoostsList);
LABEL_37:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v15 )
      {
        v28 = (_DWORD *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24));
        if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v28, 1953261124LL) )
        {
          if ( (v15 & 1) != 0 )
            IoBoostThreadIoPriority(v28, 2LL, 0x80000000LL);
          if ( (v15 & 2) != 0 )
          {
            if ( v28[342] )
            {
              ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v28);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          ObDereferenceObjectDeferDeleteWithTag(v28, 0x746C6644u);
        }
      }
      goto LABEL_15;
    }
    v27 = *(_BYTE *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24) + 195);
    if ( v27 > 15 )
      v27 = 15;
    if ( v27 != *(_BYTE *)(v13 + 48) )
      goto LABEL_9;
LABEL_15:
    v11 = !_BitScanForward((unsigned int *)&a1, v10);
    v4 = 0;
    v41 = a1;
  }
  while ( !v11 );
  v19 = v34;
  for ( i = v39; v34; v19 = v34 )
  {
    v31 = (volatile signed __int16 *)(v19 - 101);
    v34 = (_QWORD *)*v19;
    *v19 = 1LL;
    _InterlockedOr(v32, 0);
    if ( *((_BYTE *)v19 - 15) )
      KiAbProcessThreadLocks((_DWORD)v19 - 808, 0, 1, 0, (__int64)&v33, (__int64)&v34, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v31 + 434);
  }
  CurrentPrcb = v36;
LABEL_18:
  Next = v33.Next;
  if ( v33.Next )
    v33.Next = v33.Next->Next;
LABEL_20:
  if ( Next )
  {
    while ( 1 )
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)&Next[-27], &v33);
      Next = v33.Next;
      if ( !v33.Next )
        break;
      v33.Next = v33.Next->Next;
    }
  }
  if ( i )
  {
    LOBYTE(v6) = 2;
    KiCheckForThreadDispatch(CurrentPrcb, v6);
  }
}
