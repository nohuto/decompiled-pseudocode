/*
 * XREFs of CcUnpinFileDataEx @ 0x1402305D0
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x140230088 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402301A0 (CcGetDirtyPagesHelper.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x1402FFAB8 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1405EE050 (CcUnpinData.c)
 *     CcMapData @ 0x140631E10 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140862F30 (CcUnpinDataForThread.c)
 * Callees:
 *     CcDeductDirtyPages @ 0x14022BD4C (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ExpFreeOwnerEntry @ 0x140230F90 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x140231000 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x140232538 (CcAdjustVacbLevelLockCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FF48C (CcInsertIntoCleanSharedCacheMapList.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     ExpFastResourceLegacyRelease @ 0x14038AF1C (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038C900 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A53AC (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3, _DWORD *SchedulerAssist)
{
  ULONG_PTR v4; // rdi
  __int64 v7; // rdi
  struct _KEVENT *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v13; // rcx
  signed __int32 v14; // edx
  ULONG_PTR *v15; // r15
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 v18; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // r12
  int SessionId; // eax
  bool v24; // zf
  unsigned __int8 v25; // r15
  int v26; // eax
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rdi
  __int16 v30; // cx
  char *v31; // rsi
  __int16 v32; // cx
  ULONG_PTR v33; // r14
  unsigned __int8 v34; // r10
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  _QWORD *v37; // rdx
  struct _KTHREAD *v38; // r8
  __int16 v39; // cx
  bool v40; // r12
  unsigned int v41; // ecx
  __int64 v42; // rax
  char *v43; // rdx
  unsigned int v44; // edi
  char v45; // dl
  unsigned int v46; // r8d
  bool v47; // cc
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  __int64 Next; // rax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  unsigned __int64 v54; // rdi
  char v55; // r15
  int v56; // r14d
  unsigned int v57; // r14d
  unsigned int v58; // edi
  unsigned __int64 v59; // rdi
  unsigned __int32 v60; // eax
  struct _KEVENT *v61; // rcx
  KSPIN_LOCK *v62; // r12
  unsigned int v63; // edi
  unsigned int v64; // eax
  unsigned __int64 OldIrql; // rdi
  char **v66; // rdx
  PVOID *v67; // rcx
  _DWORD *v68; // rcx
  unsigned __int8 v69; // al
  struct _KTHREAD *v70; // rdx
  __int64 v71; // rdi
  struct _KEVENT *v72; // rcx
  unsigned __int64 v73; // r8
  char *v74; // r10
  __int64 v75; // rax
  ULONG_PTR v76; // r9
  unsigned __int64 v77; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v79; // eax
  int v80; // eax
  signed __int32 v81; // eax
  int v82; // eax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int64 v92; // r15
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  __int64 *v97; // rax
  int v98; // eax
  int v99; // eax
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r10
  _DWORD *v102; // r9
  int v103; // eax
  __int64 v104; // rcx
  _DWORD *v105; // r9
  __int64 *v106; // rcx
  _QWORD **v107; // rcx
  _QWORD *v108; // rax
  _QWORD *v109; // rdx
  __int64 v110; // rax
  _QWORD *v111; // rcx
  char v112; // al
  unsigned __int8 v113; // cl
  _DWORD *v114; // r9
  _KTHREAD *v115; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v117; // rdx
  __int64 v118; // r9
  _QWORD *v119; // r10
  __int64 v120; // rcx
  char v121; // al
  int v122; // r9d
  _QWORD *v123; // r8
  _QWORD *v124; // rax
  char v125; // al
  int v126; // r9d
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r9
  int v129; // eax
  _DWORD *v130; // r8
  struct _KLOCK_QUEUE_HANDLE v131; // [rsp+30h] [rbp-89h] BYREF
  __int64 v132; // [rsp+48h] [rbp-71h]
  __int64 *v133; // [rsp+50h] [rbp-69h] BYREF
  __int64 *v134; // [rsp+58h] [rbp-61h]
  struct _KPRCB *v135; // [rsp+60h] [rbp-59h]
  int v136; // [rsp+68h] [rbp-51h]
  int v137; // [rsp+6Ch] [rbp-4Dh]
  int v138; // [rsp+70h] [rbp-49h]
  __int64 v139; // [rsp+78h] [rbp-41h] BYREF
  _QWORD *v140; // [rsp+80h] [rbp-39h]
  _QWORD *v141; // [rsp+88h] [rbp-31h]
  struct _KPRCB *v142; // [rsp+90h] [rbp-29h]
  _KTHREAD *v143; // [rsp+98h] [rbp-21h]
  _QWORD *v144; // [rsp+A0h] [rbp-19h]
  _QWORD *v145; // [rsp+A8h] [rbp-11h]
  volatile signed __int32 *v146; // [rsp+B0h] [rbp-9h]
  __int64 *v147; // [rsp+B8h] [rbp-1h]
  __int64 v148; // [rsp+C0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v151; // [rsp+120h] [rbp+67h]
  unsigned int v152; // [rsp+120h] [rbp+67h]
  unsigned int v153; // [rsp+120h] [rbp+67h]
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
  v134 = *(__int64 **)(v9 + 528);
  v151 = v9;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C8C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v154 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v79 = v13[6];
          v13[6] = v79 + 1;
          if ( v79 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C8C0, 0x1Fu) )
      {
        v68 = CurrentPrcb->SchedulerAssist;
        if ( v68 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v80 = v68[6] - 1;
            v68[6] = v80;
            if ( !v80 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v154 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C8C0, CurrentIrql);
      }
      v14 = dword_140C4C8C0;
      while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v14 & 0x40000000) == 0 )
        {
          v81 = _InterlockedCompareExchange(&dword_140C4C8C0, v14 | 0x40000000, v14);
          v24 = v14 == v81;
          v14 = v81;
          if ( !v24 )
            continue;
        }
        KeYieldProcessorEx(&v154);
        v14 = dword_140C4C8C0;
      }
    }
    if ( *(_QWORD *)v10 )
      v15 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
    else
      v15 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C8C0, retaddr);
    else
      dword_140C4C8C0 = 0;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v82 = v17[6] - 1;
        v17[6] = v82;
        if ( !v82 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v83 = KeGetCurrentIrql();
        if ( v83 <= 0xFu && CurrentIrql <= 0xFu && v83 >= 2u )
        {
          v84 = KeGetCurrentPrcb();
          SchedulerAssist = v84->SchedulerAssist;
          v85 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v85 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v85;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v134 != *(__int64 **)(v15[22] + 8) )
      KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = v151;
  }
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || (_DWORD)v4 == 1 )
    a2 = 1;
  v137 = 0;
  v18 = v9 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v20) = CurrentThread->AbEntrySummary;
  v136 = 0;
  if ( !(_BYTE)v20 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v22 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v18, 0LL, SchedulerAssist);
      goto LABEL_137;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v20) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v21 = v20;
  _BitScanForward((unsigned int *)&v20, (unsigned __int8)v20);
  v136 = v20;
  CurrentThread->AbEntrySummary = v21 & ~(1 << v20);
  v22 = (__int64)&CurrentThread->LockEntries[v20];
  if ( !v22 )
  {
LABEL_137:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( v18 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1537] + ((v18 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v22 + 40) = SessionId;
  *(_QWORD *)(v22 + 32) = v18 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v25 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v18, 0) )
    ExpAcquireFastMutexContended(v18);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v18 + 48) = v25;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x20474uLL, v4, 0LL, 0LL);
    if ( P[2] )
    {
      v62 = (KSPIN_LOCK *)v134;
      v63 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock(v62 + 16, &LockHandle);
      v27 = v151;
      CcDeductDirtyPages(v151, v63);
      v64 = 0;
      if ( *((_DWORD *)v62 + 124) > v63 )
        v64 = *((_DWORD *)v62 + 124) - v63;
      *((_DWORD *)v62 + 124) = v64;
      if ( !*(_DWORD *)(v151 + 112) && *(_DWORD *)(v151 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v151);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v86 = KeGetCurrentIrql();
          if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
          {
            v87 = KeGetCurrentPrcb();
            v88 = v87->SchedulerAssist;
            v89 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v89 & v88[5]) == 0;
            v88[5] &= v89;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v87);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v27 = v151;
    }
    v28 = *((_DWORD *)P + 16);
  }
  else
  {
    v26 = *((_DWORD *)P + 16);
    if ( !v26 )
      KeBugCheckEx(0x34u, 0x43DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v27 = v151;
    v28 = v26 - 1;
    *((_DWORD *)P + 16) = v28;
  }
  if ( v28 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v18);
  }
  else
  {
    if ( P[2] )
    {
      if ( *((_QWORD *)P + 23) )
      {
        v29 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
        {
          v61 = *(struct _KEVENT **)(v29 + 184);
          if ( v61 )
            KeSetEvent(v61, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v29 + 544));
        }
        *((_QWORD *)P + 23) = 0LL;
        *((_QWORD *)P + 7) = 0LL;
      }
      if ( a2 )
        goto LABEL_82;
      v30 = *((_WORD *)P + 49);
      v31 = P + 72;
      if ( (v30 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v31, 0LL, 0LL);
      v32 = v30 & 1;
      if ( v32 )
      {
        v69 = KeGetCurrentIrql();
        v70 = KeGetCurrentThread();
        if ( v69 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v69, 2uLL, 0LL);
        if ( !v69 && (v70->MiscFlags & 0x400) == 0 && !v70->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v32 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v31);
      }
      else
      {
        v33 = (ULONG_PTR)KeGetCurrentThread();
        v131.LockQueue.Lock = (unsigned __int64 *volatile)(v31 + 96);
        v131.LockQueue.Next = 0LL;
        *(_QWORD *)&v131.OldIrql = 0LL;
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
        {
          v90 = KeGetCurrentPrcb()->SchedulerAssist;
          v90[5] |= (-1 << (v34 + 1)) & 4;
        }
        v131.OldIrql = v34;
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        if ( v36 )
        {
          if ( v35->NestingLevel <= 1u )
          {
            v91 = v36[6];
            v36[6] = v91 + 1;
            if ( v91 == -1 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v131, v31 + 96);
        }
        else
        {
          v37 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v31 + 12, (__int64)&v131);
          if ( v37 )
            KxWaitForLockOwnerShip((__int64)&v131, v37);
        }
        v38 = KeGetCurrentThread();
        v39 = *((_WORD *)v31 + 13);
        if ( ((v39 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v33 & 3) != 3 && (struct _KTHREAD *)v33 != v38 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v31, (ULONG_PTR)v38, v33, 0LL);
        if ( (v39 & 0x80u) == 0 )
        {
          v133 = 0LL;
          v40 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v33 & 3) != 0 )
            v41 = 0;
          else
            v41 = *(unsigned __int8 *)(v33 + 649);
          v42 = *((_QWORD *)v31 + 6);
          v43 = v31 + 48;
          if ( v42 != v33 )
          {
            v73 = 0LL;
            v74 = 0LL;
            if ( v42 )
              v73 = 1LL;
            else
              v74 = v31 + 48;
            if ( !v41
              || (v75 = *((_QWORD *)v31 + 2)) == 0
              || v41 >= *(_DWORD *)(v75 + 8)
              || (v43 = (char *)(v75 + 16LL * v41), *(_QWORD *)v43 != v33) )
            {
              v76 = *((_QWORD *)v31 + 2);
              v77 = *((unsigned int *)v31 + 16) + (unsigned __int64)*((unsigned int *)v31 + 18);
              if ( !v76 || (v43 = (char *)(v76 + 16), v73 >= v77) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v31, v33, v76, 2uLL);
              while ( *(_QWORD *)v43 != v33 )
              {
                if ( *(_QWORD *)v43 )
                {
                  if ( ++v73 == v77 )
                    goto LABEL_197;
                }
                else if ( !v74 )
                {
                  v74 = v43;
                }
                v43 += 16;
                if ( v43 == (char *)(v76 + 16LL * *(unsigned int *)(v76 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)&v43[-v76] >> 4;
            }
          }
          v44 = *((_DWORD *)v43 + 2) & 7 | (8 * (*((_DWORD *)v43 + 2) >> 3) - 8);
          *((_DWORD *)v43 + 2) = v44;
          if ( v44 >= 8 )
          {
            v153 = *((_DWORD *)v31 + 17);
            v57 = 65618;
            v58 = v44 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v131);
            v92 = v131.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v93 = KeGetCurrentIrql();
                if ( v93 <= 0xFu && v131.OldIrql <= 0xFu && v93 >= 2u )
                {
                  v94 = KeGetCurrentPrcb();
                  v95 = v94->SchedulerAssist;
                  v96 = ~(unsigned __int16)(-1LL << (v131.OldIrql + 1));
                  v24 = (v96 & v95[5]) == 0;
                  v95[5] &= v96;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(v94);
                }
              }
            }
            __writecr8(v92);
            v46 = v153;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v43);
          v46 = *((_DWORD *)v31 + 17);
          v47 = *((_DWORD *)v31 + 16) <= 1u;
          v48 = 0LL;
          v139 = 0LL;
          v152 = v46;
          if ( !v47 )
            goto LABEL_63;
          if ( *((_DWORD *)v31 + 19) )
          {
            KeCaptureWaitChainHeadEx(v31 + 40, &v133, &v139);
            --*((_DWORD *)v31 + 19);
            *((_WORD *)v31 + 13) |= 0x80u;
            v49 = 1;
            v48 = v139;
            v46 = v152;
          }
          else
          {
            if ( !*((_DWORD *)v31 + 18) )
            {
LABEL_63:
              v49 = 0;
              goto LABEL_64;
            }
            v97 = (__int64 *)*((_QWORD *)v31 + 4);
            *((_QWORD *)v31 + 4) = 0LL;
            v133 = v97;
            v49 = *((_DWORD *)v31 + 18);
            *((_DWORD *)v31 + 18) = 0;
          }
LABEL_64:
          v50 = v49 - 1;
          v24 = v50 + *((_DWORD *)v31 + 16) == 0;
          *((_DWORD *)v31 + 16) += v50;
          if ( v24 )
            *((_WORD *)v31 + 12) = 0;
          if ( !*((_DWORD *)v31 + 19) && !*((_DWORD *)v31 + 18) )
            *((_WORD *)v31 + 13) &= 0xF9u;
          v138 = (unsigned __int8)v31[27];
          if ( v48 )
          {
            v98 = *((_DWORD *)v31 + 14) & 7;
            *((_QWORD *)v31 + 6) = v48;
            *((_DWORD *)v31 + 14) = v98 | 8;
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
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                if ( v53 )
                {
                  if ( v52->NestingLevel <= 1u )
                  {
                    v99 = v53[6] - 1;
                    v53[6] = v99;
                    if ( !v99 )
                    {
                      KiRemoveSystemWorkPriorityKick(v52);
                      v46 = v152;
                    }
                  }
                }
                v54 = v131.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v100 = KeGetCurrentIrql();
                    if ( v100 <= 0xFu && v131.OldIrql <= 0xFu && v100 >= 2u )
                    {
                      v101 = KeGetCurrentPrcb();
                      v102 = v101->SchedulerAssist;
                      v103 = ~(unsigned __int16)(-1LL << (v131.OldIrql + 1));
                      v24 = (v103 & v102[5]) == 0;
                      v102[5] &= v103;
                      if ( v24 )
                        KiRemoveSystemWorkPriorityKick(v101);
                      v46 = v152;
                    }
                  }
                }
                __writecr8(v54);
                v55 = 1;
                if ( v139 )
                  v55 = 3;
                v56 = 1;
                if ( !v133 )
                  goto LABEL_79;
                v104 = KeGetCurrentIrql();
                v148 = v104;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v104 <= 0xFu )
                {
                  v105 = KeGetCurrentPrcb()->SchedulerAssist;
                  v105[5] |= (-1 << (v104 + 1)) & 4;
                }
                v106 = v133;
                v135 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v134 = v106;
                  v147 = (__int64 *)*v106;
                  v146 = (volatile signed __int32 *)(v106 + 3);
                  KiAcquireKobjectLockSafe(v106 + 3);
                  v107 = (_QWORD **)(v134 + 4);
                  v145 = v134 + 4;
                  *((_DWORD *)v134 + 7) = 1;
                  v108 = *v107;
                  if ( *v107 != v107 )
                    break;
LABEL_254:
                  _InterlockedAnd(v146, 0xFFFFFF7F);
                  v106 = v147;
                  if ( v147 == v133 )
                  {
                    v125 = KiRemoveBoostThread(v135, v135->CurrentThread);
                    v126 = v138;
                    if ( v138 )
                    {
                      v56 = 2;
                      if ( v125 > (char)v138 )
                        v126 = v125;
                    }
                    if ( (v55 & 2) != 0 && v56 == 1 )
                      v126 = 1;
                    KiExitDispatcher((_DWORD)v135, 0, v56, v126, v148);
                    v46 = v152;
                    v133 = 0LL;
LABEL_79:
                    v57 = 65602;
                    v58 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v40 )
                      PerfLogExecutiveResourceRelease(v57, v31, v58, v46);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v109 = v108;
                  v140 = v108;
                  v110 = *v108;
                  v144 = (_QWORD *)v110;
                  v111 = (_QWORD *)v109[1];
                  if ( *(_QWORD **)(v110 + 8) != v109 || (_QWORD *)*v111 != v109 )
                    goto LABEL_268;
                  *v111 = v110;
                  *(_QWORD *)(v110 + 8) = v111;
                  v112 = *((_BYTE *)v109 + 16);
                  if ( v112 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread(v135, v109, *((unsigned __int16 *)v109 + 9), 0LL) )
                    {
                      v24 = (*((_DWORD *)v134 + 7))-- == 1;
                      if ( v24 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v112 == 2 )
                    {
                      *((_BYTE *)v109 + 17) = 5;
                      v132 = v109[3];
                      v141 = (_QWORD *)(v132 + 8);
                      *v109 = 0LL;
                      v113 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v113 <= 0xFu )
                      {
                        v114 = KeGetCurrentPrcb()->SchedulerAssist;
                        v109 = v140;
                        v114[5] |= (-1LL << (v113 + 1)) & 4;
                      }
                      v142 = KeGetCurrentPrcb();
                      v115 = v142->CurrentThread;
                      v143 = v115;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v115, v109);
                        EtwTraceEnqueueWork(v118, v117, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v132);
                      v119 = v141;
                      v120 = v132;
                      if ( (_QWORD *)*v119 == v119
                        || *(_DWORD *)(v132 + 40) >= *(_DWORD *)(v132 + 44)
                        || v143->Queue == (_DISPATCHER_HEADER *volatile)v132 && v143->WaitReason == 15 )
                      {
LABEL_246:
                        v122 = *(_DWORD *)(v120 + 4);
                        *(_DWORD *)(v120 + 4) = v122 + 1;
                        v123 = *(_QWORD **)(v120 + 32);
                        if ( *v123 != v120 + 24 )
                          goto LABEL_268;
                        v124 = v140;
                        *v140 = v120 + 24;
                        v124[1] = v123;
                        *v123 = v124;
                        *(_QWORD *)(v120 + 32) = v124;
                        if ( !v122 && (_QWORD *)*v119 != v119 )
                        {
                          KiWakeOtherQueueWaiters(v142, v120);
                          v120 = v132;
                        }
                      }
                      else
                      {
                        v121 = KiWakeQueueWaiter(v142, v132, v140);
                        v120 = v132;
                        if ( !v121 )
                        {
                          v119 = v141;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd((volatile signed __int32 *)v120, 0xFFFFFF7F);
                      v24 = (*((_DWORD *)v134 + 7))-- == 1;
                      if ( v24 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread(v135, v109, 256LL, 0LL);
                  }
LABEL_253:
                  v108 = v144;
                  if ( v144 == v145 )
                    goto LABEL_254;
                }
              }
              Next = KxWaitForLockChainValid(&v131, v45);
              v46 = v152;
            }
            v131.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v131, retaddr);
          v46 = v152;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v31, v33);
      }
LABEL_82:
      v59 = *(unsigned __int8 *)(v18 + 48);
      *(_QWORD *)(v18 + 8) = 0LL;
      v60 = _InterlockedCompareExchange((volatile signed __int32 *)v18, 1, 0);
      if ( v60 )
        ExpReleaseFastMutexContended(v18, v60);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v127 = KeGetCurrentIrql();
          if ( v127 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v127 >= 2u )
          {
            v128 = KeGetCurrentPrcb();
            v129 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
            v130 = v128->SchedulerAssist;
            v24 = (v129 & v130[5]) == 0;
            v130[5] &= v129;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v128);
          }
        }
      }
      __writecr8(v59);
      KeAbPostRelease(v18);
      return;
    }
    ExAcquirePushLockExclusiveEx(v27 + 104, 0LL);
    v66 = (char **)*((_QWORD *)P + 2);
    v67 = (PVOID *)*((_QWORD *)P + 3);
    if ( v66[1] != P + 16 || *v67 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v67 = v66;
    v66[1] = (char *)v67;
    if ( *(__int64 *)(v27 + 32) > 0x2000000 && (*(_DWORD *)(v27 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v27, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v27 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v71 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v72 = *(struct _KEVENT **)(v71 + 184);
        if ( v72 )
          KeSetEvent(v72, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v71 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v18);
    CcDeallocateBcb(P);
  }
}
