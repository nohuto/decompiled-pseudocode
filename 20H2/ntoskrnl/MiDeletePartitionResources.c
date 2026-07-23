/*
 * XREFs of MiDeletePartitionResources @ 0x14055FE48
 * Callers:
 *     MiDeletePartition @ 0x140533BDC (MiDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140202C10 (ExFreeCacheAwareRundownProtection.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlinkWorkingSet @ 0x14026354C (MiUnlinkWorkingSet.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiEnumerateSlabAllocators @ 0x140315944 (MiEnumerateSlabAllocators.c)
 *     MiDereferencePageRunsEx @ 0x1403221F0 (MiDereferencePageRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1403F81F0 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x1404EA5C4 (CcExitPartition.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052DB04 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiFreeClonePool @ 0x140558DF0 (MiFreeClonePool.c)
 *     MiMergePageNodes @ 0x140561014 (MiMergePageNodes.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x1408D2DDC (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x1408DAE8C (MiDeletePfnBitMaps.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DD930 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DDDC0 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  _QWORD *v2; // rcx
  unsigned int SessionId; // r12d
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax
  HANDLE *v9; // rbx
  void *v10; // rcx
  PVOID v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v16; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  __int64 v19; // r14
  HANDLE v20; // rsi
  __int64 v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rbx
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rsi
  unsigned __int64 *v27; // rcx
  volatile LONG *v28; // r12
  KIRQL v29; // al
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rbx
  unsigned __int64 v32; // r14
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rsi
  unsigned __int64 *v35; // rcx
  _QWORD *v36; // rdx
  bool v37; // r8
  _QWORD *v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  struct _KTHREAD *v43; // rbx
  unsigned __int8 v44; // r14
  unsigned int v45; // edx
  __int64 v46; // rsi
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 *v52; // rax
  unsigned __int64 *v53; // rbx
  unsigned __int64 *v54; // rax
  unsigned __int64 *v55; // rsi
  unsigned __int64 *v56; // rcx
  void *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rbx
  void *v62; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v63; // rcx
  void *v64; // rcx
  void *v65; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v68; // [rsp+A8h] [rbp+50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp+58h]
  _QWORD *v70; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *(_QWORD **)(a1 + 176);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v70 = 0LL;
  CcExitPartition(v2, 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  SessionId = -1;
  if ( *(_BYTE *)(a1 + 6940) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 7232, 0LL);
    v4 = *(_QWORD *)(a1 + 7344);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v4 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v4 >= 0x80000 )
              break;
            v8 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                   v4 + CachedResidentAvailable,
                   CachedResidentAvailable);
            v7 = (_DWORD)CachedResidentAvailable == v8;
            LODWORD(CachedResidentAvailable) = v8;
            if ( v7 )
              goto LABEL_14;
          }
          while ( v8 != -1 && v4 + v8 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v4 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v4);
  }
LABEL_14:
  v9 = (HANDLE *)(a1 + 128);
  v10 = *(void **)(a1 + 128);
  if ( v10 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(v10, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4928), &LockHandle);
    v11 = Object;
    *(_BYTE *)(a1 + 6296) = 1;
    KeSetActualBasePriorityThread((__int64)v11, 12, v12, v13);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          SchedulerAssist = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v7 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  v19 = 6LL;
  do
  {
    v20 = *v9;
    if ( *v9 )
    {
      ZwWaitForSingleObject(*v9, 0, 0LL);
      ObCloseHandle(v20, 0);
    }
    ++v9;
    --v19;
  }
  while ( v19 );
  MiFreeClonePool((_SLIST_HEADER *)a1);
  v21 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL);
  *(_QWORD *)(a1 + 7592) -= MiDeletePagingFiles(a1);
  MiEnumerateSlabAllocators(
    a1,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiDeleteSlabAllocator,
    0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v22 = a1 + 192;
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL, 0LL);
  MiFreePartitionPhysicalPages(a1, v21);
  if ( (ULONG_PTR *)v21 != &MiSystemPartition )
  {
    v28 = (volatile LONG *)(v21 + 200);
    v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v21 + 200));
    v30 = *(unsigned __int64 **)(a1 + 24);
    v31 = 0LL;
    v32 = v29;
    while ( v30 )
    {
      v31 = v30;
      v30 = (unsigned __int64 *)*v30;
    }
    if ( !v31 )
    {
LABEL_61:
      ExReleaseSpinLockExclusiveFromDpcLevel(v28);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
            v7 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
      }
      __writecr8(v32);
      MiMakePartitionMemoryBlock(v21);
      SessionId = -1;
      goto LABEL_69;
    }
LABEL_44:
    v33 = (unsigned __int64 *)v31[1];
    v34 = v31;
    v35 = v31;
    if ( v33 )
    {
      do
      {
        v31 = v33;
        v33 = (unsigned __int64 *)*v33;
      }
      while ( v33 );
    }
    else
    {
      while ( 1 )
      {
        v31 = (unsigned __int64 *)(v31[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v31 || (unsigned __int64 *)*v31 == v35 )
          break;
        v35 = v31;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v34);
    if ( (unsigned int)MiMergePageNodes(v21, v34) != 1 )
      goto LABEL_59;
    v36 = v70;
    v37 = 0;
    if ( !v70 )
      goto LABEL_58;
    while ( 1 )
    {
      if ( (v34[3] & 0x7FFFFFFFFFFFFFFFLL) < (v36[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v38 = (_QWORD *)*v36;
        if ( !*v36 )
        {
          v37 = 0;
LABEL_58:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v70, (unsigned __int64)v36, v37, v34);
LABEL_59:
          if ( !v31 )
          {
            v22 = a1 + 192;
            v28 = (volatile LONG *)(v21 + 200);
            goto LABEL_61;
          }
          goto LABEL_44;
        }
      }
      else
      {
        v38 = (_QWORD *)v36[1];
        if ( !v38 )
        {
          v37 = 1;
          goto LABEL_58;
        }
      }
      v36 = v38;
    }
  }
  v23 = *(unsigned __int64 **)(a1 + 24);
  v24 = 0LL;
  while ( v23 )
  {
    v24 = v23;
    v23 = (unsigned __int64 *)*v23;
  }
  if ( v24 )
  {
    do
    {
      v25 = (unsigned __int64 *)v24[1];
      v26 = v24;
      v27 = v24;
      if ( v25 )
      {
        do
        {
          v24 = v25;
          v25 = (unsigned __int64 *)*v25;
        }
        while ( v25 );
      }
      else
      {
        while ( 1 )
        {
          v24 = (unsigned __int64 *)(v24[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v24 || (unsigned __int64 *)*v24 == v27 )
            break;
          v27 = v24;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v26);
      ExFreePoolWithTag((PVOID)v26[5], 0);
      ExFreePoolWithTag(v26, 0);
    }
    while ( v24 );
    v22 = a1 + 192;
  }
LABEL_69:
  MiUnlockDynamicMemoryNestedParentExclusive(a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v22);
  v43 = KeGetCurrentThread();
  v68 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v22) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v43->ApcState.Process);
  --v43->SpecialApcDisable;
  v44 = ++v43->AbAllocationRegionCount;
  v45 = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v47, v45);
    if ( v7 )
      goto LABEL_80;
    v46 = (__int64)&v43->LockEntries[v47];
    v45 &= ~(1 << v47);
    if ( (*(_BYTE *)(v46 + 26) & 1) != 0
      && (*(_DWORD *)(v46 + 32) & 1) == 0
      && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v22 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v46 + 40) == SessionId )
    {
      *(_BYTE *)(v46 + 26) &= ~1u;
      if ( *(_QWORD *)(v46 + 32) )
        break;
    }
  }
  if ( !v46 )
  {
LABEL_80:
    if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v43, v22, SessionId, 0LL);
    goto LABEL_87;
  }
  *(_BYTE *)(v46 + 32) |= 2u;
  if ( *(__int64 *)(v46 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v46);
  v48 = *(_DWORD *)(v46 + 88) & 0x1FFFF;
  v49 = *(_DWORD *)(v46 + 88) & 0xFFFE0000;
  *(_BYTE *)(v46 + 25) &= ~1u;
  v68 = v48;
  *(_DWORD *)(v46 + 88) = v49;
  *(_QWORD *)(v46 + 32) = 0LL;
  v50 = (signed __int64)(v46 - (unsigned __int64)v43->LockEntries) / 96;
  if ( v44 == 1 )
    v43->AbEntrySummary |= 1 << v50;
  else
    _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, 1 << v50);
LABEL_87:
  --v43->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v43, v22, &v68);
  v7 = v43->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
    KiCheckForKernelApcDelivery(v51);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v52 = v70;
  v53 = 0LL;
  while ( v52 )
  {
    v53 = v52;
    v52 = (unsigned __int64 *)*v52;
  }
  while ( v53 )
  {
    v54 = (unsigned __int64 *)v53[1];
    v55 = v53;
    v56 = v53;
    if ( v54 )
    {
      do
      {
        v53 = v54;
        v54 = (unsigned __int64 *)*v54;
      }
      while ( v54 );
    }
    else
    {
      while ( 1 )
      {
        v53 = (unsigned __int64 *)(v53[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v53 || (unsigned __int64 *)*v53 == v56 )
          break;
        v56 = v53;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v70, v55);
    ExFreePoolWithTag((PVOID)v55[5], 0);
    ExFreePoolWithTag(v55, 0);
  }
  v57 = *(void **)(a1 + 6848);
  if ( v57 )
  {
    ExFreePoolWithTag(v57, 0);
    *(_QWORD *)(a1 + 6848) = 0LL;
  }
  v58 = *(_QWORD *)(a1 + 96);
  if ( v58 )
    MiDereferencePageRunsEx(v58, 0);
  v59 = *(_QWORD *)(a1 + 32);
  if ( v59 )
    MiDereferencePageRunsEx(v59, 0);
  MiDeletePfnBitMaps(a1);
  v60 = 11LL;
  v61 = a1 + 248;
  do
  {
    v62 = *(void **)(v61 + 88);
    if ( v62 )
      ObCloseHandle(v62, 0);
    if ( *(_QWORD *)v61 != a1 + 208 )
      ObfDereferenceObjectWithTag(*(PVOID *)v61, 0x746C6644u);
    v61 += 8LL;
    --v60;
  }
  while ( v60 );
  v63 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2144);
  if ( v63 )
    ExFreeCacheAwareRundownProtection(v63);
  v64 = *(void **)(a1 + 240);
  if ( v64 )
    ObCloseHandle(v64, 0);
  v65 = *(void **)(a1 + 232);
  if ( v65 )
    ObCloseHandle(v65, 0);
}
