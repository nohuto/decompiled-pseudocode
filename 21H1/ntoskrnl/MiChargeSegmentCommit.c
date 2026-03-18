/*
 * XREFs of MiChargeSegmentCommit @ 0x140640FF0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x140640EBC (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x1406D2620 (MmCommitSessionMappedView.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiMakeDemandZeroPte @ 0x1402233A0 (MiMakeDemandZeroPte.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetControlAreaPartition @ 0x1402A46F4 (MiGetControlAreaPartition.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402BEB20 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCharges @ 0x14054F3D8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140641250 (MiUpdateProcessSharedCommit.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 *v27; // r12
  __int64 DemandZeroPte; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  __int64 updated; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int *v35; // [rsp+20h] [rbp-88h]
  _QWORD *v36; // [rsp+28h] [rbp-80h]
  unsigned __int64 v38; // [rsp+38h] [rbp-70h]
  _QWORD *v39; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+B8h] [rbp+10h]
  __int64 v44; // [rsp+C0h] [rbp+18h]
  __int64 v45; // [rsp+C8h] [rbp+20h]

  v42 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  v39 = (_QWORD *)*a1;
  v45 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v44 = ControlAreaPartition;
  v9 = a2;
  v36 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v35 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v42);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v42;
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
      v42 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  v38 = v21;
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v25 = (__int64)CurrentThread;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiChargeCommit(v44, v21, 0) )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
    {
LABEL_30:
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v32, v33, v34);
      return 0LL;
    }
LABEL_29:
    ExfTryToWakePushLock(v13);
    goto LABEL_30;
  }
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v42, v15) < 0 )
  {
    MiReturnCommit(v44, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v27 = a1;
  DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v45 + 14) >> 1) & 0x1F);
  v29 = *v36 + 8LL * *v35;
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
      goto LABEL_21;
    v30 = DemandZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (DemandZeroPte & 1) != 0 )
      {
        v30 = DemandZeroPte | 0x8000000000000000uLL;
      }
LABEL_20:
      *a2 = v30;
      goto LABEL_21;
    }
    if ( !HIBYTE(word_140C4DF48) && (DemandZeroPte & 1) != 0 )
      v30 = DemandZeroPte | 0x8000000000000000uLL;
    *a2 = v30;
    MiWritePteShadow((__int64)a2, v30);
LABEL_21:
    ++v14;
    ++a2;
    if ( v14 == a3 )
      break;
    if ( a2 == (__int64 *)v29 )
    {
      v27 = (__int64 *)v27[2];
      a2 = (__int64 *)v27[1];
      v29 = (__int64)&a2[*((unsigned int *)v27 + 11)];
    }
  }
  MiUpdateProcessSharedCommit(v39, v38);
  updated = MiUpdateControlAreaCommitCount((__int64)v39, v38);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v44, 0, v38);
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v25 = (__int64)v41;
LABEL_14:
  KiLeaveGuardedRegionUnsafe(v25, v22, v23, v24);
  return 1LL;
}
