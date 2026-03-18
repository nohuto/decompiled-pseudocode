/*
 * XREFs of MiRemoveSharedCommitNode @ 0x140633470
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiSectionClose @ 0x140633C80 (MiSectionClose.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1406722C4 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiIncludeSharedCommit @ 0x1402A3680 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x1402A36C8 (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 **v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v23; // [rsp+78h] [rbp+10h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
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
    v24 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *a1;
  v22 = *a1;
  v10 = (unsigned __int64 *)(*a1 + 72LL);
  v23 = v10;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 2352, 0LL);
    v9 = v22;
    v10 = v23;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
    v10 = v23;
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
    v19 = -MiGetCommittedPages(a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2344), v19);
      v20 = v11[5];
      if ( *(unsigned __int64 **)(v20 + 8) != v11 + 5 || (v21 = (unsigned __int64 **)v11[6], *v21 != v11 + 5) )
        __fastfail(3u);
      *v21 = (unsigned __int64 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 2172) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 1296) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 1336), v19);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22 + 40);
    KeAbPostRelease(v22 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 2352);
    KeAbPostRelease(v6 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
