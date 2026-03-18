/*
 * XREFs of MiChargeSegmentCommit @ 0x1406B2AF0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x1406B27E0 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiMakeDemandZeroPte @ 0x1402AD380 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402D57DC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140303CE4 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1406B2D50 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 ControlAreaPartition; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // r9
  volatile signed __int64 *v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v24; // r12
  __int64 DemandZeroPte; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // rbx
  __int64 updated; // rax
  __int64 v29; // r8
  unsigned int *v30; // [rsp+20h] [rbp-88h]
  _QWORD *v31; // [rsp+28h] [rbp-80h]
  unsigned __int64 v33; // [rsp+38h] [rbp-70h]
  _QWORD *v34; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v36; // [rsp+50h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v39; // [rsp+C0h] [rbp+18h]
  __int64 v40; // [rsp+C8h] [rbp+20h]

  v37 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  v34 = (_QWORD *)*a1;
  v40 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v39 = ControlAreaPartition;
  v9 = a2;
  v31 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v30 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v37);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v37;
    }
    v21 = v15 + 1;
    if ( PteShadow )
      v21 = v15;
    ++v17;
    ++v9;
    v15 = v21;
    if ( v17 == a3 )
      break;
    if ( v9 == v11 )
    {
      v16 = *(_QWORD *)(v16 + 16);
      v37 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  v33 = v21;
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = (__int64)CurrentThread;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiChargeCommit(v39, v21, 0) )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
    {
LABEL_30:
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
LABEL_29:
    ExfTryToWakePushLock(v13);
    goto LABEL_30;
  }
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v37, v15) < 0 )
  {
    MiReturnCommit(v39, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v24 = a1;
  DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v40 + 14) >> 1) & 0x1F);
  v26 = *v31 + 8LL * *v30;
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
      goto LABEL_21;
    v27 = DemandZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (DemandZeroPte & 1) != 0 )
      {
        v27 = DemandZeroPte | 0x8000000000000000uLL;
      }
LABEL_20:
      *a2 = v27;
      goto LABEL_21;
    }
    if ( !HIBYTE(word_140C4DE88) && (DemandZeroPte & 1) != 0 )
      v27 = DemandZeroPte | 0x8000000000000000uLL;
    *a2 = v27;
    MiWritePteShadow((__int64)a2, v27, v29);
LABEL_21:
    ++v14;
    ++a2;
    if ( v14 == a3 )
      break;
    if ( a2 == (__int64 *)v26 )
    {
      v24 = (__int64 *)v24[2];
      a2 = (__int64 *)v24[1];
      v26 = (__int64)&a2[*((unsigned int *)v24 + 11)];
    }
  }
  MiUpdateProcessSharedCommit(v34, v33);
  updated = MiUpdateControlAreaCommitCount((__int64)v34, v33);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v39, 0, v33);
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v22 = (__int64)v36;
LABEL_14:
  KiLeaveGuardedRegionUnsafe(v22);
  return 1LL;
}
