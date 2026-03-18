/*
 * XREFs of MiInsertSharedCommitNode @ 0x1406FC590
 * Callers:
 *     MmLinkJobProcess @ 0x1406825AC (MmLinkJobProcess.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiSectionOpen @ 0x1406FC2C0 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     MiIncludeSharedCommit @ 0x140287930 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x140287C30 (MiGetCommittedPages.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rdx
  __int64 *v7; // rcx
  int inserted; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD **v12; // rbx
  _QWORD *v13; // rbx
  bool v14; // r14
  int v15; // eax
  _QWORD *PoolMm; // rax
  unsigned __int64 CommittedPages; // r8
  _QWORD *v18; // r9
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v22; // rax
  bool v23; // zf
  SIZE_T v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]

  if ( !MiIncludeSharedCommit((__int64)a1) || (v7[7] & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v9 = v6;
    if ( (*(_DWORD *)(v6 + 2172) & 0x10) == 0 )
    {
      v25 = 0LL;
      v24 = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v24 = 40LL;
  v25 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 0LL;
LABEL_6:
  v10 = *v7;
  CurrentThread = KeGetCurrentThread();
  v12 = (_QWORD **)(v10 + 72);
  v26 = (unsigned __int64 *)(v10 + 72);
  v27 = v10;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 2352, 0LL);
    v10 = v27;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
  }
  v13 = *v12;
  v14 = 0;
  if ( !v13 )
    goto LABEL_11;
  while ( a2 <= v13[3] )
  {
    if ( a2 >= v13[3] )
    {
      ++v13[4];
      goto LABEL_23;
    }
    v22 = (_QWORD *)*v13;
    if ( !*v13 )
      goto LABEL_11;
LABEL_20:
    v13 = v22;
  }
  v22 = (_QWORD *)v13[1];
  if ( v22 )
    goto LABEL_20;
  v14 = 1;
LABEL_11:
  LOWORD(v15) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, v24, 0x6E53694Du, v15 | 0x80000000);
  if ( PoolMm )
  {
    PoolMm[4] = 1LL;
    PoolMm[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v9 )
    {
      v18[7] = a1;
      v19 = *(_QWORD **)(v9 + 2368);
      v20 = v18 + 5;
      if ( *v19 != v9 + 2360 )
        __fastfail(3u);
      *v20 = v9 + 2360;
      v18[6] = v19;
      *v19 = v20;
      *(_QWORD *)(v9 + 2368) = v20;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 2344), CommittedPages);
      RtlAvlInsertNodeEx(v26, (unsigned __int64)v13, v14, v18);
      if ( (*(_DWORD *)(v9 + 2172) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v9 + 1296) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v9, a3 | 7);
      }
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 1528), CommittedPages);
      RtlAvlInsertNodeEx(v26, (unsigned __int64)v13, v14, v18);
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_23:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27 + 40);
    KeAbPostRelease(v27 + 40);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 2352);
    KeAbPostRelease(v9 + 2352);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)inserted;
}
