/*
 * XREFs of MiChargeSegmentCommit @ 0x14060BEA0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x1406F5100 (MmCommitSessionMappedView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiUpdateControlAreaCommitCount @ 0x140263B7C (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140265AF0 (MiGetSubsectionCrossPartitionReferences.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x14060C100 (MiUpdateProcessSharedCommit.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r12
  __int64 DemandZeroPte; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  __int64 updated; // rax
  __int64 v32; // r8
  unsigned int *v33; // [rsp+20h] [rbp-88h]
  _QWORD *v34; // [rsp+28h] [rbp-80h]
  unsigned __int64 v36; // [rsp+38h] [rbp-70h]
  _QWORD *v37; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v39; // [rsp+50h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+B8h] [rbp+10h]
  __int64 v42; // [rsp+C0h] [rbp+18h]
  __int64 v43; // [rsp+C8h] [rbp+20h]

  v40 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v39 = CurrentThread;
  v37 = (_QWORD *)*a1;
  v43 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v42 = ControlAreaPartition;
  v9 = a2;
  v34 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v33 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v40);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v40;
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
      v40 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  v36 = v21;
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = (__int64)CurrentThread;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiChargeCommit(v42, v21, 0) )
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
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v40, v15) < 0 )
  {
    MiReturnCommit(v42, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v27 = a1;
  DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v43 + 14) >> 1) & 0x1F, v24, v25, v26);
  v29 = *v34 + 8LL * *v33;
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
    if ( !HIBYTE(word_140C4DE08) && (DemandZeroPte & 1) != 0 )
      v30 = DemandZeroPte | 0x8000000000000000uLL;
    *a2 = v30;
    MiWritePteShadow((__int64)a2, v30, v32);
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
  MiUpdateProcessSharedCommit(v37, v36);
  updated = MiUpdateControlAreaCommitCount((__int64)v37, v36);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v42, 0, v36);
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v22 = (__int64)v39;
LABEL_14:
  KiLeaveGuardedRegionUnsafe(v22);
  return 1LL;
}
