/*
 * XREFs of MiInsertSharedCommitNode @ 0x140702B30
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x1406F5BF4 (MmLinkJobProcess.c)
 *     MiSectionOpen @ 0x140702600 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140214350 (MmGetCurrentProcessorColor.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiIncludeSharedCommit @ 0x14031FC80 (MiIncludeSharedCommit.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
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
      ExfTryToWakePushLock(v25 + 40);
    KeAbPostRelease(v25 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 2352);
    KeAbPostRelease(v8 + 2352);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}
