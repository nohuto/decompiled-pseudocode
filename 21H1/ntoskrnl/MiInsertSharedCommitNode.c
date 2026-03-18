/*
 * XREFs of MiInsertSharedCommitNode @ 0x1406336E0
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiSectionOpen @ 0x140633C50 (MiSectionOpen.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1406722C4 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExAllocatePoolMm @ 0x1402A1070 (ExAllocatePoolMm.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x1402A3680 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x1402A36C8 (MiGetCommittedPages.c)
 *     MmGetCurrentProcessorColor @ 0x1402EFAD0 (MmGetCurrentProcessorColor.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 *v6; // rcx
  int inserted; // r13d
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _QWORD **v11; // rbx
  _QWORD *v12; // rbx
  bool v13; // bp
  int v14; // eax
  _QWORD *PoolMm; // rax
  unsigned __int64 CommittedPages; // r8
  _QWORD *v17; // r9
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  volatile signed __int64 *v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  SIZE_T v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned __int64 *v32; // [rsp+40h] [rbp-38h]

  if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1) || (v6[7] & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    if ( (*(_DWORD *)(a2 + 2172) & 0x10) == 0 )
    {
      v30 = 0LL;
      v29 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v29 = 40LL;
  v8 = 0LL;
  v30 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_6:
  v9 = *v6;
  CurrentThread = KeGetCurrentThread();
  v11 = (_QWORD **)(v9 + 72);
  v32 = (unsigned __int64 *)(v9 + 72);
  v31 = v9;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 2352, 0LL);
    v9 = v31;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
  }
  v12 = *v11;
  v13 = 0;
  if ( !v12 )
    goto LABEL_11;
  while ( a2 <= v12[3] )
  {
    if ( a2 >= v12[3] )
    {
      ++v12[4];
      goto LABEL_21;
    }
    v28 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_11;
LABEL_32:
    v12 = v28;
  }
  v28 = (_QWORD *)v12[1];
  if ( v28 )
    goto LABEL_32;
  v13 = 1;
LABEL_11:
  LOWORD(v14) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256, v29, 0x6E53694Du, v14 | 0x80000000);
  if ( PoolMm )
  {
    PoolMm[4] = 1LL;
    PoolMm[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v8 )
    {
      v17[7] = a1;
      v18 = *(_QWORD **)(v8 + 2368);
      v19 = v17 + 5;
      if ( *v18 != v8 + 2360 )
        __fastfail(3u);
      *v19 = v8 + 2360;
      v17[6] = v18;
      *v18 = v19;
      *(_QWORD *)(v8 + 2368) = v19;
      v20 = (volatile signed __int64 *)(v8 + 2344);
    }
    else
    {
      v20 = (volatile signed __int64 *)(v30 + 1336);
    }
    _InterlockedExchangeAdd64(v20, CommittedPages);
    RtlAvlInsertNodeEx(v32, (unsigned __int64)v12, v13, v17);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 2172) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v8 + 1296) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v8, a3 | 7);
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_21:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v31 + 40);
    KeAbPostRelease(v31 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v22, v23, v24);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 2352);
    KeAbPostRelease(v8 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v25, v26, v27);
  }
  return (unsigned int)inserted;
}
