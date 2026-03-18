/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x14066299C
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiContractPagingFiles @ 0x1402D4CA0 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x1402D4D70 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x1402D4DA4 (MiDeletePxeSharedLocks.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402D4DE0 (ExCleanupAutoExpandPushLock.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1402D4F98 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x1402D53DC (MiUnlinkWorkingSet.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B4DD0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E2D20 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteAweInfo @ 0x1408D14F4 (MiDeleteAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // r9
  char *v4; // rbx
  LONG *SharedVm; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 ProcessPartition; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  PVOID *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  _QWORD *v18; // rax
  ULONG_PTR v19; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v22; // rax
  void *v23; // rcx

  v1 = BugCheckParameter2 + 1664;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1664, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1280);
  v4 = *(char **)(BugCheckParameter2 + 1544);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v18 = *(_QWORD **)v4;
      v19 = 0LL;
      while ( v18 )
      {
        v19 = (ULONG_PTR)v18;
        v18 = (_QWORD *)*v18;
      }
      if ( !v19 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v19 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v19, 0LL, *(_QWORD *)(v19 + 24), *(_QWORD *)(BugCheckParameter2 + 1280));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1544));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1544); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v23 = v22;
          v22 = (_QWORD *)*v22;
        }
        while ( v22 );
        if ( !v23 )
          break;
        ExFreePoolWithTag(v23, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v9 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2, v6, v7, v8);
  PsReturnProcessQuota(BugCheckParameter2, v10, 4uLL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v12 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 392);
    if ( v13 )
      MiDeleteAweInfo(BugCheckParameter2, v13);
    ExCleanupAutoExpandPushLock(v12 + 408);
  }
  v14 = (PVOID *)*((_QWORD *)SharedVm + 5);
  if ( v14 )
  {
    MiEmptyPageAccessLog(v14);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v15 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter2);
  MiReturnCommit(ProcessPartition, 4 - v9);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  if ( *(_QWORD *)(BugCheckParameter2 + 1368) )
    MiReleaseProcessReferenceToSessionDataPage();
  v16 = *(void **)(BugCheckParameter2 + 2552);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return MiContractPagingFiles(ProcessPartition);
}
