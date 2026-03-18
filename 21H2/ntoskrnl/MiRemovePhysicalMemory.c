/*
 * XREFs of MiRemovePhysicalMemory @ 0x140969850
 * Callers:
 *     MiDeleteExtentPfns @ 0x14059E2C0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14096AF9C (MiRemoveMdlPages.c)
 *     MiCreateFileOnlyPfns @ 0x1409704A0 (MiCreateFileOnlyPfns.c)
 *     MiHotRemovePartitionPageRun @ 0x140981EE4 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     MiDereferencePageRuns @ 0x14023FCF0 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x1403B7624 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405531C0 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14056AF98 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x140583408 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiPerformMemoryChange @ 0x1405835E0 (MiPerformMemoryChange.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140583778 (MiPhysicalMemoryEverRemoved.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x140583A70 (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiGetDanglingExtent @ 0x14059EFE4 (MiGetDanglingExtent.c)
 *     MiGetPfnRemovalRequested @ 0x1405AD99C (MiGetPfnRemovalRequested.c)
 *     MiFlushCacheRange @ 0x1405B2400 (MiFlushCacheRange.c)
 *     MiReduceCommitLimits @ 0x1405B3268 (MiReduceCommitLimits.c)
 *     MiPartitionDeleteMemoryNode @ 0x1405BF2A0 (MiPartitionDeleteMemoryNode.c)
 *     MiComputeNodeMemory @ 0x14081DDB0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x140969320 (MiConfigureMemoryRemoval.c)
 *     MiHotAddHugeRange @ 0x14096A988 (MiHotAddHugeRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 DanglingExtent; // rdi
  ULONG_PTR v6; // rbx
  ULONG_PTR *v7; // r15
  int v8; // r12d
  int v9; // ebx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r12
  unsigned int *v17; // rax
  int v18; // eax
  int v19; // eax
  ULONG_PTR *v20; // rcx
  unsigned int *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-49h]
  unsigned int *v24; // [rsp+48h] [rbp-41h]
  __int64 v25[3]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v26[14]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int *v27; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR v28; // [rsp+F8h] [rbp+6Fh] BYREF
  int v29; // [rsp+100h] [rbp+77h]
  char *v30; // [rsp+108h] [rbp+7Fh] BYREF

  v28 = a2;
  v25[1] = (__int64)v25;
  v25[2] = 0LL;
  v25[0] = (__int64)v25;
  CurrentThread = KeGetCurrentThread();
  DanglingExtent = BugCheckParameter2;
  v26[1] = 0LL;
  v6 = 6 * BugCheckParameter2;
  v26[4] = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v23 = 0LL;
  v7 = (ULONG_PTR *)MiPartitionIdToPointer((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF);
  if ( v7 == &MiSystemPartition )
  {
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    MiLockDynamicMemoryExclusive((__int64)v7, (__int64)CurrentThread);
    MiLockDynamicMemoryNestedExclusive();
  }
  v8 = a3 & 2;
  v29 = v8;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    if ( (a3 & 0x40) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v28);
      if ( DanglingExtent == -1LL )
      {
        if ( v7 == &MiSystemPartition )
        {
          v10 = &MiSystemPartition;
        }
        else
        {
          MiUnlockDynamicMemoryNestedExclusive();
          v10 = v7;
        }
        MiUnlockDynamicMemoryExclusive((__int64)v10, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v12 = v28;
  }
  else
  {
    v26[0] = 0LL;
    v12 = v28;
    v26[2] = DanglingExtent;
    v26[3] = v28;
    if ( (a3 & 0x10000) != 0 )
    {
      v13 = 8 * v6 - 0x220000000000LL;
      v14 = v13 + 48 * v28;
      while ( v13 < v14 )
      {
        if ( MiGetPfnRemovalRequested(v13) )
        {
          v9 = -1073740023;
          goto LABEL_49;
        }
        v13 = v15 + 48;
      }
    }
    v9 = MiConfigureMemoryRemoval(&v30, (unsigned int *)MmPhysicalMemoryBlock, v26);
    if ( v9 < 0 )
      goto LABEL_49;
    v9 = KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v12 - 1, 2LL);
    if ( v9 < 0 )
      goto LABEL_49;
    v23 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    if ( !(unsigned int)MiDescribePageRun((__int64)v25, DanglingExtent, v12) )
    {
      v9 = -1073741670;
LABEL_21:
      KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v12 - 1, 8LL);
      goto LABEL_49;
    }
    v16 = (__int64 *)v25[0];
    v17 = (unsigned int *)v23;
    while ( 1 )
    {
      v24 = v17;
      if ( v16 == v25 )
        break;
      v9 = MiConfigureMemoryRemoval(&v27, v17, v16);
      if ( v24 != (unsigned int *)v23 )
        ExFreePoolWithTag(v24 - 4, 0);
      if ( v9 < 0 )
        goto LABEL_21;
      v17 = v27;
      v16 = (__int64 *)*v16;
    }
    if ( (a3 & 0x100000) == 0 )
    {
      MiReduceCommitLimits(&MiSystemPartition, v12, v12);
      MiReturnCommit((__int64)&MiSystemPartition, v12);
    }
    MiPerformMemoryChange(DanglingExtent, v12, (void **)&v30, (__int64 *)&v27, a3, (__int64 ***)v25);
    MiComputeNodeMemory(&MiSystemPartition, 1);
    if ( (a3 & 0x100000) == 0 )
    {
      v18 = -1;
      if ( qword_140C590D0 <= 0xFFFFFFFF )
        v18 = qword_140C590D0;
      MEMORY[0xFFFFF780000002E8] = v18;
    }
    v19 = KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v12 - 1, 4LL);
    v9 = v19;
    if ( v19 < 0 )
      KeBugCheckEx(0x1Au, 0x61A02uLL, DanglingExtent, DanglingExtent + v12, v19);
    v8 = v29;
  }
  MiInitializeDynamicPfns(DanglingExtent, v12, (unsigned __int16 *)&MiSystemPartition, a3, 0LL, 0LL);
  MiPhysicalMemoryEverRemoved(DanglingExtent, v12, 0);
  if ( (a3 & 0x20) != 0 )
  {
    qword_140C54FD0 += v12;
    if ( (unsigned __int64)qword_140C54FD0 >= 0x5555 && !byte_140C5504C )
    {
      stru_140C54FB0.List.Flink = 0LL;
      stru_140C54FB0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140C54FB0.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_140C54FB0, DelayedWorkQueue);
      byte_140C5504C = 1;
    }
  }
  if ( !v8 )
  {
    if ( stru_140C51E68.Header.SignalState && (MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
    KePulseEvent(qword_140C550C8, 0, 0);
    if ( (a3 & 0x10000) != 0 )
    {
      MiPartitionDeleteMemoryNode((__int64)v7, DanglingExtent, v12);
      MiHotAddHugeRange((_DWORD)v7, DanglingExtent, v12, 0, 2 - ((a3 & 0x200) != 0), 1);
    }
    if ( (a3 & 0x200000) == 0 )
    {
      MiFlushEntireTbDueToAttributeChange();
      MiFlushCacheRange(DanglingExtent, v12);
    }
  }
LABEL_49:
  if ( v7 == &MiSystemPartition )
  {
    v20 = &MiSystemPartition;
  }
  else
  {
    MiUnlockDynamicMemoryNestedExclusive();
    v20 = v7;
  }
  MiUnlockDynamicMemoryExclusive((__int64)v20, (__int64)CurrentThread);
  if ( v30 )
    ExFreePoolWithTag(v30 - 16, 0);
  if ( !v27 )
    goto LABEL_57;
  v21 = v27 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v21, 0);
LABEL_57:
    v21 = (unsigned int *)v25[0];
    if ( (__int64 *)v25[0] == v25 )
      break;
    if ( *(__int64 **)(v25[0] + 8) != v25 || (v22 = *(_QWORD *)v25[0], *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0]) )
      __fastfail(3u);
    v25[0] = *(_QWORD *)v25[0];
    *(_QWORD *)(v22 + 8) = v25;
  }
  if ( v23 )
    MiDereferencePageRuns(v23);
  if ( v9 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x200002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v9;
}
