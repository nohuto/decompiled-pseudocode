/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x14061D27C
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     MiContractPagingFiles @ 0x14026B300 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x14026B3D0 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x14026B404 (MiDeletePxeSharedLocks.c)
 *     ExCleanupAutoExpandPushLock @ 0x14026B440 (ExCleanupAutoExpandPushLock.c)
 *     MiReturnResident @ 0x14026B55C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x14026B5F8 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x14026B62C (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x14026BA3C (MiUnlinkWorkingSet.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406D3450 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteAweInfo @ 0x1408D2844 (MiDeleteAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  void *v13; // rcx
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v19; // rax
  void *v20; // rcx

  v1 = BugCheckParameter2 + 1664;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v15 = *(_QWORD **)v4;
      v16 = 0LL;
      while ( v15 )
      {
        v16 = (ULONG_PTR)v15;
        v15 = (_QWORD *)*v15;
      }
      if ( !v16 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v16 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v16, 0LL, *(_QWORD *)(v16 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v20 = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
        if ( !v20 )
          break;
        ExFreePoolWithTag(v20, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2);
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
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter2);
  MiReturnCommit(ProcessPartition, 4 - v6);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  if ( *(_QWORD *)(BugCheckParameter2 + 1368) )
    MiReleaseProcessReferenceToSessionDataPage();
  v13 = *(void **)(BugCheckParameter2 + 2552);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return MiContractPagingFiles(ProcessPartition);
}
