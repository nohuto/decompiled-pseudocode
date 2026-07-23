/*
 * XREFs of MiRemovePhysicalMemory @ 0x1408C298C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053B2B0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1408C2D70 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C3460 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1408D7F4C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14026ADE8 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14026B1A8 (MiLockDynamicMemoryExclusive.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KePulseEvent @ 0x1402F2EF0 (KePulseEvent.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14037CC10 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403A8628 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1404FD7FC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14050D8D8 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140529568 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x14053BD50 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x14054B19C (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x14054F074 (MiFlushCacheRange.c)
 *     MiComputeNodeMemory @ 0x1407BA550 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1408C24E8 (MiConfigureMemoryRemoval.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  __int64 DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  char v6; // si
  __int64 v7; // r12
  int v8; // edi
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int *i; // r13
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v18; // eax
  char v19; // r15
  unsigned int *v20; // rcx
  __int64 v21; // rax
  unsigned int *v22; // [rsp+48h] [rbp-39h] BYREF
  char *v23; // [rsp+50h] [rbp-31h] BYREF
  struct _KTHREAD *v24; // [rsp+58h] [rbp-29h]
  PVOID P[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v26[12]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v27; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v28; // [rsp+F8h] [rbp+77h]
  int v29; // [rsp+100h] [rbp+7Fh]

  v28 = a3;
  v27 = a2;
  DanglingExtent = BugCheckParameter2;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v24 = CurrentThread;
  v26[1] = 0LL;
  v6 = a3;
  v26[4] = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v29 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v27);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v27;
    goto LABEL_20;
  }
  v10 = v27;
  v26[0] = 0LL;
  v26[3] = v27;
  v26[2] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v23, (unsigned int *)MmPhysicalMemoryBlock, v26);
  if ( v8 < 0 )
  {
LABEL_30:
    v19 = v28;
    goto LABEL_31;
  }
  v7 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v11, v12);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_30;
  }
  for ( i = (unsigned int *)v7; ; i = v22 )
  {
    v14 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v15 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_40:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v22, i, v14);
    ExFreePoolWithTag(v14, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v29;
      goto LABEL_30;
    }
  }
  MiReduceCommitLimits(&MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)&MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v23, (__int64 *)&v22, 0);
  MiComputeNodeMemory(&MiSystemPartition, 1, v16, v17);
  v18 = -1;
  if ( qword_140C52690 <= 0xFFFFFFFF )
    v18 = qword_140C52690;
  MEMORY[0xFFFFF780000002E8] = v18;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2u);
  v5 = v29;
LABEL_20:
  v19 = v28;
  MiInitializeDynamicPfns(DanglingExtent, v10, (__int16 *)&MiSystemPartition, v28, 0LL, 0LL);
  qword_140C50BD0 += v10;
  if ( (unsigned __int64)qword_140C50BD0 >= 0x5555 && !byte_140C50C4C )
  {
    stru_140C50BB0.List.Flink = 0LL;
    stru_140C50BB0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_140C50BB0.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_140C50BB0, DelayedWorkQueue);
    byte_140C50C4C = 1;
  }
  if ( !v5 )
  {
    if ( (MiFlags & 0x10000000) != 0 && (MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C50CC8, 0, 0);
    MiFlushEntireTbDueToAttributeChange();
    MiFlushCacheRange(DanglingExtent, v10);
  }
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v24);
  if ( v23 )
    ExFreePoolWithTag(v23 - 16, 0);
  if ( !v22 )
    goto LABEL_36;
  v20 = v22 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v20, 0);
LABEL_36:
    v20 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_40;
    v21 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_40;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v21 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v19 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v8;
}
