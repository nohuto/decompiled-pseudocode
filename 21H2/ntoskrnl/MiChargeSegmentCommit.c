/*
 * XREFs of MiChargeSegmentCommit @ 0x1406A4140
 * Callers:
 *     MiCommitPagefileBackedSection @ 0x1406A3E60 (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x1406A3F90 (MmCommitSessionMappedView.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetSubsectionCrossPartitionReferences @ 0x14022CF58 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026EC38 (MiUpdateControlAreaCommitCount.c)
 *     MiReadPteShadow @ 0x14027D890 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCharges @ 0x1405C4980 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1406A43A4 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 ControlAreaPartition; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // r9
  volatile signed __int64 *v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  __int64 v24; // rdx
  __int64 *v25; // r13
  __int64 DemandZeroPte; // rbx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 updated; // rax
  unsigned int *v30; // [rsp+20h] [rbp-78h]
  _QWORD *v31; // [rsp+28h] [rbp-70h]
  _QWORD *v33; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+A0h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h]
  __int64 v38; // [rsp+B8h] [rbp+20h]

  v35 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  v33 = (_QWORD *)*a1;
  v38 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v37 = ControlAreaPartition;
  v9 = a2;
  v31 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v30 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v35);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v35;
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
      v35 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v22
      || ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink == &CurrentThread->152 )
    {
      return 1LL;
    }
    goto LABEL_29;
  }
  if ( !(unsigned int)MiChargeCommit(v37, v21, 0) )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v22
      || ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink == &CurrentThread->152 )
    {
      return 0LL;
    }
    goto LABEL_40;
  }
  if ( !SubsectionCrossPartitionReferences || (int)MiGetSubsectionCharges(v35, v15) >= 0 )
  {
    v25 = a1;
    DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v38 + 14) >> 1) & 0x1F, v24);
    v27 = *v31 + 8LL * *v30;
    while ( 1 )
    {
      if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
        *a2 = DemandZeroPte;
      ++v14;
      ++a2;
      if ( v14 == a3 )
        break;
      if ( a2 == (__int64 *)v27 )
      {
        v25 = (__int64 *)v25[2];
        a2 = (__int64 *)v25[1];
        v27 = (__int64)&a2[*((unsigned int *)v25 + 11)];
      }
    }
    MiUpdateProcessSharedCommit(v33, v15);
    updated = MiUpdateControlAreaCommitCount((__int64)v33, v28);
    if ( SubsectionCrossPartitionReferences && !updated )
      MiReturnCrossPartitionSectionCharges(v37, 0, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    v22 = v34->SpecialApcDisable++ == -1;
    if ( !v22 || ($CEA84C04E3712D858E5667A507841A2A *)v34->ApcState.ApcListHead[0].Flink == &v34->152 )
      return 1LL;
LABEL_29:
    KiCheckForKernelApcDelivery();
    return 1LL;
  }
  MiReturnCommit(v37, v15);
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
LABEL_40:
    KiCheckForKernelApcDelivery();
  return 0LL;
}
