/*
 * XREFs of MiDeletePartitionResources @ 0x140561B58
 * Callers:
 *     MiDeletePartition @ 0x14053591C (MiDeletePartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiEnumerateSlabAllocators @ 0x140236EDC (MiEnumerateSlabAllocators.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiUnlinkWorkingSet @ 0x14027444C (MiUnlinkWorkingSet.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402A6400 (ExFreeCacheAwareRundownProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1403FA600 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x1404EC394 (CcExitPartition.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052F844 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiFreeClonePool @ 0x14055AB00 (MiFreeClonePool.c)
 *     MiMergePageNodes @ 0x140562D24 (MiMergePageNodes.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiDeletePagingFiles @ 0x1408D06FC (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x1408D87AC (MiDeletePfnBitMaps.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DB250 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v14; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  __int64 v17; // r14
  HANDLE v18; // rsi
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rbx
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rsi
  unsigned __int64 *v25; // rcx
  volatile LONG *v26; // r12
  KIRQL v27; // al
  unsigned __int64 *v28; // rcx
  unsigned __int64 *v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // rsi
  unsigned __int64 *v33; // rcx
  _QWORD *v34; // rdx
  bool v35; // r8
  _QWORD *v36; // rax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  struct _KTHREAD *v41; // rbx
  unsigned __int8 v42; // r14
  unsigned int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rdx
  unsigned __int64 *v49; // rax
  unsigned __int64 *v50; // rbx
  unsigned __int64 *v51; // rax
  unsigned __int64 *v52; // rsi
  unsigned __int64 *v53; // rcx
  void *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rbx
  void *v59; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v65; // [rsp+A8h] [rbp+50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp+58h]
  _QWORD *v67; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *(_QWORD **)(a1 + 176);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v67 = 0LL;
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
    KeSetActualBasePriorityThread((__int64)v11, 12);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          SchedulerAssist = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v7 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  v17 = 6LL;
  do
  {
    v18 = *v9;
    if ( *v9 )
    {
      ZwWaitForSingleObject(*v9, 0, 0LL);
      ObCloseHandle(v18, 0);
    }
    ++v9;
    --v17;
  }
  while ( v17 );
  MiFreeClonePool((_SLIST_HEADER *)a1);
  v19 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL);
  *(_QWORD *)(a1 + 7592) -= MiDeletePagingFiles(a1);
  MiEnumerateSlabAllocators(
    a1,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiDeleteSlabAllocator,
    0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v20 = a1 + 192;
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL, 0LL);
  MiFreePartitionPhysicalPages(a1, v19);
  if ( (ULONG_PTR *)v19 != &MiSystemPartition )
  {
    v26 = (volatile LONG *)(v19 + 200);
    v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v19 + 200));
    v28 = *(unsigned __int64 **)(a1 + 24);
    v29 = 0LL;
    v30 = v27;
    while ( v28 )
    {
      v29 = v28;
      v28 = (unsigned __int64 *)*v28;
    }
    if ( !v29 )
    {
LABEL_61:
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
            v7 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick((__int64)v38);
          }
        }
      }
      __writecr8(v30);
      MiMakePartitionMemoryBlock(v19);
      SessionId = -1;
      goto LABEL_69;
    }
LABEL_44:
    v31 = (unsigned __int64 *)v29[1];
    v32 = v29;
    v33 = v29;
    if ( v31 )
    {
      do
      {
        v29 = v31;
        v31 = (unsigned __int64 *)*v31;
      }
      while ( v31 );
    }
    else
    {
      while ( 1 )
      {
        v29 = (unsigned __int64 *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (unsigned __int64 *)*v29 == v33 )
          break;
        v33 = v29;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v32);
    if ( (unsigned int)MiMergePageNodes(v19, v32) != 1 )
      goto LABEL_59;
    v34 = v67;
    v35 = 0;
    if ( !v67 )
      goto LABEL_58;
    while ( 1 )
    {
      if ( (v32[3] & 0x7FFFFFFFFFFFFFFFLL) < (v34[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v36 = (_QWORD *)*v34;
        if ( !*v34 )
        {
          v35 = 0;
LABEL_58:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v67, (unsigned __int64)v34, v35, v32);
LABEL_59:
          if ( !v29 )
          {
            v20 = a1 + 192;
            v26 = (volatile LONG *)(v19 + 200);
            goto LABEL_61;
          }
          goto LABEL_44;
        }
      }
      else
      {
        v36 = (_QWORD *)v34[1];
        if ( !v36 )
        {
          v35 = 1;
          goto LABEL_58;
        }
      }
      v34 = v36;
    }
  }
  v21 = *(unsigned __int64 **)(a1 + 24);
  v22 = 0LL;
  while ( v21 )
  {
    v22 = v21;
    v21 = (unsigned __int64 *)*v21;
  }
  if ( v22 )
  {
    do
    {
      v23 = (unsigned __int64 *)v22[1];
      v24 = v22;
      v25 = v22;
      if ( v23 )
      {
        do
        {
          v22 = v23;
          v23 = (unsigned __int64 *)*v23;
        }
        while ( v23 );
      }
      else
      {
        while ( 1 )
        {
          v22 = (unsigned __int64 *)(v22[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v22 || (unsigned __int64 *)*v22 == v25 )
            break;
          v25 = v22;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v24);
      ExFreePoolWithTag((PVOID)v24[5], 0);
      ExFreePoolWithTag(v24, 0);
    }
    while ( v22 );
    v20 = a1 + 192;
  }
LABEL_69:
  MiUnlockDynamicMemoryNestedParentExclusive(a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  v41 = KeGetCurrentThread();
  v65 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v41->ApcState.Process);
  --v41->SpecialApcDisable;
  v42 = ++v41->AbAllocationRegionCount;
  v43 = ((char)v41->AbEntrySummary | (char)v41->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v45, v43);
    if ( v7 )
      goto LABEL_80;
    v44 = (__int64)&v41->LockEntries[v45];
    v43 &= ~(1 << v45);
    if ( (*(_BYTE *)(v44 + 26) & 1) != 0
      && (*(_DWORD *)(v44 + 32) & 1) == 0
      && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v44 + 40) == SessionId )
    {
      *(_BYTE *)(v44 + 26) &= ~1u;
      if ( *(_QWORD *)(v44 + 32) )
        break;
    }
  }
  if ( !v44 )
  {
LABEL_80:
    if ( (*((_DWORD *)&v41->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v41, v20, SessionId, 0LL);
    goto LABEL_87;
  }
  *(_BYTE *)(v44 + 32) |= 2u;
  if ( *(__int64 *)(v44 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
  v46 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
  v47 = *(_DWORD *)(v44 + 88) & 0xFFFE0000;
  *(_BYTE *)(v44 + 25) &= ~1u;
  v65 = v46;
  *(_DWORD *)(v44 + 88) = v47;
  *(_QWORD *)(v44 + 32) = 0LL;
  v48 = (signed __int64)(v44 - (unsigned __int64)v41->LockEntries) / 96;
  if ( v42 == 1 )
    v41->AbEntrySummary |= 1 << v48;
  else
    _InterlockedOr8((volatile signed __int8 *)&v41->AbOrphanedEntrySummary, 1 << v48);
LABEL_87:
  --v41->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v41, v20, (unsigned int *)&v65);
  v7 = v41->SpecialApcDisable++ == -1;
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v49 = v67;
  v50 = 0LL;
  while ( v49 )
  {
    v50 = v49;
    v49 = (unsigned __int64 *)*v49;
  }
  while ( v50 )
  {
    v51 = (unsigned __int64 *)v50[1];
    v52 = v50;
    v53 = v50;
    if ( v51 )
    {
      do
      {
        v50 = v51;
        v51 = (unsigned __int64 *)*v51;
      }
      while ( v51 );
    }
    else
    {
      while ( 1 )
      {
        v50 = (unsigned __int64 *)(v50[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v50 || (unsigned __int64 *)*v50 == v53 )
          break;
        v53 = v50;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v67, v52);
    ExFreePoolWithTag((PVOID)v52[5], 0);
    ExFreePoolWithTag(v52, 0);
  }
  v54 = *(void **)(a1 + 6848);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(a1 + 6848) = 0LL;
  }
  v55 = *(_QWORD *)(a1 + 96);
  if ( v55 )
    MiDereferencePageRunsEx(v55, 0);
  v56 = *(_QWORD *)(a1 + 32);
  if ( v56 )
    MiDereferencePageRunsEx(v56, 0);
  MiDeletePfnBitMaps(a1);
  v57 = 11LL;
  v58 = a1 + 248;
  do
  {
    v59 = *(void **)(v58 + 88);
    if ( v59 )
      ObCloseHandle(v59, 0);
    if ( *(_QWORD *)v58 != a1 + 208 )
      ObfDereferenceObjectWithTag(*(PVOID *)v58, 0x746C6644u);
    v58 += 8LL;
    --v57;
  }
  while ( v57 );
  v60 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2144);
  if ( v60 )
    ExFreeCacheAwareRundownProtection(v60);
  v61 = *(void **)(a1 + 240);
  if ( v61 )
    ObCloseHandle(v61, 0);
  v62 = *(void **)(a1 + 232);
  if ( v62 )
    ObCloseHandle(v62, 0);
}
