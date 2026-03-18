/*
 * XREFs of PsBoostThreadIoEx @ 0x14020A940
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     PsBoostThreadIo @ 0x14020A920 (PsBoostThreadIo.c)
 *     FsRtlReleaseEofLock @ 0x140273750 (FsRtlReleaseEofLock.c)
 *     ExReinitializeResourceLite @ 0x140278850 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x140279C0C (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     ExpFreeOwnerEntry @ 0x1402C3DC0 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x1402C3E70 (ExDeleteResourceLite.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402C56BC (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403216F0 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140327860 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsLeavePriorityRegion @ 0x140327B80 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x1403287D0 (PsEnterPriorityRegion.c)
 *     KiAbThreadBoostIoPriority @ 0x14032A874 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14035E600 (KiAbThreadUnboostIoPriority.c)
 *     FsRtlpModifyThreadPriorities @ 0x140377CE4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140377DA8 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1405004E0 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405AFE30 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1405AFF00 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1403565EC (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // bp
  PVOID *v10; // r12
  bool v11; // zf
  unsigned __int8 v12; // bl
  struct _KPRCB *v13; // rdi
  PVOID *PoolWithTag; // rax
  __int64 **v15; // r15
  __int64 *v16; // rcx
  __int64 **v17; // r15
  __int64 *v18; // rcx
  __int64 v19; // rax
  PVOID **v20; // rcx
  __int64 v21; // rax
  PVOID **v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  _DWORD *v27; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v10 + 2, 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = a4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1408));
LABEL_3:
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1360) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1360));
      if ( !v7 )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 1360) )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x736F6F42u);
        v15 = (__int64 **)(a1 + 1376);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v19 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v19 + 8) != v16 )
            goto LABEL_39;
          *v15 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
        v17 = (__int64 **)(a1 + 1392);
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 == (__int64 *)v17 )
            goto LABEL_29;
          v21 = *v18;
          if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v21 + 8) != v18 )
            goto LABEL_39;
          *v17 = (__int64 *)v21;
          *(_QWORD *)(v21 + 8) = v17;
          ExFreePoolWithTag(v18, 0x736F6F42u);
        }
      }
      if ( v10 )
      {
        v22 = *(PVOID ***)(a1 + 1400);
        if ( *v22 == (PVOID *)(a1 + 1392) )
        {
          *v10 = (PVOID)(a1 + 1392);
          v10[1] = v22;
          *v22 = v10;
          *(_QWORD *)(a1 + 1400) = v10;
          goto LABEL_29;
        }
LABEL_39:
        __fastfail(3u);
      }
    }
  }
  else
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1360));
    if ( !v7 )
      goto LABEL_13;
    if ( !v10 )
      goto LABEL_29;
    v20 = *(PVOID ***)(a1 + 1384);
    if ( *v20 != (PVOID *)(a1 + 1376) )
      goto LABEL_39;
    *v10 = (PVOID)(a1 + 1376);
    v10[1] = v20;
    *v20 = v10;
    *(_QWORD *)(a1 + 1384) = v10;
  }
LABEL_29:
  if ( v7 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1408));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
LABEL_6:
  if ( !a2 )
  {
LABEL_13:
    v11 = v4 == 1;
    goto LABEL_8;
  }
  v11 = v4 == 0;
LABEL_8:
  if ( v11 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      v27 = KeGetCurrentPrcb()->SchedulerAssist;
      v27[5] |= (-1 << (v12 + 1)) & 4;
    }
    v13 = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v13->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(v13);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v12 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v11 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v12);
  }
}
