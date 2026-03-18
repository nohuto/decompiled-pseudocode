/*
 * XREFs of MiInsertPagesInList @ 0x140338660
 * Callers:
 *     MiAddPageToInsertList @ 0x140276C78 (MiAddPageToInsertList.c)
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiEnqueuePageList @ 0x1403365F0 (MiEnqueuePageList.c)
 * Callees:
 *     MiExclusiveInsertPfnChainInList @ 0x14022DBD4 (MiExclusiveInsertPfnChainInList.c)
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiRebuildStandbyLookasideList @ 0x1402E8BCC (MiRebuildStandbyLookasideList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIncreaseAvailablePages @ 0x140338BF0 (MiIncreaseAvailablePages.c)
 *     MiReleasePageListLock @ 0x140338D00 (MiReleasePageListLock.c)
 *     MiSharedInsertPfnChainInList @ 0x140338DB0 (MiSharedInsertPfnChainInList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiInsertPagesInList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  char v8; // al
  __int64 v9; // r13
  BOOL v10; // ebp
  char v11; // si
  __int64 v12; // rax
  unsigned int v13; // r14d
  volatile signed __int64 *v14; // rax
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  char v23; // r8
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r10
  unsigned __int64 v28; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v31; // zf
  signed __int32 v32; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  signed __int32 v36[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v37; // [rsp+30h] [rbp-D8h]
  int v38; // [rsp+34h] [rbp-D4h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+40h] [rbp-C8h]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  _BYTE v42[112]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return;
  v41 = *(_QWORD *)(a1 + 88);
  v5 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v6 = *(_QWORD *)(v5 + 40);
  v7 = *(_QWORD *)(qword_140C51F48 + 8 * ((v6 >> 43) & 0x3FF));
  v8 = *(_BYTE *)(v5 + 35);
  v39 = v7;
  if ( (v8 & 8) != 0 )
    v9 = 5LL;
  else
    v9 = v8 & 7;
  v10 = (v6 & 0x20000000000000LL) != 0;
  v11 = *(_BYTE *)(v5 + 34) & 0x10;
  if ( v11 )
    v12 = v7 + 17280;
  else
    v12 = v7 + 2752;
  v40 = v12;
  if ( (v6 & 0x20000000000000LL) != 0 )
  {
    v13 = 0;
  }
  else
  {
    _InterlockedOr(v36, 0);
    v13 = KiTbFlushTimeStamp;
    if ( !v11 )
    {
      MiIncreaseAvailablePages(v7, v2);
      v7 = v39;
      v38 = *(_DWORD *)(a1 + 96);
      goto LABEL_9;
    }
  }
  v15 = *(_DWORD *)(a1 + 96);
  v38 = v15;
  if ( !v11 && (v6 & 0x20000000000000LL) != 0 )
    goto LABEL_13;
LABEL_9:
  if ( *(__int64 *)(v5 + 40) >= 0 )
    v14 = (volatile signed __int64 *)(v7 + 15808);
  else
    v14 = (volatile signed __int64 *)(v7 + 6784);
  _InterlockedExchangeAdd64(v14, v2);
  if ( !v11 )
  {
    v15 = v38;
LABEL_13:
    v16 = 0;
    goto LABEL_14;
  }
  v16 = *(_DWORD *)(*(_QWORD *)(v7 + 16600) + 24LL);
  v15 = v38;
LABEL_14:
  v37 = v16;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_16;
    MiReturnCommit(v7, v2);
    v27 = v39;
    v28 = v2;
    if ( (ULONG_PTR *)v39 != &MiSystemPartition )
      goto LABEL_63;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_63;
    if ( v2 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v2 >= 0x80000 )
          break;
        v32 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v2 + CachedResidentAvailable,
                CachedResidentAvailable);
        v31 = (_DWORD)CachedResidentAvailable == v32;
        LODWORD(CachedResidentAvailable) = v32;
        if ( v31 )
          goto LABEL_41;
      }
      while ( v32 != -1 && v2 + v32 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v28 = v2 + (int)CachedResidentAvailable - 192;
    }
    if ( v28 )
LABEL_63:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 16960), v28);
  }
  else
  {
    v5 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
    MiMakeProtoTransition((_QWORD *)v5, v2);
  }
LABEL_41:
  LOBYTE(v16) = v37;
LABEL_16:
  v17 = *(_QWORD *)(a1 + 16);
  while ( v17 != 0x3FFFFFFFFFLL )
  {
    v5 = 48 * v17 - 0x220000000000LL;
    v17 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    if ( !v10 )
      *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ ((unsigned __int64)v13 << 59)) & 0x3800000000000000LL;
    v18 = *(_BYTE *)(v5 + 34);
    if ( v11 )
    {
      *(_BYTE *)(v5 + 34) = v18 & 0xF8 | 3;
      *(_BYTE *)(v5 + 36) ^= (*(_BYTE *)(v5 + 36) ^ v16) & 0xF;
    }
    else
    {
      *(_BYTE *)(v5 + 34) = v18 & 0xF8 | 2;
    }
  }
  memset(v42, 0, 0x68uLL);
  if ( v11 )
  {
    v21 = v39;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 17280), v2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)&CurrentThread->ApcState.Process[1].Spare2[7] += v2;
    v22 = 88LL * v37 + v21 + 5120;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
LABEL_56:
    MiExclusiveInsertPfnChainInList(a1, v22);
    goto LABEL_28;
  }
  if ( v10 )
  {
    v22 = v40;
    v23 = 0;
    v21 = v39;
    goto LABEL_29;
  }
  v19 = v41;
  if ( v41 )
    v9 = 5LL;
  v20 = 88 * v9;
  v21 = v39;
  v22 = v20 + v39 + 2880;
  MiSynchronizeFastPageInsert(v39, v22, v5, v41, (__int64)v42);
  if ( !v42[0] )
  {
    if ( v19 )
    {
      if ( (*(_BYTE *)(v19 + 35) & 8) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
        *(_QWORD *)(a1 + 88) = 0LL;
        v34 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
        v21 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL));
        v22 = v21 + 88LL * (unsigned int)MiGetPfnPriority(v34) + 2880;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
        MiExclusiveInsertPfnChainInList(a1, v22);
        goto LABEL_28;
      }
    }
    else if ( v42[2] != 3 )
    {
      MiRebuildStandbyLookasideList(v5, v42[2], v42[1]);
      MiExclusiveInsertPfnChainInList(a1, v22);
      goto LABEL_28;
    }
    goto LABEL_56;
  }
  MiSharedInsertPfnChainInList(a1, v42);
LABEL_28:
  _InterlockedExchangeAdd64((volatile signed __int64 *)v22, v2);
  v23 = 1;
LABEL_29:
  v24 = v38;
  if ( v38 != 3 )
  {
    v25 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v26 = 48 * v25 - 0x220000000000LL;
      v25 = *(_QWORD *)v26 & 0xFFFFFFFFFFLL;
      if ( !a2 && v2 == 1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v2 )
        goto LABEL_34;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_34:
  if ( v23 )
  {
    if ( v42[0] )
    {
      MiReleasePageListLock(v22, v42);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 32));
      if ( v24 != 3 && !(unsigned int)MiSufficientAvailablePages(v21, 0x420uLL) )
      {
        v35 = *(_QWORD *)(v21 + 17504);
        if ( v35 >= 0x10 )
          MiWakeModifiedPageWriter(v21, -1LL);
        if ( *(_QWORD *)(v21 + 17280) - v35 >= 0x10 )
          KeSetEvent((PRKEVENT)(v21 + 816), 0, 0);
      }
    }
  }
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0x3FFFFFFFFFLL;
}
