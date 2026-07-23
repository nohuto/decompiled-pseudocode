/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x14067C848
 * Callers:
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 * Callees:
 *     MiContractPagingFiles @ 0x140273D28 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x140273DF8 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x140273E2C (MiDeletePxeSharedLocks.c)
 *     ExCleanupAutoExpandPushLock @ 0x140273E60 (ExCleanupAutoExpandPushLock.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140274018 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x14027444C (MiUnlinkWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1405DB0D0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteAweInfo @ 0x1408D5FA4 (MiDeleteAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // r9
  char *v4; // rbx
  LONG *SharedVm; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 ProcessPartition; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  PVOID *v11; // rcx
  void *v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rcx
  _QWORD *v16; // rax
  ULONG_PTR v17; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v20; // rax
  void *v21; // rcx

  v1 = BugCheckParameter2 + 1664;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v16 = *(_QWORD **)v4;
      v17 = 0LL;
      while ( v16 )
      {
        v17 = (ULONG_PTR)v16;
        v16 = (_QWORD *)*v16;
      }
      if ( !v17 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v17 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v17, 0LL, *(_QWORD *)(v17 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
        if ( !v21 )
          break;
        ExFreePoolWithTag(v21, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables(BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v7, 4LL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 392);
    if ( v10 )
      MiDeleteAweInfo(BugCheckParameter2, v10);
    ExCleanupAutoExpandPushLock(v9 + 408);
  }
  v11 = (PVOID *)*((_QWORD *)SharedVm + 5);
  if ( v11 )
  {
    MiEmptyPageAccessLog(v11);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v12 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2, -4LL, BugCheckParameter2, 0LL);
  MiReturnCommit(ProcessPartition, 4 - v6);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v13 = *(_QWORD *)(BugCheckParameter2 + 1368);
  if ( v13 )
    MiReleaseProcessReferenceToSessionDataPage(v13);
  v14 = *(void **)(BugCheckParameter2 + 2552);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return MiContractPagingFiles(ProcessPartition);
}
