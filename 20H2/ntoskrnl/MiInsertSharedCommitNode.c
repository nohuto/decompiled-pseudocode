/*
 * XREFs of MiInsertSharedCommitNode @ 0x140624010
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiSectionOpen @ 0x140624580 (MiSectionOpen.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x14062D970 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAllocatePoolMm @ 0x14022D3E0 (ExAllocatePoolMm.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x14022E8F0 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x14022E938 (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmGetCurrentProcessorColor @ 0x1403001F0 (MmGetCurrentProcessorColor.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
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
  _QWORD *v22; // rax
  SIZE_T v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  unsigned __int64 *v26; // [rsp+40h] [rbp-38h]

  if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1) || (v6[7] & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    if ( (*(_DWORD *)(a2 + 2172) & 0x10) == 0 )
    {
      v24 = 0LL;
      v23 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v23 = 40LL;
  v8 = 0LL;
  v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_6:
  v9 = *v6;
  CurrentThread = KeGetCurrentThread();
  v11 = (_QWORD **)(v9 + 72);
  v26 = (unsigned __int64 *)(v9 + 72);
  v25 = v9;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 2352, 0LL);
    v9 = v25;
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
    v22 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_11;
LABEL_32:
    v12 = v22;
  }
  v22 = (_QWORD *)v12[1];
  if ( v22 )
    goto LABEL_32;
  v13 = 1;
LABEL_11:
  LOWORD(v14) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256, v23, 0x6E53694Du, v14 | 0x80000000);
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
      v20 = (volatile signed __int64 *)(v24 + 1336);
    }
    _InterlockedExchangeAdd64(v20, CommittedPages);
    RtlAvlInsertNodeEx(v26, (unsigned __int64)v12, v13, v17);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 40));
    KeAbPostRelease(v25 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 2352));
    KeAbPostRelease(v8 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}
