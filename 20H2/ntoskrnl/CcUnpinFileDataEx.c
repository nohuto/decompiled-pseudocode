/*
 * XREFs of CcUnpinFileDataEx @ 0x14029D060
 * Callers:
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x14024106C (CcMapDataForOverwrite.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x14029CB20 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPagesHelper @ 0x14029CC30 (CcGetDirtyPagesHelper.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x14067DE40 (CcUnpinData.c)
 *     CcMapData @ 0x140680C90 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140869C70 (CcUnpinDataForThread.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140242CEC (ExpReleaseFastMutexContended.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     CcDeductDirtyPages @ 0x14029A3CC (CcDeductDirtyPages.c)
 *     ExpFreeOwnerEntry @ 0x14029DA20 (ExpFreeOwnerEntry.c)
 *     CcDeallocateBcb @ 0x14029DA90 (CcDeallocateBcb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402FA77C (CcAdjustVacbLevelLockCount.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14030EA14 (CcInsertIntoCleanSharedCacheMapList.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     ExpFastResourceLegacyRelease @ 0x14038DF4C (ExpFastResourceLegacyRelease.c)
 *     KeCaptureWaitChainHeadEx @ 0x14038F930 (KeCaptureWaitChainHeadEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A953C (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // rdi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v12; // rcx
  signed __int32 v13; // edx
  ULONG_PTR *v14; // r15
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // r12
  int SessionId; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
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
  unsigned int v48; // r8d
  bool v49; // cc
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned __int64 v56; // rdi
  char v57; // r15
  int v58; // r14d
  unsigned int v59; // r14d
  unsigned int v60; // edi
  unsigned __int64 v61; // rdi
  signed __int32 v62; // eax
  struct _KEVENT *v63; // rcx
  KSPIN_LOCK *v64; // r12
  unsigned int v65; // edi
  unsigned int v66; // eax
  unsigned __int64 OldIrql; // rdi
  char **v68; // rdx
  PVOID *v69; // rcx
  _DWORD *v70; // rcx
  unsigned __int8 v71; // al
  struct _KTHREAD *v72; // rdx
  __int64 v73; // rdi
  struct _KEVENT *v74; // rcx
  unsigned __int64 v75; // r8
  char *v76; // r10
  __int64 v77; // rax
  ULONG_PTR v78; // r9
  unsigned __int64 v79; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *SchedulerAssist; // r9
  int v82; // eax
  int v83; // eax
  signed __int32 v84; // eax
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
  __int64 *v101; // rax
  int v102; // eax
  int v103; // eax
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  __int64 v108; // rcx
  _DWORD *v109; // r9
  __int64 *v110; // rcx
  _QWORD **v111; // rcx
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rax
  _QWORD *v115; // rcx
  char v116; // al
  unsigned __int8 v117; // cl
  _DWORD *v118; // r9
  _KTHREAD *v119; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v121; // rdx
  __int64 v122; // r9
  _QWORD *v123; // r10
  __int64 v124; // rcx
  char v125; // al
  int v126; // r9d
  _QWORD *v127; // r8
  _QWORD *v128; // rax
  char v129; // al
  unsigned int v130; // r9d
  unsigned __int8 v131; // al
  struct _KPRCB *v132; // r9
  int v133; // eax
  _DWORD *v134; // r8
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+30h] [rbp-89h] BYREF
  __int64 v136; // [rsp+48h] [rbp-71h]
  __int64 *v137; // [rsp+50h] [rbp-69h] BYREF
  __int64 *v138; // [rsp+58h] [rbp-61h]
  struct _KPRCB *v139; // [rsp+60h] [rbp-59h]
  int v140; // [rsp+68h] [rbp-51h]
  int v141; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned int v142; // [rsp+70h] [rbp-49h]
  __int64 v143; // [rsp+78h] [rbp-41h] BYREF
  _QWORD *v144; // [rsp+80h] [rbp-39h]
  _QWORD *v145; // [rsp+88h] [rbp-31h]
  struct _KPRCB *v146; // [rsp+90h] [rbp-29h]
  _KTHREAD *v147; // [rsp+98h] [rbp-21h]
  _QWORD *v148; // [rsp+A0h] [rbp-19h]
  _QWORD *v149; // [rsp+A8h] [rbp-11h]
  volatile signed __int32 *v150; // [rsp+B0h] [rbp-9h]
  __int64 *v151; // [rsp+B8h] [rbp-1h]
  __int64 v152; // [rsp+C0h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v155; // [rsp+120h] [rbp+67h]
  unsigned int v156; // [rsp+120h] [rbp+67h]
  unsigned int v157; // [rsp+120h] [rbp+67h]
  int v158; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 544));
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v138 = *(__int64 **)(v8 + 528);
  v155 = v8;
  if ( *(_QWORD *)(v8 + 168) )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C800, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v158 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v82 = v12[6];
          v12[6] = v82 + 1;
          if ( v82 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C800, 0x1Fu) )
      {
        v70 = CurrentPrcb->SchedulerAssist;
        if ( v70 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v83 = v70[6] - 1;
            v70[6] = v83;
            if ( !v83 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v158 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C800, CurrentIrql);
      }
      v13 = dword_140C4C800;
      while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          v84 = _InterlockedCompareExchange(&dword_140C4C800, v13 | 0x40000000, v13);
          v27 = v13 == v84;
          v13 = v84;
          if ( !v27 )
            continue;
        }
        KeYieldProcessorEx(&v158);
        v13 = dword_140C4C800;
      }
    }
    if ( *(_QWORD *)v9 )
      v14 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v9 + 60LL) & 0x3FF));
    else
      v14 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C800, retaddr);
    else
      dword_140C4C800 = 0;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v85 = v16[6] - 1;
        v16[6] = v85;
        if ( !v85 )
          KiRemoveSystemWorkPriorityKick(v15);
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
          v27 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v138 != *(__int64 **)(v14[22] + 8) )
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v8 = v155;
  }
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || (_DWORD)v3 == 1 )
    a2 = 1;
  v141 = 0;
  v17 = v8 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v19) = CurrentThread->AbEntrySummary;
  v140 = 0;
  if ( !(_BYTE)v19 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v21 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v17);
      goto LABEL_137;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v19) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v20 = v19;
  _BitScanForward((unsigned int *)&v19, (unsigned __int8)v19);
  v140 = v19;
  CurrentThread->AbEntrySummary = v20 & ~(1 << v19);
  v21 = (__int64)&CurrentThread->LockEntries[v19];
  if ( !v21 )
  {
LABEL_137:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( v17 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1537] + ((v17 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v21 + 40) = SessionId;
  *(_QWORD *)(v21 + 32) = v17 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v17, &v141);
  v27 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v27 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24, v23, v25, v26);
  v28 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v17, 0) )
    ExpAcquireFastMutexContended(v17, v21);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  *(_QWORD *)(v17 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v17 + 48) = v28;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x2047AuLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v64 = (KSPIN_LOCK *)v138;
      v65 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock(v64 + 16, &LockHandle);
      v30 = v155;
      CcDeductDirtyPages(v155, v65);
      v66 = 0;
      if ( *((_DWORD *)v64 + 124) > v65 )
        v66 = *((_DWORD *)v64 + 124) - v65;
      *((_DWORD *)v64 + 124) = v66;
      if ( !*(_DWORD *)(v155 + 112) && *(_DWORD *)(v155 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v155);
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
            v27 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      v30 = v155;
    }
    v31 = *((_DWORD *)P + 16);
  }
  else
  {
    v29 = *((_DWORD *)P + 16);
    if ( !v29 )
      KeBugCheckEx(0x34u, 0x443uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v30 = v155;
    v31 = v29 - 1;
    *((_DWORD *)P + 16) = v31;
  }
  if ( v31 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v17);
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
          v63 = *(struct _KEVENT **)(v32 + 184);
          if ( v63 )
            KeSetEvent(v63, 0, 0);
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
        v71 = KeGetCurrentIrql();
        v72 = KeGetCurrentThread();
        if ( v71 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v71, 2uLL, 0LL);
        if ( !v71 && (v72->MiscFlags & 0x400) == 0 && !v72->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v35 )
      {
        ExpFastResourceLegacyRelease((ULONG_PTR)v34);
      }
      else
      {
        v36 = (ULONG_PTR)KeGetCurrentThread();
        v135.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 96);
        v135.LockQueue.Next = 0LL;
        *(_QWORD *)&v135.OldIrql = 0LL;
        v37 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
        {
          v94 = KeGetCurrentPrcb()->SchedulerAssist;
          v94[5] |= (-1 << (v37 + 1)) & 4;
        }
        v135.OldIrql = v37;
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        if ( v39 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v95 = v39[6];
            v39[6] = v95 + 1;
            if ( v95 == -1 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v135, v34 + 96);
        }
        else
        {
          v40 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v34 + 12, (__int64)&v135);
          if ( v40 )
            KxWaitForLockOwnerShip((__int64)&v135, v40);
        }
        v41 = KeGetCurrentThread();
        v42 = *((_WORD *)v34 + 13);
        if ( ((v42 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v36 & 3) != 3 && (struct _KTHREAD *)v36 != v41 )
          KeBugCheckEx(0x16Eu, (ULONG_PTR)v34, (ULONG_PTR)v41, v36, 0LL);
        if ( (v42 & 0x80u) == 0 )
        {
          v137 = 0LL;
          v43 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
          if ( (v36 & 3) != 0 )
            v44 = 0;
          else
            v44 = *(unsigned __int8 *)(v36 + 649);
          v45 = *((_QWORD *)v34 + 6);
          v46 = v34 + 48;
          if ( v45 != v36 )
          {
            v75 = 0LL;
            v76 = 0LL;
            if ( v45 )
              v75 = 1LL;
            else
              v76 = v34 + 48;
            if ( !v44
              || (v77 = *((_QWORD *)v34 + 2)) == 0
              || v44 >= *(_DWORD *)(v77 + 8)
              || (v46 = (char *)(v77 + 16LL * v44), *(_QWORD *)v46 != v36) )
            {
              v78 = *((_QWORD *)v34 + 2);
              v79 = *((unsigned int *)v34 + 16) + (unsigned __int64)*((unsigned int *)v34 + 18);
              if ( !v78 || (v46 = (char *)(v78 + 16), v75 >= v79) )
LABEL_197:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v34, v36, v78, 2uLL);
              while ( *(_QWORD *)v46 != v36 )
              {
                if ( *(_QWORD *)v46 )
                {
                  if ( ++v75 == v79 )
                    goto LABEL_197;
                }
                else if ( !v76 )
                {
                  v76 = v46;
                }
                v46 += 16;
                if ( v46 == (char *)(v78 + 16LL * *(unsigned int *)(v78 + 8)) )
                  goto LABEL_197;
              }
              KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)&v46[-v78] >> 4;
            }
          }
          v47 = *((_DWORD *)v46 + 2) & 7 | (8 * (*((_DWORD *)v46 + 2) >> 3) - 8);
          *((_DWORD *)v46 + 2) = v47;
          if ( v47 >= 8 )
          {
            v157 = *((_DWORD *)v34 + 17);
            v59 = 65618;
            v60 = v47 >> 3;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
            v96 = v135.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v97 = KeGetCurrentIrql();
                if ( v97 <= 0xFu && v135.OldIrql <= 0xFu && v97 >= 2u )
                {
                  v98 = KeGetCurrentPrcb();
                  v99 = v98->SchedulerAssist;
                  v100 = ~(unsigned __int16)(-1LL << (v135.OldIrql + 1));
                  v27 = (v100 & v99[5]) == 0;
                  v99[5] &= v100;
                  if ( v27 )
                    KiRemoveSystemWorkPriorityKick(v98);
                }
              }
            }
            __writecr8(v96);
            v48 = v157;
            goto LABEL_80;
          }
          ExpFreeOwnerEntry(v46);
          v48 = *((_DWORD *)v34 + 17);
          v49 = *((_DWORD *)v34 + 16) <= 1u;
          v50 = 0LL;
          v143 = 0LL;
          v156 = v48;
          if ( !v49 )
            goto LABEL_63;
          if ( *((_DWORD *)v34 + 19) )
          {
            KeCaptureWaitChainHeadEx(v34 + 40, &v137, &v143);
            --*((_DWORD *)v34 + 19);
            *((_WORD *)v34 + 13) |= 0x80u;
            v51 = 1;
            v50 = v143;
            v48 = v156;
          }
          else
          {
            if ( !*((_DWORD *)v34 + 18) )
            {
LABEL_63:
              v51 = 0;
              goto LABEL_64;
            }
            v101 = (__int64 *)*((_QWORD *)v34 + 4);
            *((_QWORD *)v34 + 4) = 0LL;
            v137 = v101;
            v51 = *((_DWORD *)v34 + 18);
            *((_DWORD *)v34 + 18) = 0;
          }
LABEL_64:
          v52 = v51 - 1;
          v27 = v52 + *((_DWORD *)v34 + 16) == 0;
          *((_DWORD *)v34 + 16) += v52;
          if ( v27 )
            *((_WORD *)v34 + 12) = 0;
          if ( !*((_DWORD *)v34 + 19) && !*((_DWORD *)v34 + 18) )
            *((_WORD *)v34 + 13) &= 0xF9u;
          v142 = (unsigned __int8)v34[27];
          if ( v50 )
          {
            v102 = *((_DWORD *)v34 + 14) & 7;
            *((_QWORD *)v34 + 6) = v50;
            *((_DWORD *)v34 + 14) = v102 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(&v135);
            Next = v135.LockQueue.Next;
            if ( !v135.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v135.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&v135) == &v135 )
              {
LABEL_74:
                v54 = KeGetCurrentPrcb();
                v55 = v54->SchedulerAssist;
                if ( v55 )
                {
                  if ( v54->NestingLevel <= 1u )
                  {
                    v103 = v55[6] - 1;
                    v55[6] = v103;
                    if ( !v103 )
                    {
                      KiRemoveSystemWorkPriorityKick(v54);
                      v48 = v156;
                    }
                  }
                }
                v56 = v135.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v104 = KeGetCurrentIrql();
                    if ( v104 <= 0xFu && v135.OldIrql <= 0xFu && v104 >= 2u )
                    {
                      v105 = KeGetCurrentPrcb();
                      v106 = v105->SchedulerAssist;
                      v107 = ~(unsigned __int16)(-1LL << (v135.OldIrql + 1));
                      v27 = (v107 & v106[5]) == 0;
                      v106[5] &= v107;
                      if ( v27 )
                        KiRemoveSystemWorkPriorityKick(v105);
                      v48 = v156;
                    }
                  }
                }
                __writecr8(v56);
                v57 = 1;
                if ( v143 )
                  v57 = 3;
                v58 = 1;
                if ( !v137 )
                  goto LABEL_79;
                v108 = KeGetCurrentIrql();
                v152 = v108;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v108 <= 0xFu )
                {
                  v109 = KeGetCurrentPrcb()->SchedulerAssist;
                  v109[5] |= (-1 << (v108 + 1)) & 4;
                }
                v110 = v137;
                v139 = KeGetCurrentPrcb();
                while ( 1 )
                {
                  v138 = v110;
                  v151 = (__int64 *)*v110;
                  v150 = (volatile signed __int32 *)(v110 + 3);
                  KiAcquireKobjectLockSafe(v110 + 3);
                  v111 = (_QWORD **)(v138 + 4);
                  v149 = v138 + 4;
                  *((_DWORD *)v138 + 7) = 1;
                  v112 = *v111;
                  if ( *v111 != v111 )
                    break;
LABEL_254:
                  _InterlockedAnd(v150, 0xFFFFFF7F);
                  v110 = v151;
                  if ( v151 == v137 )
                  {
                    v129 = KiRemoveBoostThread(v139, v139->CurrentThread);
                    v130 = v142;
                    if ( v142 )
                    {
                      v58 = 2;
                      if ( v129 > (char)v142 )
                        v130 = v129;
                    }
                    if ( (v57 & 2) != 0 && v58 == 1 )
                      v130 = 1;
                    KiExitDispatcher((__int64)v139, 0LL, v58, v130, v152);
                    v48 = v156;
                    v137 = 0LL;
LABEL_79:
                    v59 = 65602;
                    v60 = 0;
LABEL_80:
                    __incgsdword(0x8670u);
                    if ( v43 )
                      PerfLogExecutiveResourceRelease(v59, v34, v60, v48);
                    goto LABEL_82;
                  }
                }
                while ( 1 )
                {
                  v113 = (__int64)v112;
                  v144 = v112;
                  v114 = (_QWORD *)*v112;
                  v148 = v114;
                  v115 = *(_QWORD **)(v113 + 8);
                  if ( v114[1] != v113 || *v115 != v113 )
                    goto LABEL_268;
                  *v115 = v114;
                  v114[1] = v115;
                  v116 = *(_BYTE *)(v113 + 16);
                  if ( v116 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread((__int64)v139, v113, *(unsigned __int16 *)(v113 + 18), 0LL) )
                    {
                      v27 = (*((_DWORD *)v138 + 7))-- == 1;
                      if ( v27 )
                        goto LABEL_254;
                    }
                  }
                  else
                  {
                    if ( v116 == 2 )
                    {
                      *(_BYTE *)(v113 + 17) = 5;
                      v136 = *(_QWORD *)(v113 + 24);
                      v145 = (_QWORD *)(v136 + 8);
                      *(_QWORD *)v113 = 0LL;
                      v117 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v117 <= 0xFu )
                      {
                        v118 = KeGetCurrentPrcb()->SchedulerAssist;
                        v118[5] |= (-1LL << (v117 + 1)) & 4;
                      }
                      v146 = KeGetCurrentPrcb();
                      v119 = v146->CurrentThread;
                      v147 = v119;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v119);
                        EtwTraceEnqueueWork(v122, v121, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe(v136);
                      v123 = v145;
                      v124 = v136;
                      if ( (_QWORD *)*v123 == v123
                        || *(_DWORD *)(v136 + 40) >= *(_DWORD *)(v136 + 44)
                        || v147->Queue == (_DISPATCHER_HEADER *volatile)v136 && v147->WaitReason == 15 )
                      {
LABEL_246:
                        v126 = *(_DWORD *)(v124 + 4);
                        *(_DWORD *)(v124 + 4) = v126 + 1;
                        v127 = *(_QWORD **)(v124 + 32);
                        if ( *v127 != v124 + 24 )
                          goto LABEL_268;
                        v128 = v144;
                        *v144 = v124 + 24;
                        v128[1] = v127;
                        *v127 = v128;
                        *(_QWORD *)(v124 + 32) = v128;
                        if ( !v126 && (_QWORD *)*v123 != v123 )
                        {
                          KiWakeOtherQueueWaiters((__int64)v146, v124);
                          v124 = v136;
                        }
                      }
                      else
                      {
                        v125 = KiWakeQueueWaiter(v146, v136, v144);
                        v124 = v136;
                        if ( !v125 )
                        {
                          v123 = v145;
                          goto LABEL_246;
                        }
                      }
                      _InterlockedAnd((volatile signed __int32 *)v124, 0xFFFFFF7F);
                      v27 = (*((_DWORD *)v138 + 7))-- == 1;
                      if ( v27 )
                        goto LABEL_254;
                      goto LABEL_253;
                    }
                    KiTryUnwaitThread((__int64)v139, v113, 256LL, 0LL);
                  }
LABEL_253:
                  v112 = v148;
                  if ( v148 == v149 )
                    goto LABEL_254;
                }
              }
              Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v135);
              v48 = v156;
            }
            v135.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
            goto LABEL_74;
          }
          KiReleaseQueuedSpinLockInstrumented(&v135, retaddr);
          v48 = v156;
          goto LABEL_74;
        }
        ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v34, v36, &v135);
      }
LABEL_82:
      v61 = *(unsigned __int8 *)(v17 + 48);
      *(_QWORD *)(v17 + 8) = 0LL;
      v62 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
      if ( v62 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v62);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v131 = KeGetCurrentIrql();
          if ( v131 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v131 >= 2u )
          {
            v132 = KeGetCurrentPrcb();
            v133 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
            v134 = v132->SchedulerAssist;
            v27 = (v133 & v134[5]) == 0;
            v134[5] &= v133;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v132);
          }
        }
      }
      __writecr8(v61);
      KeAbPostRelease(v17);
      return;
    }
    ExAcquirePushLockExclusiveEx(v30 + 104, 0LL);
    v68 = (char **)*((_QWORD *)P + 2);
    v69 = (PVOID *)*((_QWORD *)P + 3);
    if ( v68[1] != P + 16 || *v69 != P + 16 )
LABEL_268:
      __fastfail(3u);
    *v69 = v68;
    v68[1] = (char *)v69;
    if ( *(__int64 *)(v30 + 32) > 0x2000000 && (*(_DWORD *)(v30 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v30, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v30 + 104, 0LL);
    if ( *((_QWORD *)P + 23) )
    {
      v73 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v74 = *(struct _KEVENT **)(v73 + 184);
        if ( v74 )
          KeSetEvent(v74, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v73 + 544));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v17);
    CcDeallocateBcb(P);
  }
}
