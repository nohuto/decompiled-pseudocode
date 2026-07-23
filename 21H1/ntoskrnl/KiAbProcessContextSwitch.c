/*
 * XREFs of KiAbProcessContextSwitch @ 0x1402668D0
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1403FCCC0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140269E50 (KiAbDetermineMaxWaiterPriority.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     KiAbIoBoostOwners @ 0x1402DCE74 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402DCF78 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402DD4E0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402DD594 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402DD848 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402DD91C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402DD964 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402DDA58 (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int i; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
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
  _QWORD *v20; // rcx
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
  _QWORD *v33; // [rsp+40h] [rbp-29h] BYREF
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
  v4 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(unsigned __int8 *)(a1 + 792);
  v7 = v6 | *(_BYTE *)(a1 + 870);
  v33 = 0LL;
  v34 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v35 = &CurrentPrcb->AbSelfIoBoostsList;
  v36 = CurrentPrcb;
  v41 = 0;
  if ( v7 == 63 )
  {
    v20 = v33;
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
        if ( ObReferenceObjectSafeWithTag((__int64)v28) )
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
    v4 = 0LL;
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
  v20 = v33;
  if ( v33 )
    v33 = (_QWORD *)*v33;
LABEL_20:
  if ( v20 )
  {
    while ( 1 )
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (__int64)(v20 - 27), (__int64)&v33, v4);
      v20 = v33;
      if ( !v33 )
        break;
      v33 = (_QWORD *)*v33;
    }
  }
  if ( i )
  {
    LOBYTE(v6) = 2;
    KiCheckForThreadDispatch(CurrentPrcb, v6);
  }
}
