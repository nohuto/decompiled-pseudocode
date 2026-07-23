/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1407028C0
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1406F5BF4 (MmLinkJobProcess.c)
 *     MiSectionClose @ 0x1407025D0 (MiSectionClose.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiIncludeSharedCommit @ 0x14031FC80 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
      ExfTryToWakePushLock(v16 + 40);
    KeAbPostRelease(v16 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 2352);
    KeAbPostRelease(v6 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
