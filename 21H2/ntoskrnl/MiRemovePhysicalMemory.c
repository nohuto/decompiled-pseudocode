/*
 * XREFs of MiRemovePhysicalMemory @ 0x1408C60EC
 * Callers:
 *     MiDeleteExtentPfns @ 0x1405409C0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1408C64D0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C6BC0 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1408DB6AC (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402749A0 (MiLockDynamicMemoryExclusive.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140502BCC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x140512F88 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052EC78 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x140541460 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x14055087C (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x140554754 (MiFlushCacheRange.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1408C5C48 (MiConfigureMemoryRemoval.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // [rsp+48h] [rbp-39h] BYREF
  char *v26; // [rsp+50h] [rbp-31h] BYREF
  struct _KTHREAD *v27; // [rsp+58h] [rbp-29h]
  PVOID P[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v29[12]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v30; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+F8h] [rbp+77h]
  int v32; // [rsp+100h] [rbp+7Fh]

  v31 = a3;
  v30 = a2;
  DanglingExtent = BugCheckParameter2;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v27 = CurrentThread;
  v29[1] = 0LL;
  v6 = a3;
  v29[4] = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v32 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v30);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v30;
    goto LABEL_20;
  }
  v10 = v30;
  v29[0] = 0LL;
  v29[3] = v30;
  v29[2] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v26, (unsigned int *)MmPhysicalMemoryBlock, v29);
  if ( v8 < 0 )
  {
LABEL_30:
    v19 = v31;
    goto LABEL_31;
  }
  v7 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v11, v12);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_30;
  }
  for ( i = (unsigned int *)v7; ; i = v25 )
  {
    v14 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v15 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_40:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v25, i, v14);
    ExFreePoolWithTag(v14, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v32;
      goto LABEL_30;
    }
  }
  MiReduceCommitLimits(&MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)&MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v26, (__int64 *)&v25, 0);
  MiComputeNodeMemory(&MiSystemPartition, 1, v16, v17);
  v18 = -1;
  if ( qword_140C528D0 <= 0xFFFFFFFF )
    v18 = qword_140C528D0;
  MEMORY[0xFFFFF780000002E8] = v18;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2u);
  v5 = v32;
LABEL_20:
  v19 = v31;
  MiInitializeDynamicPfns(DanglingExtent, v10, (__int16 *)&MiSystemPartition, v31, 0LL, 0LL);
  qword_140C50E10 += v10;
  if ( (unsigned __int64)qword_140C50E10 >= 0x5555 && !byte_140C50E8C )
  {
    stru_140C50DF0.List.Flink = 0LL;
    stru_140C50DF0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_140C50DF0.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_140C50DF0, DelayedWorkQueue);
    byte_140C50E8C = 1;
  }
  if ( !v5 )
  {
    if ( (MiFlags & 0x10000000) != 0 && (MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C50F08, 0, 0);
    MiFlushEntireTbDueToAttributeChange();
    MiFlushCacheRange(DanglingExtent, v10);
  }
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v27);
  if ( v26 )
    ExFreePoolWithTag(v26 - 16, 0);
  if ( !v25 )
    goto LABEL_36;
  v23 = v25 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v23, 0);
LABEL_36:
    v23 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_40;
    v24 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_40;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v24 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v19 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges((__int64)v23, v20, v21, v22);
  return (unsigned int)v8;
}
