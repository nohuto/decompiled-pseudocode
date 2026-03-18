/*
 * XREFs of CcUnpinFileDataEx @ 0x1402C3400
 * Callers:
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402C2EB8 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402C2FD0 (CcGetDirtyPagesHelper.c)
 *     CcMapDataForOverwrite @ 0x14033C3B8 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 *     CcMapData @ 0x1405FCDD0 (CcMapData.c)
 *     CcUnpinData @ 0x140697550 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x140864250 (CcUnpinDataForThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     CcDeductDirtyPages @ 0x1402BE9CC (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpFreeOwnerEntry @ 0x1402C3DC0 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x1402C3E30 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402C5368 (CcAdjustVacbLevelLockCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14033BD8C (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExpFastResourceLegacyRelease @ 0x14038BA8C (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038D470 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A5A9C (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3, _DWORD *SchedulerAssist)
{
  ULONG_PTR v4; // rdi
  __int64 v7; // rdi
  struct _KEVENT *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR *v16; // r15
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // r12
  int SessionId; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  unsigned __int8 v28; // r15
  int v29; // eax
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rdi
  __int16 v33; // cx
  char *v34; // rsi
  __int16 v35; // cx
  ULONG_PTR v36; // r14
  unsigned __int8 v37; // r10
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  _QWORD *v40; // rdx
  struct _KTHREAD *v41; // r8
  __int16 v42; // cx
  bool v43; // r12
  unsigned int v44; // ecx
  __int64 v45; // rax
  char *v46; // rdx
  unsigned int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  bool v51; // cc
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  __int64 Next; // rax
  struct _KPRCB *v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  char v59; // r15
  unsigned int v60; // r14d
  unsigned int v61; // r14d
  unsigned int v62; // edi
  unsigned __int64 v63; // rdi
  signed __int32 v64; // eax
  struct _KEVENT *v65; // rcx
  __int64 v66; // r12
  unsigned int v67; // edi
  unsigned int v68; // eax
  unsigned __int64 OldIrql; // rdi
  char **v70; // rdx
  PVOID *v71; // rcx
  _DWORD *v72; // rcx
  unsigned __int8 v73; // al
  struct _KTHREAD *v74; // rdx
  __int64 v75; // rdi
  struct _KEVENT *v76; // rcx
  unsigned __int64 v77; // r8
  char *v78; // r10
  __int64 v79; // rax
  ULONG_PTR v80; // r9
  unsigned __int64 v81; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v83; // eax
  int v84; // eax
  unsigned __int32 v85; // eax
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  _DWORD *v95; // r9
  int v96; // eax
  unsigned __int64 v97; // r15
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  __int64 v102; // rax
  int v103; // eax
  int v104; // eax
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r10
  _DWORD *v107; // r9
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 **v111; // rcx
  __int64 *v112; // rax
  __int64 *v113; // rdx
  __int64 v114; // rax
  __int64 **v115; // rcx
  char v116; // al
  unsigned __int8 v117; // cl
  _DWORD *v118; // r9
  __int64 v119; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v121; // rdx
  __int64 v122; // r9
  volatile signed __int32 *v123; // r10
  volatile signed __int32 *v124; // rcx
  char v125; // al
  __int64 *v126; // rax
  char v127; // al
  __int64 v128; // r9
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r9
  int v131; // eax
  _DWORD *v132; // r8
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int32 *v134; // [rsp+48h] [rbp-71h]
  __int64 v135; // [rsp+50h] [rbp-69h] BYREF
  __int64 v136; // [rsp+58h] [rbp-61h]
  struct _KPRCB *v137; // [rsp+60h] [rbp-59h]
  int v138; // [rsp+68h] [rbp-51h]
  int v139; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned int v140; // [rsp+70h] [rbp-49h]
  __int64 v141; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v142; // [rsp+80h] [rbp-39h]
  volatile signed __int32 *v143; // [rsp+88h] [rbp-31h]
  struct _KPRCB *v144; // [rsp+90h] [rbp-29h]
  __int64 v145; // [rsp+98h] [rbp-21h]
  __int64 *v146; // [rsp+A0h] [rbp-19h]
  __int64 *v147; // [rsp+A8h] [rbp-11h]
  volatile signed __int32 *v148; // [rsp+B0h] [rbp-9h]
  __int64 v149; // [rsp+B8h] [rbp-1h]
  __int64 v150; // [rsp+C0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v153; // [rsp+120h] [rbp+67h]
  unsigned int v154; // [rsp+120h] [rbp+67h]
  int v155; // [rsp+120h] [rbp+67h]
  int v156; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v7 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        KeSetEvent(v8, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 544));
    }
    return;
  }
  v9 = *((_QWORD *)P + 22);
  v10 = 0LL;
  v136 = *(_QWORD *)(v9 + 528);
  v153 = v9;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      v10 = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C780, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v156 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v83 = v14[6];
          v14[6] = v83 + 1;
          if ( v83 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C780, 0x1Fu) )
      {
        v72 = CurrentPrcb->SchedulerAssist;
        if ( v72 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v84 = v72[6] - 1;
            v72[6] = v84;
            if ( !v84 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v156 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C780, CurrentIrql);
        v10 = 0LL;
      }
      v15 = (unsigned int)dword_140C4C780;
      if ( (dword_140C4C780 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v85 = _InterlockedCompareExchange(&dword_140C4C780, v15 | 0x40000000, v15);
            v27 = (_DWORD)v15 == v85;
            v15 = v85;
            if ( !v27 )
              continue;
          }
          KeYieldProcessorEx(&v156, v15, v10, (__int64)SchedulerAssist);
          v15 = (unsigned int)dword_140C4C780;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C780, retaddr);
    else
      dword_140C4C780 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v86 = v18[6] - 1;
        v18[6] = v86;
        if ( !v86 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v87 = KeGetCurrentIrql();
        if ( v87 <= 0xFu && CurrentIrql <= 0xFu && v87 >= 2u )
        {
          v88 = KeGetCurrentPrcb();
          v89 = v88->SchedulerAssist;
          v90 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v90 & v89[5]) == 0;
          v89[5] &= v90;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v88);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v136 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v153;
  }
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || (_DWORD)v4 == 1 )
    a2 = 1;
  v139 = 0;
  v19 = v9 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v21) = CurrentThread->AbEntrySummary;
  v138 = 0;
  if ( !(_BYTE)v21 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v23 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v19);
      goto LABEL_137;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v21) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v22 = v21;
  _BitScanForward((unsigned int *)&v21, (unsigned __int8)v21);
  v138 = v21;
  CurrentThread->AbEntrySummary = v22 & ~(1 << v21);
  v23 = (__int64)&CurrentThread->LockEntries[v21];
  if ( !v23 )
  {
LABEL_137:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( v19 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1537] + ((v19 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v23 + 40) = SessionId;
  *(_QWORD *)(v23 + 32) = v19 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v19, &v139);
  v27 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v27 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v25);
  v28 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
    ExpAcquireFastMutexContended(v19, v23);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v19 + 48) = v28;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x2047AuLL, v4, 0LL, 0LL);
    if ( P[2] )
    {
      v66 = v136;
      v67 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v66 + 128), &LockHandle);
      v30 = v153;
      CcDeductDirtyPages(v153, v67);
      v68 = 0;
      if ( *(_DWORD *)(v66 + 496) > v67 )
        v68 = *(_DWORD *)(v66 + 496) - v67;
      *(_DWORD *)(v66 + 496) = v68;
      if ( !*(_DWORD *)(v153 + 112) && *(_DWORD *)(v153 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v153);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v91 = KeGetCurrentIrql();
          if ( v91 <= 0xFu && LockHandle.OldIrql <= 0xFu && v91 >= 2u )
          {
            v92 = KeGetCurrentPrcb();
            v93 = v92->SchedulerAssist;
            v94 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v94 & v93[5]) == 0;
            v26 = (unsigned int)v94 & v93[5];
            v93[5] = v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v92);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v30 = v153;
    }
    v31 = *((_DWORD *)P + 16);
  }
  else
  {
    v29 = *((_DWORD *)P + 16);
    if ( !v29 )
      KeBugCheckEx(0x34u, 0x443uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v30 = v153;
    v31 = v29 - 1;
    *((_DWORD *)P + 16) = v31;
  }
  if ( v31 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
  }
  else
  {
    if ( P[2] )
    {
      if ( *((_QWORD *)P + 23) )
      {
        v32 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
        {
          v65 = *(struct _KEVENT **)(v32 + 184);
          if ( v65 )
            KeSetEvent(v65, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 544));
        }
        *((_QWORD *)P + 23) = 0LL;
        *((_QWORD *)P + 7) = 0LL;
      }
      if ( a2 )
        goto LABEL_82;
      v33 = *((_WORD *)P + 49);
      v34 = P + 72;
      if ( (v33 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v34, 0LL, 0LL);
      v35 = v33 & 1;
      if ( v35 )
      {
        v73 = KeGetCurrentIrql();
        v74 = KeGetCurrentThread();
        if ( v73 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v73, 2uLL, 0LL);
        if ( !v73 && (v74->MiscFlags & 0x400) == 0 && !v74->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v35 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v34);
      }
      else
      {
        v36 = (ULONG_PTR)KeGetCurrentThread();
        v133.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 96);
        v133.LockQueue.Next = 0LL;
        *(_QWORD *)&v133.OldIrql = 0LL;
        v37 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
        {
          v95 = KeGetCurrentPrcb()->SchedulerAssist;
          v26 = (-1 << (v37 + 1)) & 4u | v95[5];
          v95[5] = v26;
        }
        v133.OldIrql = v37;
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        if ( v39 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v96 = v39[6];
            v39[6] = v96 + 1;
            if ( v96 == -1 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v133, v34 + 96);
        }
        else
        {
          v40 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v34 + 12, (__int64)&v133);
          if ( v40 )
            KxWaitForLockOwnerShip((__int64)&v133, v40, v26, 0LL);
        }
        v41 = KeGetCurrentThread();
        v42 = *((_WORD *)v34 + 13);
        if ( ((v42 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v36 & 3) != 3 && (struct _KTHREAD *)v36 != v41 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v34, (ULONG_PTR)v41, v36, 0LL);
        if ( (v42 & 0x80u) == 0 )
        {
          v135 = 0LL;
          v43 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v36 & 3) != 0 )
            v44 = 0;
          else
            v44 = *(unsigned __int8 *)(v36 + 649);
          v45 = *((_QWORD *)v34 + 6);
          v46 = v34 + 48;
          if ( v45 != v36 )
          {
            v77 = 0LL;
            v78 = 0LL;
            if ( v45 )
              v77 = 1LL;
            else
              v78 = v34 + 48;
            if ( !v44
              || (v79 = *((_QWORD *)v34 + 2)) == 0
              || v44 >= *(_DWORD *)(v79 + 8)
              || (v46 = (char *)(v79 + 16LL * v44), *(_QWORD *)v46 != v36) )
            {
              v80 = *((_QWORD *)v34 + 2);
              v81 = *((unsigned int *)v34 + 16) + (unsigned __int64)*((unsigned int *)v34 + 18);
              if ( !v80 || (v46 = (char *)(v80 + 16), v77 >= v81) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v34, v36, v80, 2uLL);
              while ( *(_QWORD *)v46 != v36 )
              {
                if ( *(_QWORD *)v46 )
                {
                  if ( ++v77 == v81 )
                    goto LABEL_197;
                }
                else if ( !v78 )
                {
                  v78 = v46;
                }
                v46 += 16;
                if ( v46 == (char *)(v80 + 16LL * *(unsigned int *)(v80 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)&v46[-v80] >> 4;
            }
          }
          v47 = *((_DWORD *)v46 + 2) & 7 | (8 * (*((_DWORD *)v46 + 2) >> 3) - 8);
          *((_DWORD *)v46 + 2) = v47;
          if ( v47 >= 8 )
          {
            v155 = *((_DWORD *)v34 + 17);
            v61 = 65618;
            v62 = v47 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v133);
            v97 = v133.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v98 = KeGetCurrentIrql();
                if ( v98 <= 0xFu && v133.OldIrql <= 0xFu && v98 >= 2u )
                {
                  v99 = KeGetCurrentPrcb();
                  v100 = v99->SchedulerAssist;
                  v101 = ~(unsigned __int16)(-1LL << (v133.OldIrql + 1));
                  v27 = (v101 & v100[5]) == 0;
                  v100[5] &= v101;
                  if ( v27 )
                    KiRemoveSystemWorkPriorityKick(v99);
                }
              }
            }
            __writecr8(v97);
            LODWORD(v49) = v155;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v46);
          v49 = *((unsigned int *)v34 + 17);
          v50 = 0LL;
          v51 = *((_DWORD *)v34 + 16) <= 1u;
          v52 = 0LL;
          v141 = 0LL;
          v154 = v49;
          if ( !v51 )
            goto LABEL_63;
          if ( *((_DWORD *)v34 + 19) )
          {
            KeCaptureWaitChainHeadEx(v34 + 40, &v135, &v141);
            --*((_DWORD *)v34 + 19);
            *((_WORD *)v34 + 13) |= 0x80u;
            v53 = 1;
            v52 = v141;
            v50 = 0LL;
            v49 = v154;
          }
          else
          {
            if ( !*((_DWORD *)v34 + 18) )
            {
LABEL_63:
              v53 = 0;
              goto LABEL_64;
            }
            v102 = *((_QWORD *)v34 + 4);
            *((_QWORD *)v34 + 4) = 0LL;
            v135 = v102;
            v53 = *((_DWORD *)v34 + 18);
            *((_DWORD *)v34 + 18) = 0;
          }
LABEL_64:
          v54 = v53 - 1;
          v27 = v54 + *((_DWORD *)v34 + 16) == 0;
          *((_DWORD *)v34 + 16) += v54;
          if ( v27 )
            *((_WORD *)v34 + 12) = 0;
          if ( !*((_DWORD *)v34 + 19) && !*((_DWORD *)v34 + 18) )
            *((_WORD *)v34 + 13) &= 0xF9u;
          v140 = (unsigned __int8)v34[27];
          if ( v52 )
          {
            v103 = *((_DWORD *)v34 + 14) & 7;
            *((_QWORD *)v34 + 6) = v52;
            *((_DWORD *)v34 + 14) = v103 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(&v133);
            Next = (__int64)v133.LockQueue.Next;
            if ( !v133.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v133.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&v133) == &v133 )
              {
LABEL_74:
                v56 = KeGetCurrentPrcb();
                v57 = (__int64)v56->SchedulerAssist;
                if ( v57 )
                {
                  if ( v56->NestingLevel <= 1u )
                  {
                    v104 = *(_DWORD *)(v57 + 24) - 1;
                    *(_DWORD *)(v57 + 24) = v104;
                    if ( !v104 )
                    {
                      KiRemoveSystemWorkPriorityKick(v56);
                      v49 = v154;
                      v50 = 0LL;
                    }
                  }
                }
                v58 = v133.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v105 = KeGetCurrentIrql();
                    if ( v105 <= 0xFu && v133.OldIrql <= 0xFu && v105 >= 2u )
                    {
                      v106 = KeGetCurrentPrcb();
                      v107 = v106->SchedulerAssist;
                      v57 = -1LL << (v133.OldIrql + 1);
                      v108 = ~(unsigned __int16)v57;
                      v27 = (v108 & v107[5]) == 0;
                      v107[5] &= v108;
                      if ( v27 )
                        KiRemoveSystemWorkPriorityKick(v106);
                      v49 = v154;
                      v50 = 0LL;
                    }
                  }
                }
                __writecr8(v58);
                v59 = 1;
                if ( v141 )
                  v59 = 3;
                v60 = 1;
                if ( !v135 )
                  goto LABEL_79;
                v109 = KeGetCurrentIrql();
                v150 = v109;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v109 <= 0xFu )
                {
                  v50 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
                  v57 = (-1LL << ((unsigned __int8)v109 + 1)) & 4;
                  v49 = (unsigned int)v57 | *(_DWORD *)(v50 + 20);
                  *(_DWORD *)(v50 + 20) = v49;
                }
                v110 = v135;
                v137 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v136 = v110;
                  v149 = *(_QWORD *)v110;
                  v148 = (volatile signed __int32 *)(v110 + 24);
                  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v110 + 24), v57, v49, v50);
                  v49 = v136;
                  v111 = (__int64 **)(v136 + 32);
                  v147 = (__int64 *)(v136 + 32);
                  *(_DWORD *)(v136 + 28) = 1;
                  v112 = *v111;
                  if ( *v111 != (__int64 *)v111 )
                    break;
LABEL_254:
                  _InterlockedAnd(v148, 0xFFFFFF7F);
                  v110 = v149;
                  if ( v149 == v135 )
                  {
                    v127 = KiRemoveBoostThread((__int64)v137, (__int64)v137->CurrentThread);
                    v128 = v140;
                    if ( v140 )
                    {
                      v60 = 2;
                      if ( v127 > (char)v140 )
                        v128 = (unsigned int)v127;
                    }
                    if ( (v59 & 2) != 0 && v60 == 1 )
                      v128 = 1LL;
                    KiExitDispatcher((__int64)v137, 0LL, v60, v128, v150);
                    LODWORD(v49) = v154;
                    v135 = 0LL;
LABEL_79:
                    v61 = 65602;
                    v62 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v43 )
                      PerfLogExecutiveResourceRelease(v61, v34, v62, (unsigned int)v49);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v113 = v112;
                  v142 = v112;
                  v114 = *v112;
                  v146 = (__int64 *)v114;
                  v115 = (__int64 **)v113[1];
                  if ( *(__int64 **)(v114 + 8) != v113 || *v115 != v113 )
                    goto LABEL_268;
                  *v115 = (__int64 *)v114;
                  *(_QWORD *)(v114 + 8) = v115;
                  v116 = *((_BYTE *)v113 + 16);
                  if ( v116 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread(
                                            (__int64)v137,
                                            (__int64)v113,
                                            *((unsigned __int16 *)v113 + 9),
                                            0LL) )
                    {
                      v27 = (*(_DWORD *)(v136 + 28))-- == 1;
                      if ( v27 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v116 == 2 )
                    {
                      *((_BYTE *)v113 + 17) = 5;
                      v134 = (volatile signed __int32 *)v113[3];
                      v143 = v134 + 2;
                      *v113 = 0LL;
                      v117 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v117 <= 0xFu )
                      {
                        v118 = KeGetCurrentPrcb()->SchedulerAssist;
                        v49 = (unsigned int)(-1LL << (v117 + 1)) & 4 | v118[5];
                        v113 = v142;
                        v118[5] = v49;
                      }
                      v144 = KeGetCurrentPrcb();
                      v119 = (__int64)v144->CurrentThread;
                      v145 = v119;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v119, v113);
                        EtwTraceEnqueueWork(v122, v121, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v134, (__int64)v113, v49, v119);
                      v123 = v143;
                      v124 = v134;
                      if ( *(volatile signed __int32 **)v123 == v123
                        || *((_DWORD *)v134 + 10) >= *((_DWORD *)v134 + 11)
                        || *(volatile signed __int32 **)(v145 + 232) == v134 && *(_BYTE *)(v145 + 643) == 15 )
                      {
LABEL_246:
                        v50 = *((unsigned int *)v124 + 1);
                        v57 = (__int64)(v124 + 6);
                        *((_DWORD *)v124 + 1) = v50 + 1;
                        v49 = *((_QWORD *)v124 + 4);
                        if ( *(volatile signed __int32 **)v49 != v124 + 6 )
                          goto LABEL_268;
                        v126 = v142;
                        *v142 = v57;
                        v126[1] = v49;
                        *(_QWORD *)v49 = v126;
                        *((_QWORD *)v124 + 4) = v126;
                        if ( !(_DWORD)v50 && *(volatile signed __int32 **)v123 != v123 )
                        {
                          KiWakeOtherQueueWaiters((__int64)v144, (__int64)v124, v49, v50);
                          v124 = v134;
                        }
                      }
                      else
                      {
                        v125 = KiWakeQueueWaiter((__int64)v144, (__int64)v134, (__int64)v142);
                        v124 = v134;
                        if ( !v125 )
                        {
                          v123 = v143;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd(v124, 0xFFFFFF7F);
                      v27 = (*(_DWORD *)(v136 + 28))-- == 1;
                      if ( v27 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread((__int64)v137, (__int64)v113, 256LL, 0LL);
                  }
LABEL_253:
                  v112 = v146;
                  if ( v146 == v147 )
                    goto LABEL_254;
                }
              }
              Next = KxWaitForLockChainValid((__int64 *)&v133, v48, v49, 0LL);
              v49 = v154;
              v50 = 0LL;
            }
            v133.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v133, retaddr);
          v49 = v154;
          v50 = 0LL;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v34, v36, (signed __int64)&v133, 0LL);
      }
LABEL_82:
      v63 = *(unsigned __int8 *)(v19 + 48);
      *(_QWORD *)(v19 + 8) = 0LL;
      v64 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
      if ( v64 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v64);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v129 = KeGetCurrentIrql();
          if ( v129 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v129 >= 2u )
          {
            v130 = KeGetCurrentPrcb();
            v131 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
            v132 = v130->SchedulerAssist;
            v27 = (v131 & v132[5]) == 0;
            v132[5] &= v131;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v130);
          }
        }
      }
      __writecr8(v63);
      KeAbPostRelease(v19);
      return;
    }
    ExAcquirePushLockExclusiveEx(v30 + 104, 0LL);
    v70 = (char **)*((_QWORD *)P + 2);
    v71 = (PVOID *)*((_QWORD *)P + 3);
    if ( v70[1] != P + 16 || *v71 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v71 = v70;
    v70[1] = (char *)v71;
    if ( *(__int64 *)(v30 + 32) > 0x2000000 && (*(_DWORD *)(v30 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v30, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v30 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v75 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v76 = *(struct _KEVENT **)(v75 + 184);
        if ( v76 )
          KeSetEvent(v76, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v75 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
    CcDeallocateBcb(P);
  }
}
