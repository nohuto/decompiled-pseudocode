/*
 * XREFs of MiDeletePartitionResources @ 0x1405BDFF8
 * Callers:
 *     MiDeletePartition @ 0x14058DDC0 (MiDeletePartition.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiUnlinkWorkingSet @ 0x1402172E4 (MiUnlinkWorkingSet.c)
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     MiEnumerateSlabAllocators @ 0x14023B3C8 (MiEnumerateSlabAllocators.c)
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x140583BB8 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiDeleteSpecialPurposeMemory @ 0x140599CA8 (MiDeleteSpecialPurposeMemory.c)
 *     MiEmptyKernelStackCache @ 0x1405A54BC (MiEmptyKernelStackCache.c)
 *     MiCleanupPartitionZeroing @ 0x1405B25B4 (MiCleanupPartitionZeroing.c)
 *     MiFreeClonePool @ 0x1405BAEEC (MiFreeClonePool.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiMergePageNodes @ 0x1405BF028 (MiMergePageNodes.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x14096F240 (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x14097E6E8 (MiDeletePfnBitMaps.c)
 *     MiFreePartitionPhysicalPages @ 0x140981A04 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x140981F58 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  __int64 v3; // rbp
  HANDLE v4; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rbp
  KIRQL v7; // al
  unsigned __int64 *v8; // rcx
  KIRQL v9; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 **v11; // rax
  unsigned __int64 *v12; // rsi
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rcx
  _QWORD *v15; // rdx
  bool v16; // r8
  _QWORD *v17; // rax
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  _QWORD *v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0LL;
  CcExitPartition(*(_QWORD **)(a1 + 176), 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 16732) )
  {
    MiUnlinkWorkingSet(a1 + 17024, 0LL);
    MiReturnResident(a1, *(_QWORD *)(a1 + 17136));
  }
  v2 = (HANDLE *)(a1 + 128);
  v3 = 6LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v4, 0);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  MiFreeClonePool((union _SLIST_HEADER *)a1);
  MiEmptyKernelStackCache((union _SLIST_HEADER *)a1, 1);
  *(_QWORD *)(a1 + 17496) -= MiDeletePagingFiles(a1);
  MiEnumerateSlabAllocators(
    a1,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiDeleteSlabAllocator,
    0LL,
    0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v6 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL);
  MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL, 0LL);
  MiFreePartitionPhysicalPages(a1, v6);
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
  {
    MiDeletePartitionPageNodes((unsigned __int64 *)(a1 + 24));
    goto LABEL_31;
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200));
  v8 = *(unsigned __int64 **)(a1 + 24);
  v9 = v7;
  i = 0LL;
  while ( v8 )
  {
    i = v8;
    v8 = (unsigned __int64 *)*v8;
  }
LABEL_29:
  while ( 2 )
  {
    if ( i )
    {
      v11 = (unsigned __int64 **)i[1];
      v12 = i;
      v13 = i;
      if ( v11 )
      {
        v14 = *v11;
        for ( i = (unsigned __int64 *)i[1]; v14; v14 = (unsigned __int64 *)*v14 )
          i = v14;
      }
      else
      {
        while ( 1 )
        {
          i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (unsigned __int64 *)*i == v13 )
            break;
          v13 = i;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v12);
      if ( !(unsigned int)MiMergePageNodes(v6, v12, 0LL) )
        continue;
      v15 = v27;
      v16 = 0;
      if ( !v27 )
        goto LABEL_28;
      while ( 1 )
      {
        if ( (v12[3] & 0x3FFFFFFFFFFFFFFFLL) >= (v15[3] & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          v17 = (_QWORD *)v15[1];
          if ( !v17 )
          {
            v16 = 1;
LABEL_28:
            RtlAvlInsertNodeEx((unsigned __int64 *)&v27, (unsigned __int64)v15, v16, v12);
            goto LABEL_29;
          }
        }
        else
        {
          v17 = (_QWORD *)*v15;
          if ( !*v15 )
          {
            v16 = 0;
            goto LABEL_28;
          }
        }
        v15 = v17;
      }
    }
    break;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200), v9);
  MiMakePartitionMemoryBlock(v6);
LABEL_31:
  MiUnlockDynamicMemoryNestedParentExclusive(a1);
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  MiDeletePartitionPageNodes((unsigned __int64 *)&v27);
  v18 = *(void **)(a1 + 16600);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(a1 + 16600) = 0LL;
  }
  v19 = *(_QWORD *)(a1 + 96);
  if ( v19 )
    MiDereferencePageRunsEx(v19, 0);
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 )
    MiDereferencePageRunsEx(v20, 0);
  MiDeleteSpecialPurposeMemory(a1);
  MiCleanupPartitionZeroing(a1);
  MiDeletePfnBitMaps(a1);
  v21 = 11LL;
  v22 = a1 + 248;
  do
  {
    v23 = *(void **)(v22 + 88);
    if ( v23 )
      ObCloseHandle(v23, 0);
    if ( *(_QWORD *)v22 != a1 + 208 )
      ObfDereferenceObject(*(PVOID *)v22);
    v22 += 8LL;
    --v21;
  }
  while ( v21 );
  v24 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2368);
  if ( v24 )
    ExFreeCacheAwareRundownProtection(v24);
  v25 = *(void **)(a1 + 240);
  if ( v25 )
    ObCloseHandle(v25, 0);
  v26 = *(void **)(a1 + 232);
  if ( v26 )
    ObCloseHandle(v26, 0);
}
