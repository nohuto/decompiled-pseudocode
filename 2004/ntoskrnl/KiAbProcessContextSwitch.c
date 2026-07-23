/*
 * XREFs of KiAbProcessContextSwitch @ 0x14020D880
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x140348C48 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1403FDF50 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140210E00 (KiAbDetermineMaxWaiterPriority.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiAbIoBoostOwners @ 0x140329C44 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140329D48 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14032A2B0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14032A618 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14032A6EC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14032A734 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14032A828 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
            IoBoostThreadIoPriority(v28, 2LL);
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
      KiDeferredReadySingleThread(CurrentPrcb, v20 - 27, &v33, v4);
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
