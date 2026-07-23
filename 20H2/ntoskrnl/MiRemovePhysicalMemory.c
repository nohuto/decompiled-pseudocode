/*
 * XREFs of MiRemovePhysicalMemory @ 0x1408C87CC
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053EC80 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1408C8BB0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C92A0 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1408DDD8C (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402636E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140263AA0 (MiLockDynamicMemoryExclusive.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     MiDereferencePageRuns @ 0x14037E940 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403AB018 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405010CC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x140511208 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052CF38 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x14053F720 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x14054EB6C (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x140552A44 (MiFlushCacheRange.c)
 *     MiComputeNodeMemory @ 0x1407C8DE0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1408C8328 (MiConfigureMemoryRemoval.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int *v24; // rcx
  __int64 v25; // rax
  unsigned int *v26; // [rsp+48h] [rbp-39h] BYREF
  char *v27; // [rsp+50h] [rbp-31h] BYREF
  struct _KTHREAD *v28; // [rsp+58h] [rbp-29h]
  PVOID P[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v30[12]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v31; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v32; // [rsp+F8h] [rbp+77h]
  int v33; // [rsp+100h] [rbp+7Fh]

  v32 = a3;
  v31 = a2;
  DanglingExtent = BugCheckParameter2;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v28 = CurrentThread;
  v30[1] = 0LL;
  v6 = a3;
  v30[4] = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v33 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v31);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v31;
    goto LABEL_20;
  }
  v10 = v31;
  v30[0] = 0LL;
  v30[3] = v31;
  v30[2] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v27, (unsigned int *)MmPhysicalMemoryBlock, v30);
  if ( v8 < 0 )
  {
LABEL_30:
    v19 = v32;
    goto LABEL_31;
  }
  v7 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v11, v12);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_30;
  }
  for ( i = (unsigned int *)v7; ; i = v26 )
  {
    v14 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v15 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_40:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v26, i, v14);
    ExFreePoolWithTag(v14, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v33;
      goto LABEL_30;
    }
  }
  MiReduceCommitLimits(&MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)&MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v27, (__int64 *)&v26, 0);
  MiComputeNodeMemory(&MiSystemPartition, 1, v16, v17);
  v18 = -1;
  if ( qword_140C52710 <= 0xFFFFFFFF )
    v18 = qword_140C52710;
  MEMORY[0xFFFFF780000002E8] = v18;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2u);
  v5 = v33;
LABEL_20:
  v19 = v32;
  MiInitializeDynamicPfns(DanglingExtent, v10, (__int16 *)&MiSystemPartition, v32, 0LL, 0LL);
  qword_140C50C50 += v10;
  if ( (unsigned __int64)qword_140C50C50 >= 0x5555 && !byte_140C50CCC )
  {
    stru_140C50C30.List.Flink = 0LL;
    stru_140C50C30.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_140C50C30.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_140C50C30, DelayedWorkQueue);
    byte_140C50CCC = 1;
  }
  if ( !v5 )
  {
    if ( (MiFlags & 0x10000000) != 0 && (MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C50D48, 0, 0);
    MiFlushEntireTbDueToAttributeChange(v21, v20, v22, v23);
    MiFlushCacheRange(DanglingExtent, v10);
  }
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v28);
  if ( v27 )
    ExFreePoolWithTag(v27 - 16, 0);
  if ( !v26 )
    goto LABEL_36;
  v24 = v26 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v24, 0);
LABEL_36:
    v24 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_40;
    v25 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_40;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v25 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v19 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v8;
}
