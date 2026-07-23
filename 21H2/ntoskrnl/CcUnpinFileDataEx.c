/*
 * XREFs of CcUnpinFileDataEx @ 0x1402FF380
 * Callers:
 *     CcMapDataForOverwrite @ 0x14022D728 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x140299A48 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402FEE3C (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402FEF50 (CcGetDirtyPagesHelper.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA9A0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1406FF050 (CcUnpinData.c)
 *     CcMapData @ 0x140706BF0 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x1408679E0 (CcUnpinDataForThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FD5C8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     ExpFreeOwnerEntry @ 0x1402FFD40 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x1402FFDB0 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x140300404 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x14031DB3C (CcDeductDirtyPages.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x14038E60C (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038FF80 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AB178 (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  bool v25; // zf
  unsigned __int8 v26; // r15
  int v27; // eax
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // rdi
  __int16 v31; // cx
  char *v32; // rsi
  __int16 v33; // cx
  ULONG_PTR v34; // r14
  unsigned __int8 v35; // r10
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  _QWORD *v38; // rdx
  struct _KTHREAD *v39; // r8
  __int16 v40; // cx
  bool v41; // r12
  unsigned int v42; // ecx
  __int64 v43; // rax
  char *v44; // rdx
  unsigned int v45; // edi
  __int64 v46; // r8
  __int64 v47; // r9
  bool v48; // cc
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  __int64 Next; // rax
  struct _KPRCB *v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rdi
  char v56; // r15
  int v57; // r14d
  unsigned int v58; // r14d
  unsigned int v59; // edi
  unsigned __int64 v60; // rdi
  signed __int32 v61; // eax
  struct _KEVENT *v62; // rcx
  __int64 v63; // r12
  unsigned int v64; // edi
  unsigned int v65; // eax
  unsigned __int64 OldIrql; // rdi
  char **v67; // rdx
  PVOID *v68; // rcx
  _DWORD *v69; // rcx
  unsigned __int8 v70; // al
  struct _KTHREAD *v71; // rdx
  __int64 v72; // rdi
  struct _KEVENT *v73; // rcx
  unsigned __int64 v74; // r8
  char *v75; // r10
  __int64 v76; // rax
  ULONG_PTR v77; // r9
  unsigned __int64 v78; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v80; // eax
  int v81; // eax
  unsigned __int32 v82; // eax
  int v83; // eax
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int64 v94; // r15
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  __int64 v99; // rax
  int v100; // eax
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // r10
  _DWORD *v104; // r9
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 **v108; // rcx
  __int64 *v109; // rax
  __int64 *v110; // rdx
  __int64 v111; // rax
  __int64 **v112; // rcx
  char v113; // al
  unsigned __int8 v114; // cl
  _DWORD *v115; // r9
  __int64 v116; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v118; // rdx
  __int64 v119; // r9
  __int64 v120; // r9
  volatile signed __int32 *v121; // r10
  volatile signed __int32 *v122; // rcx
  char v123; // al
  __int64 *v124; // rax
  char v125; // al
  int v126; // r9d
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r9
  int v129; // eax
  _DWORD *v130; // r8
  struct _KLOCK_QUEUE_HANDLE v131; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int32 *v132; // [rsp+48h] [rbp-71h]
  __int64 v133; // [rsp+50h] [rbp-69h] BYREF
  __int64 v134; // [rsp+58h] [rbp-61h]
  struct _KPRCB *v135; // [rsp+60h] [rbp-59h]
  int v136; // [rsp+68h] [rbp-51h]
  int v137; // [rsp+6Ch] [rbp-4Dh]
  int v138; // [rsp+70h] [rbp-49h]
  __int64 v139; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v140; // [rsp+80h] [rbp-39h]
  volatile signed __int32 *v141; // [rsp+88h] [rbp-31h]
  struct _KPRCB *v142; // [rsp+90h] [rbp-29h]
  __int64 v143; // [rsp+98h] [rbp-21h]
  __int64 *v144; // [rsp+A0h] [rbp-19h]
  __int64 *v145; // [rsp+A8h] [rbp-11h]
  volatile signed __int32 *v146; // [rsp+B0h] [rbp-9h]
  __int64 v147; // [rsp+B8h] [rbp-1h]
  __int64 v148; // [rsp+C0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v151; // [rsp+120h] [rbp+67h]
  unsigned int v152; // [rsp+120h] [rbp+67h]
  int v153; // [rsp+120h] [rbp+67h]
  int v154; // [rsp+138h] [rbp+7Fh] BYREF

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
  v134 = *(_QWORD *)(v9 + 528);
  v151 = v9;
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C9C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v154 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v80 = v14[6];
          v14[6] = v80 + 1;
          if ( v80 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C9C0, 0x1Fu) )
      {
        v69 = CurrentPrcb->SchedulerAssist;
        if ( v69 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v81 = v69[6] - 1;
            v69[6] = v81;
            if ( !v81 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v154 = ExpWaitForSpinLockExclusiveAndAcquire(
                 (unsigned __int64)&dword_140C4C9C0,
                 CurrentIrql,
                 v10,
                 SchedulerAssist);
        v10 = 0LL;
      }
      v15 = (unsigned int)dword_140C4C9C0;
      if ( (dword_140C4C9C0 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v82 = _InterlockedCompareExchange(&dword_140C4C9C0, v15 | 0x40000000, v15);
            v25 = (_DWORD)v15 == v82;
            v15 = v82;
            if ( !v25 )
              continue;
          }
          KeYieldProcessorEx(&v154, v15, v10, (__int64)SchedulerAssist);
          v15 = (unsigned int)dword_140C4C9C0;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C9C0, retaddr);
    else
      dword_140C4C9C0 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v83 = v18[6] - 1;
        v18[6] = v83;
        if ( !v83 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v84 = KeGetCurrentIrql();
        if ( v84 <= 0xFu && CurrentIrql <= 0xFu && v84 >= 2u )
        {
          v85 = KeGetCurrentPrcb();
          v86 = v85->SchedulerAssist;
          v87 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v87 & v86[5]) == 0;
          v86[5] &= v87;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v85);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v134 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v151;
  }
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || (_DWORD)v4 == 1 )
    a2 = 1;
  v137 = 0;
  v19 = v9 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v21) = CurrentThread->AbEntrySummary;
  v136 = 0;
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
  v136 = v21;
  CurrentThread->AbEntrySummary = v22 & ~(1 << v21);
  v23 = (__int64)&CurrentThread->LockEntries[v21];
  if ( !v23 )
  {
LABEL_137:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( v19 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1537] + ((v19 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v23 + 40) = SessionId;
  *(_QWORD *)(v23 + 32) = v19 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v26 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
    ExpAcquireFastMutexContended(v19, (PRTL_BALANCED_NODE)v23);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v19 + 48) = v26;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x2047BuLL, v4, 0LL, 0LL);
    if ( P[2] )
    {
      v63 = v134;
      v64 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v63 + 128), &LockHandle);
      v28 = v151;
      CcDeductDirtyPages(v151, v64);
      v65 = 0;
      if ( *(_DWORD *)(v63 + 496) > v64 )
        v65 = *(_DWORD *)(v63 + 496) - v64;
      *(_DWORD *)(v63 + 496) = v65;
      if ( !*(_DWORD *)(v151 + 112) && *(_DWORD *)(v151 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v151);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v88 = KeGetCurrentIrql();
          if ( v88 <= 0xFu && LockHandle.OldIrql <= 0xFu && v88 >= 2u )
          {
            v89 = KeGetCurrentPrcb();
            v90 = v89->SchedulerAssist;
            v91 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v91 & v90[5]) == 0;
            v90[5] &= v91;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v89);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v28 = v151;
    }
    v29 = *((_DWORD *)P + 16);
  }
  else
  {
    v27 = *((_DWORD *)P + 16);
    if ( !v27 )
      KeBugCheckEx(0x34u, 0x444uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v28 = v151;
    v29 = v27 - 1;
    *((_DWORD *)P + 16) = v29;
  }
  if ( v29 )
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
        v30 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
        {
          v62 = *(struct _KEVENT **)(v30 + 184);
          if ( v62 )
            KeSetEvent(v62, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v30 + 544));
        }
        *((_QWORD *)P + 23) = 0LL;
        *((_QWORD *)P + 7) = 0LL;
      }
      if ( a2 )
        goto LABEL_82;
      v31 = *((_WORD *)P + 49);
      v32 = P + 72;
      if ( (v31 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v32, 0LL, 0LL);
      v33 = v31 & 1;
      if ( v33 )
      {
        v70 = KeGetCurrentIrql();
        v71 = KeGetCurrentThread();
        if ( v70 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v70, 2uLL, 0LL);
        if ( !v70 && (v71->MiscFlags & 0x400) == 0 && !v71->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v33 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v32);
      }
      else
      {
        v34 = (ULONG_PTR)KeGetCurrentThread();
        v131.LockQueue.Lock = (unsigned __int64 *volatile)(v32 + 96);
        v131.LockQueue.Next = 0LL;
        *(_QWORD *)&v131.OldIrql = 0LL;
        v35 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
        {
          v92 = KeGetCurrentPrcb()->SchedulerAssist;
          v92[5] |= (-1 << (v35 + 1)) & 4;
        }
        v131.OldIrql = v35;
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        if ( v37 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v93 = v37[6];
            v37[6] = v93 + 1;
            if ( v93 == -1 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v131, v32 + 96);
        }
        else
        {
          v38 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v32 + 12, (__int64)&v131);
          if ( v38 )
            KxWaitForLockOwnerShip((__int64)&v131, v38);
        }
        v39 = KeGetCurrentThread();
        v40 = *((_WORD *)v32 + 13);
        if ( ((v40 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v34 & 3) != 3 && (struct _KTHREAD *)v34 != v39 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v32, (ULONG_PTR)v39, v34, 0LL);
        if ( (v40 & 0x80u) == 0 )
        {
          v133 = 0LL;
          v41 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v34 & 3) != 0 )
            v42 = 0;
          else
            v42 = *(unsigned __int8 *)(v34 + 1032);
          v43 = *((_QWORD *)v32 + 6);
          v44 = v32 + 48;
          if ( v43 != v34 )
          {
            v74 = 0LL;
            v75 = 0LL;
            if ( v43 )
              v74 = 1LL;
            else
              v75 = v32 + 48;
            if ( !v42
              || (v76 = *((_QWORD *)v32 + 2)) == 0
              || v42 >= *(_DWORD *)(v76 + 8)
              || (v44 = (char *)(v76 + 16LL * v42), *(_QWORD *)v44 != v34) )
            {
              v77 = *((_QWORD *)v32 + 2);
              v78 = *((unsigned int *)v32 + 16) + (unsigned __int64)*((unsigned int *)v32 + 18);
              if ( !v77 || (v44 = (char *)(v77 + 16), v74 >= v78) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v32, v34, v77, 2uLL);
              while ( *(_QWORD *)v44 != v34 )
              {
                if ( *(_QWORD *)v44 )
                {
                  if ( ++v74 == v78 )
                    goto LABEL_197;
                }
                else if ( !v75 )
                {
                  v75 = v44;
                }
                v44 += 16;
                if ( v44 == (char *)(v77 + 16LL * *(unsigned int *)(v77 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)&v44[-v77] >> 4;
            }
          }
          v45 = *((_DWORD *)v44 + 2) & 7 | (8 * (*((_DWORD *)v44 + 2) >> 3) - 8);
          *((_DWORD *)v44 + 2) = v45;
          if ( v45 >= 8 )
          {
            v153 = *((_DWORD *)v32 + 17);
            v58 = 65618;
            v59 = v45 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v131);
            v94 = v131.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v95 = KeGetCurrentIrql();
                if ( v95 <= 0xFu && v131.OldIrql <= 0xFu && v95 >= 2u )
                {
                  v96 = KeGetCurrentPrcb();
                  v97 = v96->SchedulerAssist;
                  v98 = ~(unsigned __int16)(-1LL << (v131.OldIrql + 1));
                  v25 = (v98 & v97[5]) == 0;
                  v97[5] &= v98;
                  if ( v25 )
                    KiRemoveSystemWorkPriorityKick(v96);
                }
              }
            }
            __writecr8(v94);
            LODWORD(v46) = v153;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v44);
          v46 = *((unsigned int *)v32 + 17);
          v47 = 0LL;
          v48 = *((_DWORD *)v32 + 16) <= 1u;
          v49 = 0LL;
          v139 = 0LL;
          v152 = v46;
          if ( !v48 )
            goto LABEL_63;
          if ( *((_DWORD *)v32 + 19) )
          {
            KeCaptureWaitChainHeadEx(v32 + 40, &v133, &v139);
            --*((_DWORD *)v32 + 19);
            *((_WORD *)v32 + 13) |= 0x80u;
            v50 = 1;
            v49 = v139;
            v47 = 0LL;
            v46 = v152;
          }
          else
          {
            if ( !*((_DWORD *)v32 + 18) )
            {
LABEL_63:
              v50 = 0;
              goto LABEL_64;
            }
            v99 = *((_QWORD *)v32 + 4);
            *((_QWORD *)v32 + 4) = 0LL;
            v133 = v99;
            v50 = *((_DWORD *)v32 + 18);
            *((_DWORD *)v32 + 18) = 0;
          }
LABEL_64:
          v51 = v50 - 1;
          v25 = v51 + *((_DWORD *)v32 + 16) == 0;
          *((_DWORD *)v32 + 16) += v51;
          if ( v25 )
            *((_WORD *)v32 + 12) = 0;
          if ( !*((_DWORD *)v32 + 19) && !*((_DWORD *)v32 + 18) )
            *((_WORD *)v32 + 13) &= 0xF9u;
          v138 = (unsigned __int8)v32[27];
          if ( v49 )
          {
            v100 = *((_DWORD *)v32 + 14) & 7;
            *((_QWORD *)v32 + 6) = v49;
            *((_DWORD *)v32 + 14) = v100 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(&v131);
            Next = (__int64)v131.LockQueue.Next;
            if ( !v131.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v131.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&v131) == &v131 )
              {
LABEL_74:
                v53 = KeGetCurrentPrcb();
                v54 = (__int64)v53->SchedulerAssist;
                if ( v54 )
                {
                  if ( v53->NestingLevel <= 1u )
                  {
                    v101 = *(_DWORD *)(v54 + 24) - 1;
                    *(_DWORD *)(v54 + 24) = v101;
                    if ( !v101 )
                    {
                      KiRemoveSystemWorkPriorityKick(v53);
                      v46 = v152;
                      v47 = 0LL;
                    }
                  }
                }
                v55 = v131.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v102 = KeGetCurrentIrql();
                    if ( v102 <= 0xFu && v131.OldIrql <= 0xFu && v102 >= 2u )
                    {
                      v103 = KeGetCurrentPrcb();
                      v104 = v103->SchedulerAssist;
                      v54 = -1LL << (v131.OldIrql + 1);
                      v105 = ~(unsigned __int16)v54;
                      v25 = (v105 & v104[5]) == 0;
                      v104[5] &= v105;
                      if ( v25 )
                        KiRemoveSystemWorkPriorityKick(v103);
                      v46 = v152;
                      v47 = 0LL;
                    }
                  }
                }
                __writecr8(v55);
                v56 = 1;
                if ( v139 )
                  v56 = 3;
                v57 = 1;
                if ( !v133 )
                  goto LABEL_79;
                v106 = KeGetCurrentIrql();
                v148 = v106;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v106 <= 0xFu )
                {
                  v47 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
                  v54 = (-1LL << ((unsigned __int8)v106 + 1)) & 4;
                  v46 = (unsigned int)v54 | *(_DWORD *)(v47 + 20);
                  *(_DWORD *)(v47 + 20) = v46;
                }
                v107 = v133;
                v135 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v134 = v107;
                  v147 = *(_QWORD *)v107;
                  v146 = (volatile signed __int32 *)(v107 + 24);
                  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v107 + 24), v54, v46, v47);
                  v46 = v134;
                  v108 = (__int64 **)(v134 + 32);
                  v145 = (__int64 *)(v134 + 32);
                  *(_DWORD *)(v134 + 28) = 1;
                  v109 = *v108;
                  if ( *v108 != (__int64 *)v108 )
                    break;
LABEL_254:
                  _InterlockedAnd(v146, 0xFFFFFF7F);
                  v107 = v147;
                  if ( v147 == v133 )
                  {
                    v125 = KiRemoveBoostThread((__int64)v135, (__int64)v135->CurrentThread);
                    v126 = v138;
                    if ( v138 )
                    {
                      v57 = 2;
                      if ( v125 > (char)v138 )
                        v126 = v125;
                    }
                    if ( (v56 & 2) != 0 && v57 == 1 )
                      v126 = 1;
                    KiExitDispatcher((_DWORD)v135, 0, v57, v126, v148);
                    LODWORD(v46) = v152;
                    v133 = 0LL;
LABEL_79:
                    v58 = 65602;
                    v59 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v41 )
                      PerfLogExecutiveResourceRelease(v58, v32, v59, (unsigned int)v46);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v110 = v109;
                  v140 = v109;
                  v111 = *v109;
                  v144 = (__int64 *)v111;
                  v112 = (__int64 **)v110[1];
                  if ( *(__int64 **)(v111 + 8) != v110 || *v112 != v110 )
                    goto LABEL_268;
                  *v112 = (__int64 *)v111;
                  *(_QWORD *)(v111 + 8) = v112;
                  v113 = *((_BYTE *)v110 + 16);
                  if ( v113 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread(v135, v110, *((unsigned __int16 *)v110 + 9), 0LL) )
                    {
                      v25 = (*(_DWORD *)(v134 + 28))-- == 1;
                      if ( v25 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v113 == 2 )
                    {
                      *((_BYTE *)v110 + 17) = 5;
                      v132 = (volatile signed __int32 *)v110[3];
                      v141 = v132 + 2;
                      *v110 = 0LL;
                      v114 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v114 <= 0xFu )
                      {
                        v115 = KeGetCurrentPrcb()->SchedulerAssist;
                        v46 = (unsigned int)(-1LL << (v114 + 1)) & 4 | v115[5];
                        v110 = v140;
                        v115[5] = v46;
                      }
                      v142 = KeGetCurrentPrcb();
                      v116 = (__int64)v142->CurrentThread;
                      v143 = v116;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v116);
                        EtwTraceEnqueueWork(v119, v118, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v132, (__int64)v110, v46, v116);
                      v121 = v141;
                      v122 = v132;
                      if ( *(volatile signed __int32 **)v121 == v121
                        || *((_DWORD *)v132 + 10) >= *((_DWORD *)v132 + 11)
                        || *(volatile signed __int32 **)(v143 + 232) == v132 && *(_BYTE *)(v143 + 643) == 15 )
                      {
LABEL_246:
                        v47 = *((unsigned int *)v122 + 1);
                        v54 = (__int64)(v122 + 6);
                        *((_DWORD *)v122 + 1) = v47 + 1;
                        v46 = *((_QWORD *)v122 + 4);
                        if ( *(volatile signed __int32 **)v46 != v122 + 6 )
                          goto LABEL_268;
                        v124 = v140;
                        *v140 = v54;
                        v124[1] = v46;
                        *(_QWORD *)v46 = v124;
                        *((_QWORD *)v122 + 4) = v124;
                        if ( !(_DWORD)v47 && *(volatile signed __int32 **)v121 != v121 )
                        {
                          KiWakeOtherQueueWaiters((__int64)v142, (__int64)v122);
                          v122 = v132;
                        }
                      }
                      else
                      {
                        v123 = KiWakeQueueWaiter((__int64)v142, (__int64)v132, (__int64)v140, v120);
                        v122 = v132;
                        if ( !v123 )
                        {
                          v121 = v141;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd(v122, 0xFFFFFF7F);
                      v25 = (*(_DWORD *)(v134 + 28))-- == 1;
                      if ( v25 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread(v135, v110, 256LL, 0LL);
                  }
LABEL_253:
                  v109 = v144;
                  if ( v144 == v145 )
                    goto LABEL_254;
                }
              }
              Next = KxWaitForLockChainValid((__int64 *)&v131);
              v46 = v152;
              v47 = 0LL;
            }
            v131.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v131, retaddr);
          v46 = v152;
          v47 = 0LL;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v32, v34);
      }
LABEL_82:
      v60 = *(unsigned __int8 *)(v19 + 48);
      *(_QWORD *)(v19 + 8) = 0LL;
      v61 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
      if ( v61 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v61);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v127 = KeGetCurrentIrql();
          if ( v127 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v127 >= 2u )
          {
            v128 = KeGetCurrentPrcb();
            v129 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
            v130 = v128->SchedulerAssist;
            v25 = (v129 & v130[5]) == 0;
            v130[5] &= v129;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v128);
          }
        }
      }
      __writecr8(v60);
      KeAbPostRelease(v19);
      return;
    }
    ExAcquirePushLockExclusiveEx(v28 + 104, 0LL);
    v67 = (char **)*((_QWORD *)P + 2);
    v68 = (PVOID *)*((_QWORD *)P + 3);
    if ( v67[1] != P + 16 || *v68 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v68 = v67;
    v67[1] = (char *)v68;
    if ( *(__int64 *)(v28 + 32) > 0x2000000 && (*(_DWORD *)(v28 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v28, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v28 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v72 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v73 = *(struct _KEVENT **)(v72 + 184);
        if ( v73 )
          KeSetEvent(v73, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v72 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
    CcDeallocateBcb(P);
  }
}
