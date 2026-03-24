/*
 * XREFs of CcUnpinFileDataEx @ 0x1402F4630
 * Callers:
 *     CcMapDataForOverwrite @ 0x1402AF3C8 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402F40EC (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402F4200 (CcGetDirtyPagesHelper.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1406E7C70 (CcUnpinData.c)
 *     CcMapData @ 0x1406EF810 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140867880 (CcUnpinDataForThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveBoostThread @ 0x14024AED0 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExpReleaseFastMutexContended @ 0x1402F171C (ExpReleaseFastMutexContended.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402F2878 (CcInsertIntoCleanSharedCacheMapList.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     ExpFreeOwnerEntry @ 0x1402F4FF0 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x1402F5060 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402F56B4 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x140312DEC (CcDeductDirtyPages.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x14038E4BC (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038FE30 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AAF48 (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  bool v26; // zf
  unsigned __int8 v27; // r15
  int v28; // eax
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // rdi
  __int16 v32; // cx
  char *v33; // rsi
  __int16 v34; // cx
  ULONG_PTR v35; // r14
  unsigned __int8 v36; // r10
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  struct _KTHREAD *v40; // r8
  __int16 v41; // cx
  bool v42; // r12
  unsigned int v43; // ecx
  __int64 v44; // rax
  char *v45; // rdx
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // cc
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  __int64 Next; // rax
  struct _KPRCB *v55; // rcx
  __int64 v56; // rdx
  unsigned __int64 v57; // rdi
  char v58; // r15
  int v59; // r14d
  unsigned int v60; // r14d
  unsigned int v61; // edi
  unsigned __int64 v62; // rdi
  signed __int32 v63; // eax
  struct _KEVENT *v64; // rcx
  __int64 v65; // r12
  unsigned int v66; // edi
  unsigned int v67; // eax
  unsigned __int64 OldIrql; // rdi
  char **v69; // rdx
  PVOID *v70; // rcx
  _DWORD *v71; // rcx
  unsigned __int8 v72; // al
  struct _KTHREAD *v73; // rdx
  __int64 v74; // rdi
  struct _KEVENT *v75; // rcx
  unsigned __int64 v76; // r8
  char *v77; // r10
  __int64 v78; // rax
  ULONG_PTR v79; // r9
  unsigned __int64 v80; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v82; // eax
  int v83; // eax
  unsigned __int32 v84; // eax
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  _DWORD *v94; // r9
  int v95; // eax
  unsigned __int64 v96; // r15
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  __int64 v101; // rax
  int v102; // eax
  int v103; // eax
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 **v110; // rcx
  __int64 *v111; // rax
  __int64 *v112; // rdx
  __int64 v113; // rax
  __int64 **v114; // rcx
  char v115; // al
  unsigned __int8 v116; // cl
  _DWORD *v117; // r9
  __int64 v118; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r9
  volatile signed __int32 *v123; // r10
  volatile signed __int32 *v124; // rcx
  char v125; // al
  __int64 *v126; // rax
  char v127; // al
  int v128; // r9d
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
  int v139; // [rsp+6Ch] [rbp-4Dh]
  int v140; // [rsp+70h] [rbp-49h]
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C980, CurrentIrql);
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
          v82 = v14[6];
          v14[6] = v82 + 1;
          if ( v82 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C980, 0x1Fu) )
      {
        v71 = CurrentPrcb->SchedulerAssist;
        if ( v71 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v83 = v71[6] - 1;
            v71[6] = v83;
            if ( !v83 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v156 = ExpWaitForSpinLockExclusiveAndAcquire(
                 (unsigned __int64)&dword_140C4C980,
                 CurrentIrql,
                 v10,
                 SchedulerAssist);
        v10 = 0LL;
      }
      v15 = (unsigned int)dword_140C4C980;
      if ( (dword_140C4C980 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v84 = _InterlockedCompareExchange(&dword_140C4C980, v15 | 0x40000000, v15);
            v26 = (_DWORD)v15 == v84;
            v15 = v84;
            if ( !v26 )
              continue;
          }
          KeYieldProcessorEx(&v156, v15, v10, (__int64)SchedulerAssist);
          v15 = (unsigned int)dword_140C4C980;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C980, retaddr);
    else
      dword_140C4C980 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v85 = v18[6] - 1;
        v18[6] = v85;
        if ( !v85 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v86 = KeGetCurrentIrql();
        if ( v86 <= 0xFu && CurrentIrql <= 0xFu && v86 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v136 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v23 + 40) = SessionId;
  *(_QWORD *)(v23 + 32) = v19 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v25);
  v27 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
    ExpAcquireFastMutexContended(v19, v23);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v19 + 48) = v27;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x2047BuLL, v4, 0LL, 0LL);
    if ( P[2] )
    {
      v65 = v136;
      v66 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v65 + 128), &LockHandle);
      v29 = v153;
      CcDeductDirtyPages(v153, v66);
      v67 = 0;
      if ( *(_DWORD *)(v65 + 496) > v66 )
        v67 = *(_DWORD *)(v65 + 496) - v66;
      *(_DWORD *)(v65 + 496) = v67;
      if ( !*(_DWORD *)(v153 + 112) && *(_DWORD *)(v153 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v153);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v90 = KeGetCurrentIrql();
          if ( v90 <= 0xFu && LockHandle.OldIrql <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v29 = v153;
    }
    v30 = *((_DWORD *)P + 16);
  }
  else
  {
    v28 = *((_DWORD *)P + 16);
    if ( !v28 )
      KeBugCheckEx(0x34u, 0x444uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v29 = v153;
    v30 = v28 - 1;
    *((_DWORD *)P + 16) = v30;
  }
  if ( v30 )
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
        v31 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
        {
          v64 = *(struct _KEVENT **)(v31 + 184);
          if ( v64 )
            KeSetEvent(v64, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v31 + 544));
        }
        *((_QWORD *)P + 23) = 0LL;
        *((_QWORD *)P + 7) = 0LL;
      }
      if ( a2 )
        goto LABEL_82;
      v32 = *((_WORD *)P + 49);
      v33 = P + 72;
      if ( (v32 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v33, 0LL, 0LL);
      v34 = v32 & 1;
      if ( v34 )
      {
        v72 = KeGetCurrentIrql();
        v73 = KeGetCurrentThread();
        if ( v72 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v72, 2uLL, 0LL);
        if ( !v72 && (v73->MiscFlags & 0x400) == 0 && !v73->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v34 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v33);
      }
      else
      {
        v35 = (ULONG_PTR)KeGetCurrentThread();
        v133.LockQueue.Lock = (unsigned __int64 *volatile)(v33 + 96);
        v133.LockQueue.Next = 0LL;
        *(_QWORD *)&v133.OldIrql = 0LL;
        v36 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 <= 0xFu )
        {
          v94 = KeGetCurrentPrcb()->SchedulerAssist;
          v94[5] |= (-1 << (v36 + 1)) & 4;
        }
        v133.OldIrql = v36;
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        if ( v38 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v95 = v38[6];
            v38[6] = v95 + 1;
            if ( v95 == -1 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v133, v33 + 96);
        }
        else
        {
          v39 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v33 + 12, (__int64)&v133);
          if ( v39 )
            KxWaitForLockOwnerShip((__int64)&v133, v39);
        }
        v40 = KeGetCurrentThread();
        v41 = *((_WORD *)v33 + 13);
        if ( ((v41 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v35 & 3) != 3 && (struct _KTHREAD *)v35 != v40 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v33, (ULONG_PTR)v40, v35, 0LL);
        if ( (v41 & 0x80u) == 0 )
        {
          v135 = 0LL;
          v42 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v35 & 3) != 0 )
            v43 = 0;
          else
            v43 = *(unsigned __int8 *)(v35 + 1032);
          v44 = *((_QWORD *)v33 + 6);
          v45 = v33 + 48;
          if ( v44 != v35 )
          {
            v76 = 0LL;
            v77 = 0LL;
            if ( v44 )
              v76 = 1LL;
            else
              v77 = v33 + 48;
            if ( !v43
              || (v78 = *((_QWORD *)v33 + 2)) == 0
              || v43 >= *(_DWORD *)(v78 + 8)
              || (v45 = (char *)(v78 + 16LL * v43), *(_QWORD *)v45 != v35) )
            {
              v79 = *((_QWORD *)v33 + 2);
              v80 = *((unsigned int *)v33 + 16) + (unsigned __int64)*((unsigned int *)v33 + 18);
              if ( !v79 || (v45 = (char *)(v79 + 16), v76 >= v80) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v33, v35, v79, 2uLL);
              while ( *(_QWORD *)v45 != v35 )
              {
                if ( *(_QWORD *)v45 )
                {
                  if ( ++v76 == v80 )
                    goto LABEL_197;
                }
                else if ( !v77 )
                {
                  v77 = v45;
                }
                v45 += 16;
                if ( v45 == (char *)(v79 + 16LL * *(unsigned int *)(v79 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)&v45[-v79] >> 4;
            }
          }
          v46 = *((_DWORD *)v45 + 2) & 7 | (8 * (*((_DWORD *)v45 + 2) >> 3) - 8);
          *((_DWORD *)v45 + 2) = v46;
          if ( v46 >= 8 )
          {
            v155 = *((_DWORD *)v33 + 17);
            v60 = 65618;
            v61 = v46 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v133);
            v96 = v133.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v97 = KeGetCurrentIrql();
                if ( v97 <= 0xFu && v133.OldIrql <= 0xFu && v97 >= 2u )
                {
                  v98 = KeGetCurrentPrcb();
                  v99 = v98->SchedulerAssist;
                  v100 = ~(unsigned __int16)(-1LL << (v133.OldIrql + 1));
                  v26 = (v100 & v99[5]) == 0;
                  v99[5] &= v100;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(v98);
                }
              }
            }
            __writecr8(v96);
            LODWORD(v48) = v155;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v45);
          v48 = *((unsigned int *)v33 + 17);
          v49 = 0LL;
          v50 = *((_DWORD *)v33 + 16) <= 1u;
          v51 = 0LL;
          v141 = 0LL;
          v154 = v48;
          if ( !v50 )
            goto LABEL_63;
          if ( *((_DWORD *)v33 + 19) )
          {
            KeCaptureWaitChainHeadEx(v33 + 40, &v135, &v141);
            --*((_DWORD *)v33 + 19);
            *((_WORD *)v33 + 13) |= 0x80u;
            v52 = 1;
            v51 = v141;
            v49 = 0LL;
            v48 = v154;
          }
          else
          {
            if ( !*((_DWORD *)v33 + 18) )
            {
LABEL_63:
              v52 = 0;
              goto LABEL_64;
            }
            v101 = *((_QWORD *)v33 + 4);
            *((_QWORD *)v33 + 4) = 0LL;
            v135 = v101;
            v52 = *((_DWORD *)v33 + 18);
            *((_DWORD *)v33 + 18) = 0;
          }
LABEL_64:
          v53 = v52 - 1;
          v26 = v53 + *((_DWORD *)v33 + 16) == 0;
          *((_DWORD *)v33 + 16) += v53;
          if ( v26 )
            *((_WORD *)v33 + 12) = 0;
          if ( !*((_DWORD *)v33 + 19) && !*((_DWORD *)v33 + 18) )
            *((_WORD *)v33 + 13) &= 0xF9u;
          v140 = (unsigned __int8)v33[27];
          if ( v51 )
          {
            v102 = *((_DWORD *)v33 + 14) & 7;
            *((_QWORD *)v33 + 6) = v51;
            *((_DWORD *)v33 + 14) = v102 | 8;
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
                v55 = KeGetCurrentPrcb();
                v56 = (__int64)v55->SchedulerAssist;
                if ( v56 )
                {
                  if ( v55->NestingLevel <= 1u )
                  {
                    v103 = *(_DWORD *)(v56 + 24) - 1;
                    *(_DWORD *)(v56 + 24) = v103;
                    if ( !v103 )
                    {
                      KiRemoveSystemWorkPriorityKick(v55);
                      v48 = v154;
                      v49 = 0LL;
                    }
                  }
                }
                v57 = v133.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v104 = KeGetCurrentIrql();
                    if ( v104 <= 0xFu && v133.OldIrql <= 0xFu && v104 >= 2u )
                    {
                      v105 = KeGetCurrentPrcb();
                      v106 = v105->SchedulerAssist;
                      v56 = -1LL << (v133.OldIrql + 1);
                      v107 = ~(unsigned __int16)v56;
                      v26 = (v107 & v106[5]) == 0;
                      v106[5] &= v107;
                      if ( v26 )
                        KiRemoveSystemWorkPriorityKick(v105);
                      v48 = v154;
                      v49 = 0LL;
                    }
                  }
                }
                __writecr8(v57);
                v58 = 1;
                if ( v141 )
                  v58 = 3;
                v59 = 1;
                if ( !v135 )
                  goto LABEL_79;
                v108 = KeGetCurrentIrql();
                v150 = v108;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v108 <= 0xFu )
                {
                  v49 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
                  v56 = (-1LL << ((unsigned __int8)v108 + 1)) & 4;
                  v48 = (unsigned int)v56 | *(_DWORD *)(v49 + 20);
                  *(_DWORD *)(v49 + 20) = v48;
                }
                v109 = v135;
                v137 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v136 = v109;
                  v149 = *(_QWORD *)v109;
                  v148 = (volatile signed __int32 *)(v109 + 24);
                  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v109 + 24), v56, v48, v49);
                  v48 = v136;
                  v110 = (__int64 **)(v136 + 32);
                  v147 = (__int64 *)(v136 + 32);
                  *(_DWORD *)(v136 + 28) = 1;
                  v111 = *v110;
                  if ( *v110 != (__int64 *)v110 )
                    break;
LABEL_254:
                  _InterlockedAnd(v148, 0xFFFFFF7F);
                  v109 = v149;
                  if ( v149 == v135 )
                  {
                    v127 = KiRemoveBoostThread((__int64)v137, (__int64)v137->CurrentThread);
                    v128 = v140;
                    if ( v140 )
                    {
                      v59 = 2;
                      if ( v127 > (char)v140 )
                        v128 = v127;
                    }
                    if ( (v58 & 2) != 0 && v59 == 1 )
                      v128 = 1;
                    KiExitDispatcher((_DWORD)v137, 0, v59, v128, v150);
                    LODWORD(v48) = v154;
                    v135 = 0LL;
LABEL_79:
                    v60 = 65602;
                    v61 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v42 )
                      PerfLogExecutiveResourceRelease(v60, v33, v61, (unsigned int)v48);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v112 = v111;
                  v142 = v111;
                  v113 = *v111;
                  v146 = (__int64 *)v113;
                  v114 = (__int64 **)v112[1];
                  if ( *(__int64 **)(v113 + 8) != v112 || *v114 != v112 )
                    goto LABEL_268;
                  *v114 = (__int64 *)v113;
                  *(_QWORD *)(v113 + 8) = v114;
                  v115 = *((_BYTE *)v112 + 16);
                  if ( v115 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread(v137, v112, *((unsigned __int16 *)v112 + 9), 0LL) )
                    {
                      v26 = (*(_DWORD *)(v136 + 28))-- == 1;
                      if ( v26 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v115 == 2 )
                    {
                      *((_BYTE *)v112 + 17) = 5;
                      v134 = (volatile signed __int32 *)v112[3];
                      v143 = v134 + 2;
                      *v112 = 0LL;
                      v116 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v116 <= 0xFu )
                      {
                        v117 = KeGetCurrentPrcb()->SchedulerAssist;
                        v48 = (unsigned int)(-1LL << (v116 + 1)) & 4 | v117[5];
                        v112 = v142;
                        v117[5] = v48;
                      }
                      v144 = KeGetCurrentPrcb();
                      v118 = (__int64)v144->CurrentThread;
                      v145 = v118;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v118);
                        EtwTraceEnqueueWork(v121, v120, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v134, (__int64)v112, v48, v118);
                      v123 = v143;
                      v124 = v134;
                      if ( *(volatile signed __int32 **)v123 == v123
                        || *((_DWORD *)v134 + 10) >= *((_DWORD *)v134 + 11)
                        || *(volatile signed __int32 **)(v145 + 232) == v134 && *(_BYTE *)(v145 + 643) == 15 )
                      {
LABEL_246:
                        v49 = *((unsigned int *)v124 + 1);
                        v56 = (__int64)(v124 + 6);
                        *((_DWORD *)v124 + 1) = v49 + 1;
                        v48 = *((_QWORD *)v124 + 4);
                        if ( *(volatile signed __int32 **)v48 != v124 + 6 )
                          goto LABEL_268;
                        v126 = v142;
                        *v142 = v56;
                        v126[1] = v48;
                        *(_QWORD *)v48 = v126;
                        *((_QWORD *)v124 + 4) = v126;
                        if ( !(_DWORD)v49 && *(volatile signed __int32 **)v123 != v123 )
                        {
                          KiWakeOtherQueueWaiters((__int64)v144, (__int64)v124);
                          v124 = v134;
                        }
                      }
                      else
                      {
                        v125 = KiWakeQueueWaiter((__int64)v144, (__int64)v134, (__int64)v142, v122);
                        v124 = v134;
                        if ( !v125 )
                        {
                          v123 = v143;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd(v124, 0xFFFFFF7F);
                      v26 = (*(_DWORD *)(v136 + 28))-- == 1;
                      if ( v26 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread(v137, v112, 256LL, 0LL);
                  }
LABEL_253:
                  v111 = v146;
                  if ( v146 == v147 )
                    goto LABEL_254;
                }
              }
              Next = KxWaitForLockChainValid((__int64 *)&v133, v47, v48, 0LL);
              v48 = v154;
              v49 = 0LL;
            }
            v133.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v133, retaddr);
          v48 = v154;
          v49 = 0LL;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v33, v35);
      }
LABEL_82:
      v62 = *(unsigned __int8 *)(v19 + 48);
      *(_QWORD *)(v19 + 8) = 0LL;
      v63 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
      if ( v63 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v63);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v129 = KeGetCurrentIrql();
          if ( v129 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v129 >= 2u )
          {
            v130 = KeGetCurrentPrcb();
            v131 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
            v132 = v130->SchedulerAssist;
            v26 = (v131 & v132[5]) == 0;
            v132[5] &= v131;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v130);
          }
        }
      }
      __writecr8(v62);
      KeAbPostRelease(v19);
      return;
    }
    ExAcquirePushLockExclusiveEx(v29 + 104, 0LL);
    v69 = (char **)*((_QWORD *)P + 2);
    v70 = (PVOID *)*((_QWORD *)P + 3);
    if ( v69[1] != P + 16 || *v70 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v70 = v69;
    v69[1] = (char *)v70;
    if ( *(__int64 *)(v29 + 32) > 0x2000000 && (*(_DWORD *)(v29 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v29, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v29 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v74 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v75 = *(struct _KEVENT **)(v74 + 184);
        if ( v75 )
          KeSetEvent(v75, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v74 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v19);
    CcDeallocateBcb(P);
  }
}
