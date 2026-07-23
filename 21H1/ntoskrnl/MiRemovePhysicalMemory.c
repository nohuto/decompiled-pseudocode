/*
 * XREFs of MiRemovePhysicalMemory @ 0x1408C163C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053AC60 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1408C1A20 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C2110 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1408D6BFC (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402D4B48 (MiLockDynamicMemoryExclusive.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     KePulseEvent @ 0x1402F6B10 (KePulseEvent.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiDereferencePageRuns @ 0x14037BE90 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403AEA48 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1404FD1AC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14050D288 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140528F18 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x14053B700 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x14054AB4C (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x14054EA24 (MiFlushCacheRange.c)
 *     MiComputeNodeMemory @ 0x1407B73E0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1408C1198 (MiConfigureMemoryRemoval.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int *v25; // rcx
  __int64 v26; // rax
  unsigned int *v27; // [rsp+48h] [rbp-39h] BYREF
  char *v28; // [rsp+50h] [rbp-31h] BYREF
  struct _KTHREAD *v29; // [rsp+58h] [rbp-29h]
  PVOID P[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v31[12]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v32; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+F8h] [rbp+77h]
  int v34; // [rsp+100h] [rbp+7Fh]

  v33 = a3;
  v32 = a2;
  DanglingExtent = BugCheckParameter2;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v29 = CurrentThread;
  v31[1] = 0LL;
  v6 = a3;
  v31[4] = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v34 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v32);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v32;
    goto LABEL_20;
  }
  v10 = v32;
  v31[0] = 0LL;
  v31[3] = v32;
  v31[2] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v28, (unsigned int *)MmPhysicalMemoryBlock, v31);
  if ( v8 < 0 )
  {
LABEL_30:
    v19 = v33;
    goto LABEL_31;
  }
  v7 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v11, v12);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_30;
  }
  for ( i = (unsigned int *)v7; ; i = v27 )
  {
    v14 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v15 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_40:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v27, i, v14);
    ExFreePoolWithTag(v14, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v34;
      goto LABEL_30;
    }
  }
  MiReduceCommitLimits(&MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)&MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v28, (__int64 *)&v27, 0);
  MiComputeNodeMemory(&MiSystemPartition, 1, v16, v17);
  v18 = -1;
  if ( qword_140C52790 <= 0xFFFFFFFF )
    v18 = qword_140C52790;
  MEMORY[0xFFFFF780000002E8] = v18;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2u);
  v5 = v34;
LABEL_20:
  v19 = v33;
  MiInitializeDynamicPfns(DanglingExtent, v10, (__int16 *)&MiSystemPartition, v33, 0LL, 0LL);
  qword_140C50CD0 += v10;
  if ( (unsigned __int64)qword_140C50CD0 >= 0x5555 && !byte_140C50D4C )
  {
    stru_140C50CB0.List.Flink = 0LL;
    stru_140C50CB0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_140C50CB0.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_140C50CB0, DelayedWorkQueue);
    byte_140C50D4C = 1;
  }
  if ( !v5 )
  {
    if ( (MiFlags & 0x10000000) != 0 && (MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C50DC8, 0, 0);
    MiFlushEntireTbDueToAttributeChange();
    MiFlushCacheRange(DanglingExtent, v10, v20, v21);
  }
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v29);
  if ( v28 )
    ExFreePoolWithTag(v28 - 16, 0);
  if ( !v27 )
    goto LABEL_36;
  v25 = v27 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v25, 0);
LABEL_36:
    v25 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_40;
    v26 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_40;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v26 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v19 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges((__int64)v25, v22, v23, v24);
  return (unsigned int)v8;
}
