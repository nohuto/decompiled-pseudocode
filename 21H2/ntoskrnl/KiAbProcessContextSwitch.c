/*
 * XREFs of KiAbProcessContextSwitch @ 0x1403529A0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KiAbForceProcessLockEntry @ 0x14038FBD4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C627C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1404067C0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051CB78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1402FA230 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x1402FBAB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402FBBB4 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402FCA20 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402FD36C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402FD440 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402FD488 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402FD57C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int i; // ebx
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // r14
  char v5; // al
  __int64 p_AbSelfIoBoostsList; // r12
  __int64 v7; // rax
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r15d
  char *LockedHeadEntry; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  char v20; // r9
  char v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r10d
  char CpuPriorityKey; // r13
  char v26; // al
  char v27; // r9
  __int64 v28; // r8
  char v29; // cl
  _DWORD *v30; // rdi
  unsigned __int64 ExtensionTable; // rax
  volatile signed __int16 *v32; // rdi
  signed __int32 v33[8]; // [rsp+0h] [rbp-69h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-21h] BYREF
  _SINGLE_LIST_ENTRY *v36; // [rsp+50h] [rbp-19h]
  struct _KPRCB *v37; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  int v39; // [rsp+D0h] [rbp+67h] BYREF
  int v40; // [rsp+D8h] [rbp+6Fh]
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh]

  v40 = a2;
  i = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 870)) == 0x3F )
    return;
  v3 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 870);
  v34 = 0LL;
  v35 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v36 = &CurrentPrcb->AbSelfIoBoostsList;
  v37 = CurrentPrcb;
  v42 = 0;
  if ( v5 == 63 )
  {
    v18 = v34;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(a1 + 800);
  v8 = (*(char *)(a1 + 792) | *(char *)(a1 + 870)) ^ 0x3F;
  v9 = !_BitScanForward((unsigned int *)&a1, v8);
  if ( v9 )
    goto LABEL_18;
  v10 = v7;
  do
  {
    v8 &= v8 - 1;
    v11 = v10 + 96 * a1;
    v12 = *(_QWORD *)(v11 + 32);
    if ( !v12 || (v12 & 2) != 0 || (v12 & 1) != 0 )
      goto LABEL_15;
    if ( v12 >= 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v11 + 27) & 1) != 0 )
      goto LABEL_15;
    if ( (*(_BYTE *)(v11 + 25) & 1) == 0 )
    {
      if ( KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1) == *(_BYTE *)(v11 + 48) )
        goto LABEL_15;
LABEL_9:
      v39 = v3;
      v41 = v3;
      v13 = v3;
      memset(&LockHandle, 0, sizeof(LockHandle));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v11, 1, &LockHandle, v3);
      v16 = (__int64)LockedHeadEntry;
      if ( !LockedHeadEntry )
        goto LABEL_15;
      if ( (*(_BYTE *)(v11 + 25) & 1) == 0 )
      {
        if ( (char *)v11 != LockedHeadEntry )
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v11, (__int64)LockedHeadEntry, v15);
        KiAbDetermineMaxWaiterPriority(v16, (__int64)&v39);
        if ( !v39 )
          goto LABEL_14;
        if ( (unsigned int)KiAbSetMinimumThreadPriority(
                             v11,
                             (__int64)&v39,
                             (__int64)&v34,
                             &v35,
                             p_AbSelfIoBoostsList,
                             &v41)
          && v11 != v16 )
        {
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v11, v16, v28);
        }
        v13 = v41;
        goto LABEL_37;
      }
      if ( (char *)v11 != LockedHeadEntry )
        KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v11, (_RTL_RB_TREE *)LockedHeadEntry);
      v19 = *(_QWORD *)(v16 + 56);
      if ( v19 )
        v20 = *(_BYTE *)(v19 + 48);
      else
        v20 = 15;
      v21 = v20;
      if ( (*(_BYTE *)(v16 + 25) & 1) == 0 )
      {
        v26 = KiAbOwnerComputeCpuPriorityKey(v16);
        if ( v26 < v27 )
          v21 = v26;
      }
      KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v11, v16);
      CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v11, v22, v23);
      if ( v21 < CpuPriorityKey )
      {
        if ( !v24 )
        {
          p_AbSelfIoBoostsList = (__int64)v36;
          goto LABEL_36;
        }
      }
      else if ( !v24 )
      {
        p_AbSelfIoBoostsList = (__int64)v36;
LABEL_14:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_15;
      }
      p_AbSelfIoBoostsList = (__int64)v36;
      KiAbIoBoostOwners(v16, v24, (int)&v34, (int)&v35, (__int64)v36);
LABEL_36:
      KiAbCpuBoostOwners(v16, CpuPriorityKey, (int)&v34, (int)&v35, p_AbSelfIoBoostsList);
LABEL_37:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v13 )
      {
        v30 = (_DWORD *)(v11 - 16LL * *(unsigned __int8 *)(v11 + 24));
        if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v30, 1953261124LL) )
        {
          if ( (v13 & 1) != 0 )
            IoBoostThreadIoPriority(v30, 2LL);
          if ( (v13 & 2) != 0 )
          {
            if ( v30[342] )
            {
              ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v30);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          ObDereferenceObjectDeferDeleteWithTag(v30, 0x746C6644u);
        }
      }
      goto LABEL_15;
    }
    v29 = *(_BYTE *)(v11 - 16LL * *(unsigned __int8 *)(v11 + 24) + 195);
    if ( v29 > 15 )
      v29 = 15;
    if ( v29 != *(_BYTE *)(v11 + 48) )
      goto LABEL_9;
LABEL_15:
    v9 = !_BitScanForward((unsigned int *)&a1, v8);
    v3 = 0LL;
    v42 = a1;
  }
  while ( !v9 );
  v17 = v35;
  for ( i = v40; v35; v17 = v35 )
  {
    v32 = (volatile signed __int16 *)(v17 - 101);
    v35 = (_QWORD *)*v17;
    *v17 = 1LL;
    _InterlockedOr(v33, 0);
    if ( *((_BYTE *)v17 - 15) )
      KiAbProcessThreadLocks((__int64)(v17 - 101), 0, 1, 0, (__int64)&v34, (__int64)&v35, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v32 + 434);
  }
  CurrentPrcb = v37;
LABEL_18:
  v18 = v34;
  if ( v34 )
    v34 = (_QWORD *)*v34;
LABEL_20:
  if ( v18 )
  {
    while ( 1 )
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v18 - 27), (__int64)&v34, v3);
      v18 = v34;
      if ( !v34 )
        break;
      v34 = (_QWORD *)*v34;
    }
  }
  if ( i )
    KiCheckForThreadDispatch((__int64)CurrentPrcb, 2u);
}
