/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1405FE430
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiSectionClose @ 0x1405FEC40 (MiSectionClose.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1406593D0 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MiIncludeSharedCommit @ 0x14024A650 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x14024A698 (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 **v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v17; // [rsp+78h] [rbp+10h]
  unsigned __int64 v18; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v18 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1)
      || (*(_DWORD *)(v7 + 56) & 0x20) != 0
      || (*(_DWORD *)(a2 + 2172) & 0x10) != 0 )
    {
      return;
    }
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *a1;
  v16 = *a1;
  v10 = (unsigned __int64 *)(*a1 + 72LL);
  v17 = v10;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 2352, 0LL);
    v9 = v16;
    v10 = v17;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
    v10 = v17;
  }
  v11 = (unsigned __int64 *)*v10;
  if ( *v10 )
  {
    do
    {
      if ( a2 > v11[3] )
      {
        v11 = (unsigned __int64 *)v11[1];
      }
      else
      {
        if ( a2 >= v11[3] )
          break;
        v11 = (unsigned __int64 *)*v11;
      }
    }
    while ( v11 );
  }
  if ( v11[4]-- == 1 )
  {
    RtlAvlRemoveNode(v10, v11);
    v13 = -MiGetCommittedPages(a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2344), v13);
      v14 = v11[5];
      if ( *(unsigned __int64 **)(v14 + 8) != v11 + 5 || (v15 = (unsigned __int64 **)v11[6], *v15 != v11 + 5) )
        __fastfail(3u);
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 2172) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 1296) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1336), v13);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 40));
    KeAbPostRelease(v16 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 2352));
    KeAbPostRelease(v6 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
