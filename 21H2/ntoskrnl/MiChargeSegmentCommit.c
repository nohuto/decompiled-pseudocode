/*
 * XREFs of MiChargeSegmentCommit @ 0x140689B40
 * Callers:
 *     MiCommitPagefileBackedSection @ 0x1405FAC44 (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x140602E80 (MmCommitSessionMappedView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402360D0 (MiUpdateControlAreaCommitCount.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x14027DC34 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSubsectionCharges @ 0x140555108 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1405FC004 (MiUpdateProcessSharedCommit.c)
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
  unsigned int *v29; // [rsp+20h] [rbp-88h]
  _QWORD *v30; // [rsp+28h] [rbp-80h]
  unsigned __int64 v32; // [rsp+38h] [rbp-70h]
  _QWORD *v33; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+B8h] [rbp+10h]
  __int64 v38; // [rsp+C0h] [rbp+18h]
  __int64 v39; // [rsp+C8h] [rbp+20h]

  v36 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v33 = (_QWORD *)*a1;
  v39 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v38 = ControlAreaPartition;
  v9 = a2;
  v30 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v29 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v36);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v36;
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
      v36 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  v32 = v21;
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = (__int64)CurrentThread;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiChargeCommit(v38, v21, 0) )
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
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v36, v15) < 0 )
  {
    MiReturnCommit(v38, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v24 = a1;
  DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v39 + 14) >> 1) & 0x1F);
  v26 = *v30 + 8LL * *v29;
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
    if ( !HIBYTE(word_140C4E048) && (DemandZeroPte & 1) != 0 )
      v27 = DemandZeroPte | 0x8000000000000000uLL;
    *a2 = v27;
    MiWritePteShadow((__int64)a2, v27);
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
  MiUpdateProcessSharedCommit((__int64)v33);
  updated = MiUpdateControlAreaCommitCount((__int64)v33, v32);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v38, 0, v32);
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v22 = (__int64)v35;
LABEL_14:
  KiLeaveGuardedRegionUnsafe(v22);
  return 1LL;
}
