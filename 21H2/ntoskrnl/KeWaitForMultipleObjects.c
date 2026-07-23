/*
 * XREFs of KeWaitForMultipleObjects @ 0x1402F03E0
 * Callers:
 *     PopFxProcessWorkPool @ 0x140284DE8 (PopFxProcessWorkPool.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140292A20 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403046D0 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     PopSleepDeviceList @ 0x140383364 (PopSleepDeviceList.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x1403C0860 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x140535980 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14053D528 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14053D820 (MiWaitForAsynchronousFlushes.c)
 *     MiWaitForFreePagesToZero @ 0x1405501CC (MiWaitForFreePagesToZero.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 *     PfGenerateTrace @ 0x140776A34 (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408E7DD0 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942C90 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x1409AFB90 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B0EA0 (MiZeroAllPageFiles.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x14022AAF4 (KiWaitSatisfyMutant.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x140522D34 (KiSatisfyThreadWait.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  PKWAIT_BLOCK WaitBlock; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r11
  unsigned __int8 WaitIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v14; // r14
  __int64 v15; // r9
  struct _KPRCB *v16; // rcx
  __int64 ThreadTimerDelay; // rdx
  struct _KPRCB *v18; // r10
  volatile UCHAR *p_BlockState; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v20; // r11
  unsigned __int64 v21; // r8
  ULONG v22; // r14d
  __int64 v23; // rbx
  __int64 v24; // r9
  int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // ebx
  unsigned __int64 v29; // r15
  NTSTATUS v30; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v31; // r11
  struct _KPRCB *v33; // rdi
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r13
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  volatile __int64 WaitStatus; // r15
  ULONG_PTR AbWaitObject; // rcx
  struct _KWAIT_BLOCK *v41; // rbx
  volatile signed __int32 *v42; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  _KWAIT_STATUS_REGISTER v47; // al
  struct _KPRCB *v48; // rbx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  bool v52; // zf
  unsigned __int8 v53; // r10
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  unsigned __int8 v56; // cl
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  unsigned __int64 v69; // rax
  char v70; // r14
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // rdi
  _KLOCK_ENTRY *v76; // rbx
  __int64 v77; // rax
  _KLOCK_ENTRY *v78; // rbx
  NTSTATUS v79; // ebx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct _KPRCB *v83; // rbx
  _DWORD *v84; // rcx
  int v85; // eax
  _DWORD *v86; // rcx
  int v87; // eax
  _DWORD *v88; // rcx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  __int64 v97; // rax
  struct _KPRCB *v98; // rdi
  _DWORD *v99; // rcx
  int v100; // eax
  _DWORD *v101; // rcx
  int v102; // eax
  _DWORD *v103; // rcx
  int v104; // eax
  struct _KPRCB *v105; // rcx
  _DWORD *v106; // rdx
  int v107; // eax
  struct _KPRCB *v108; // rcx
  _DWORD *v109; // rdx
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r9
  _DWORD *v112; // r8
  int v113; // eax
  unsigned __int8 v114; // [rsp+40h] [rbp-89h]
  int v115; // [rsp+44h] [rbp-85h]
  PVOID *__attribute__((__org_arrdim(0,0))) v116; // [rsp+48h] [rbp-81h]
  __int64 v117; // [rsp+50h] [rbp-79h]
  unsigned __int64 v118; // [rsp+58h] [rbp-71h]
  __int64 v119; // [rsp+58h] [rbp-71h]
  __int64 v120; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-61h]
  int v123; // [rsp+70h] [rbp-59h] BYREF
  KWAIT_REASON v124; // [rsp+74h] [rbp-55h]
  _DWORD v125[4]; // [rsp+78h] [rbp-51h] BYREF
  int v126; // [rsp+88h] [rbp-41h] BYREF
  int v127; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v128; // [rsp+90h] [rbp-39h] BYREF
  int v129; // [rsp+94h] [rbp-35h] BYREF
  int v130; // [rsp+98h] [rbp-31h] BYREF
  PVOID v131; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v132; // [rsp+A8h] [rbp-21h] BYREF
  struct _KTHREAD *v133; // [rsp+B0h] [rbp-19h]
  __int64 v134; // [rsp+B8h] [rbp-11h]
  _BYTE v135[8]; // [rsp+C0h] [rbp-9h]

  WaitBlock = WaitBlockArray;
  v124 = WaitReason;
  v116 = Object;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v133 = CurrentThread;
  if ( WaitBlockArray )
  {
    if ( Count <= 0x40 )
      goto LABEL_5;
LABEL_133:
    KeBugCheck(0xCu);
  }
  if ( Count > 3 )
    goto LABEL_133;
  WaitBlock = CurrentThread->WaitBlock;
LABEL_5:
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (ULONG_PTR *)Object,
             WaitReason,
             WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v131 = 0LL;
  v134 = 0LL;
  v114 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v114 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
      Object = (PVOID *)((-1LL << (CurrentIrql + 1)) & 4);
      *(_QWORD *)&WaitType = (unsigned int)Object | *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL);
      *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = WaitType;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v115 = 1;
    }
    else
    {
      v115 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v115 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v123 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v64 = SchedulerAssist[6];
          SchedulerAssist[6] = v64 + 1;
          if ( v64 == -1 )
LABEL_139:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v54 = CurrentPrcb->SchedulerAssist;
        if ( v54 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v65 = v54[6] - 1;
            v54[6] = v65;
            if ( !v65 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v123, (__int64)Object, *(__int64 *)&WaitType, *(__int64 *)&WaitReason);
        while ( CurrentThread->ThreadLock );
        v55 = CurrentPrcb->SchedulerAssist;
        if ( v55 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v66 = v55[6];
            v55[6] = v66 + 1;
            if ( v66 == -1 )
              goto LABEL_139;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          v52 = (v68[5] & 0xFFFF0003) == 0;
          v68[5] &= 0xFFFF0003;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v67);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitType = *(unsigned int *)(*(_QWORD *)&WaitReason + 20LL);
        Object = (PVOID *)(WaitType | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4u);
        *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = (_DWORD)Object;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v124;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_120;
      goto LABEL_20;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v79 = 257;
      goto LABEL_121;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_120:
      v79 = 192;
LABEL_121:
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
      return v79;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v79 = 257;
      goto LABEL_121;
    }
LABEL_20:
    CurrentThread->WaitBlockFill6[68] = 5;
    v15 = 0LL;
    CurrentThread->WaitReason = v14;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    ThreadTimerDelay = (__int64)v16->SchedulerAssist;
    if ( ThreadTimerDelay )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v63 = *(_DWORD *)(ThreadTimerDelay + 24) - 1;
        *(_DWORD *)(ThreadTimerDelay + 24) = v63;
        if ( !v63 )
        {
          KiRemoveSystemWorkPriorityKick(v16);
          v15 = 0LL;
        }
      }
    }
    v18 = KeGetCurrentPrcb();
    p_BlockState = &WaitBlock->BlockState;
    v20 = v116;
    v21 = 0LL;
    v117 = (__int64)v18;
    v22 = 0;
    v118 = 0LL;
    do
    {
      v125[0] = 0;
      v23 = (__int64)v20[v22];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v22;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v23;
      if ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(v125, ThreadTimerDelay, v21, v15);
          while ( (*(_DWORD *)v23 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) );
        v20 = v116;
        v15 = 0LL;
        v21 = v118;
        v18 = (struct _KPRCB *)v117;
      }
      if ( (*(_BYTE *)v23 & 0x7F) == 2 )
      {
        if ( (*(_BYTE *)(v23 + 48) & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v21, v22);
          v118 = v21;
        }
        if ( *(int *)(v23 + 4) > 0
          || CurrentThread == *(struct _KTHREAD **)(v23 + 40) && *(_BYTE *)(v23 + 2) == v18->DpcRoutineActive )
        {
          if ( *(_DWORD *)(v23 + 4) == 0x80000000 )
          {
            _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
            v83 = KeGetCurrentPrcb();
            v127 = 0;
            v84 = v83->SchedulerAssist;
            if ( !v84 )
              goto LABEL_186;
            if ( v83->NestingLevel > 1u )
              goto LABEL_186;
            v85 = v84[6];
            v84[6] = v85 + 1;
            if ( v85 != -1 )
              goto LABEL_186;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v83);
              while ( 1 )
              {
LABEL_186:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait(v117, (_DWORD)CurrentThread, v114, (_DWORD)WaitBlock, v22);
                  RtlRaiseStatus(-1073741423);
                }
                v86 = v83->SchedulerAssist;
                if ( v86 )
                {
                  if ( v83->NestingLevel <= 1u )
                  {
                    v87 = v86[6] - 1;
                    v86[6] = v87;
                    if ( !v87 )
                      KiRemoveSystemWorkPriorityKick(v83);
                  }
                }
                do
                  KeYieldProcessorEx(&v127, ThreadTimerDelay, v21, v15);
                while ( CurrentThread->ThreadLock );
                v88 = v83->SchedulerAssist;
                if ( v88 )
                {
                  if ( v83->NestingLevel <= 1u )
                  {
                    v89 = v88[6];
                    v88[6] = v89 + 1;
                    if ( v89 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v50 = KeGetCurrentPrcb();
          v126 = 0;
          v51 = v50->SchedulerAssist;
          if ( v51 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v80 = v51[6];
              v51[6] = v80 + 1;
              if ( v80 == -1 )
LABEL_175:
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v61 = v50->SchedulerAssist;
            if ( v61 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v81 = v61[6] - 1;
                v61[6] = v81;
                if ( !v81 )
                  KiRemoveSystemWorkPriorityKick(v50);
              }
            }
            do
              KeYieldProcessorEx(&v126, ThreadTimerDelay, v21, v15);
            while ( CurrentThread->ThreadLock );
            v62 = v50->SchedulerAssist;
            if ( v62 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v82 = v62[6];
                v62[6] = v82 + 1;
                if ( v82 == -1 )
                  goto LABEL_175;
              }
            }
          }
          v36 = v117;
          v35 = 0LL;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v22;
            CurrentThread->AbWaitObject = 0LL;
            v52 = (*(_DWORD *)(v23 + 4))-- == 1;
            if ( v52 )
            {
              KiWaitSatisfyMutant(v23, (__int64)CurrentThread, v117);
              v35 = 0LL;
            }
          }
          goto LABEL_44;
        }
      }
      else if ( *(int *)(v23 + 4) > 0 )
      {
        v33 = KeGetCurrentPrcb();
        v129 = 0;
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v93 = v34[6];
            v34[6] = v93 + 1;
            if ( v93 == -1 )
LABEL_209:
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v57 = v33->SchedulerAssist;
          if ( v57 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v94 = v57[6] - 1;
              v57[6] = v94;
              if ( !v94 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          do
            KeYieldProcessorEx(&v129, ThreadTimerDelay, v21, v15);
          while ( CurrentThread->ThreadLock );
          v58 = v33->SchedulerAssist;
          if ( v58 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v95 = v58[6];
              v58[6] = v95 + 1;
              if ( v95 == -1 )
                goto LABEL_209;
            }
          }
        }
        v35 = 0LL;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v22;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*(_BYTE *)v23 & 7) == 1 )
          {
            *(_DWORD *)(v23 + 4) = 0;
          }
          else if ( (*(_BYTE *)v23 & 0x7F) == 5 )
          {
            --*(_DWORD *)(v23 + 4);
          }
        }
        v36 = v117;
LABEL_44:
        _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
        goto LABEL_45;
      }
      ThreadTimerDelay = *(_QWORD *)(v23 + 16);
      if ( *(_QWORD *)ThreadTimerDelay != v23 + 8 )
LABEL_52:
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = ThreadTimerDelay;
      *(_QWORD *)(p_BlockState - 17) = v23 + 8;
      *(_QWORD *)ThreadTimerDelay = p_BlockState - 17;
      *(_QWORD *)(v23 + 16) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
      ++v22;
      p_BlockState += 48;
    }
    while ( v22 < Count );
    v24 = QuadPart;
    v25 = v115;
    v26 = QuadPart;
    if ( v115 != 2 )
      break;
    ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
    v45 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    v26 = QuadPart;
    if ( CurrentThread->WaitMode
      && !CurrentThread->WaitBlock[3].SpareLong
      && !CurrentThread->WaitIrql
      && !CurrentThread->ApcState.InProgressFlags
      && (_DWORD)ThreadTimerDelay )
    {
      v26 = QuadPart + ThreadTimerDelay;
    }
LABEL_55:
    if ( v45 > v26 )
      goto LABEL_81;
    v25 = v115;
LABEL_29:
    v27 = 0;
    CurrentThread->WaitBlockCount = Count;
    v28 = 0;
    v29 = 0LL;
    if ( v21 )
    {
      do
      {
        _BitScanForward64(&v69, v21);
        v70 = v69;
        v125[1] = v69;
        v119 = v21 & ~(1LL << v69);
        v71 = KeAbPreAcquire((ULONG_PTR)v20[v69], 0LL);
        v72 = v71;
        if ( !v71 )
          break;
        v29 |= 1LL << v70;
        KeAbPreWait(v71);
        v21 = v119;
        v20 = v116;
        v73 = v72 - *(_QWORD *)(v72 - 16LL * *(unsigned __int8 *)(v72 + 24) + 800);
        v74 = v28++;
        v135[v74] = (2
                   * (((((unsigned __int128)(v73 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                    + ((__int64)((unsigned __int128)(v73 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
      }
      while ( v119 );
      CurrentThread = v133;
      v27 = 0;
      LODWORD(v24) = QuadPart;
      v25 = v115;
    }
    v30 = KiCommitThreadWait((_DWORD)CurrentThread, (_DWORD)WaitBlock, v25, v24, (__int64)&v131);
    v31 = v116;
    if ( v131 )
    {
      *(_QWORD *)&WaitType = 0LL;
      Object = (PVOID *)v29;
      if ( v29 )
      {
        while ( 1 )
        {
          _BitScanForward64((unsigned __int64 *)&WaitReason, (unsigned __int64)Object);
          Object = (PVOID *)((unsigned __int64)Object & ~(1LL << WaitReason));
          v125[2] = WaitReason;
          if ( v131 == v116[*(_QWORD *)&WaitReason] )
            break;
          *(_QWORD *)&WaitType = (unsigned int)(WaitType + 1);
          if ( !Object )
            goto LABEL_165;
        }
        v29 &= ~(1LL << WaitReason);
        v75 = (unsigned int)WaitType;
        v76 = &KeGetCurrentThread()->LockEntries[v135[WaitType] >> 1];
        KeAbPreAcquire((ULONG_PTR)v116[*(_QWORD *)&WaitReason], &v76->TreeNode);
        v76->AcquiredByte |= 1u;
        if ( v75 >= 6 )
          _report_rangecheckfailure();
        v31 = v116;
        v135[v75] = 0;
        v27 = 0;
      }
LABEL_165:
      CurrentThread->AbWaitObject = 0LL;
    }
    for ( ; v29; ++v27 )
    {
      _BitScanForward64((unsigned __int64 *)&v77, v29);
      v125[3] = v77;
      v29 &= ~(1LL << v77);
      v120 = (unsigned int)v77;
      if ( !v135[v27] )
        ++v27;
      v78 = &KeGetCurrentThread()->LockEntries[v135[v27] >> 1];
      KeAbPreAcquire((ULONG_PTR)v31[(unsigned int)v77], &v78->TreeNode);
      KeAbPostReleaseEx((ULONG_PTR)v116[v120], (ULONG_PTR)v78);
      v31 = v116;
    }
    if ( v30 != 256 )
      return v30;
    v114 = 0;
    v53 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v53 <= 0xFu )
    {
      *(_QWORD *)&WaitReason = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitType = *(unsigned int *)(*(_QWORD *)&WaitReason + 20LL);
      Object = (PVOID *)(WaitType | ~((unsigned __int8)(1LL << (v53 + 1)) - 1) & 4u);
      *(_DWORD *)(*(_QWORD *)&WaitReason + 20LL) = (_DWORD)Object;
    }
    CurrentThread->WaitIrql = v53;
  }
  if ( !v115 )
    goto LABEL_29;
  if ( QuadPart )
  {
    v45 = MEMORY[0xFFFFF78000000014];
    goto LABEL_55;
  }
LABEL_81:
  v48 = KeGetCurrentPrcb();
  v128 = 0;
  v49 = v48->SchedulerAssist;
  if ( v49 )
  {
    if ( v48->NestingLevel <= 1u )
    {
      v90 = v49[6];
      v49[6] = v90 + 1;
      if ( v90 == -1 )
LABEL_199:
        KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v59 = v48->SchedulerAssist;
    if ( v59 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v91 = v59[6] - 1;
        v59[6] = v91;
        if ( !v91 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    do
      KeYieldProcessorEx(&v128, ThreadTimerDelay, v21, v24);
    while ( CurrentThread->ThreadLock );
    v60 = v48->SchedulerAssist;
    if ( v60 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v92 = v60[6];
        v60[6] = v92 + 1;
        if ( v92 == -1 )
          goto LABEL_199;
      }
    }
  }
  v36 = v117;
  v35 = 0LL;
  if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
  {
    CurrentThread->WaitStatus = 258LL;
    CurrentThread->AbWaitObject = 0LL;
  }
LABEL_45:
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v37 = KeGetCurrentPrcb();
  v38 = (__int64)v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      v96 = *(_DWORD *)(v38 + 24) - 1;
      *(_DWORD *)(v38 + 24) = v96;
      if ( !v96 )
      {
        KiRemoveSystemWorkPriorityKick(v37);
        v35 = 0LL;
      }
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v97 = KeAbPreAcquire(AbWaitObject, 0LL);
    if ( v97 )
      *(_BYTE *)(v97 + 26) |= 1u;
    v35 = 0LL;
  }
  if ( v22 )
  {
    v41 = &WaitBlock[(unsigned __int8)v22];
    do
    {
      if ( WaitBlock->BlockState < 5u )
      {
        v42 = (volatile signed __int32 *)WaitBlock->Object;
        KiAcquireKobjectLockSafe(v42);
        if ( WaitBlock->BlockState == 4 )
        {
          Flink = WaitBlock->WaitListEntry.Flink;
          Blink = WaitBlock->WaitListEntry.Blink;
          if ( (PKWAIT_BLOCK)WaitBlock->WaitListEntry.Flink->Blink != WaitBlock
            || (PKWAIT_BLOCK)Blink->Flink != WaitBlock )
          {
            goto LABEL_52;
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        _InterlockedAnd(v42, 0xFFFFFF7F);
      }
      ++WaitBlock;
    }
    while ( WaitBlock != v41 );
    v35 = 0LL;
  }
  v46 = CurrentThread->WaitIrql;
  v47.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v47.Flags & 0x38) == 0 )
  {
    if ( v114 )
    {
      KiCheckForThreadDispatch(v36, v46);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v110 = KeGetCurrentIrql();
          if ( v110 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v110 >= 2u )
          {
            v111 = KeGetCurrentPrcb();
            v112 = v111->SchedulerAssist;
            v113 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v52 = (v113 & v112[5]) == 0;
            v112[5] &= v113;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v111);
          }
        }
      }
      __writecr8(v46);
    }
    return WaitStatus;
  }
  if ( (v47.Flags & 0x18) != 0 )
  {
    if ( (v47.Flags & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    v132 = 0LL;
    v98 = KeGetCurrentPrcb();
    v130 = 0;
    v99 = v98->SchedulerAssist;
    if ( v99 )
    {
      if ( v98->NestingLevel <= 1u )
      {
        v100 = v99[6];
        v99[6] = v100 + 1;
        if ( v100 == -1 )
LABEL_227:
          KiRemoveSystemWorkPriorityKick(v98);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 48), 0LL) )
    {
      v101 = v98->SchedulerAssist;
      if ( v101 )
      {
        if ( v98->NestingLevel <= 1u )
        {
          v102 = v101[6] - 1;
          v101[6] = v102;
          if ( !v102 )
            KiRemoveSystemWorkPriorityKick(v98);
        }
      }
      do
        KeYieldProcessorEx(&v130, v38, v21, v35);
      while ( *(_QWORD *)(v36 + 48) );
      v103 = v98->SchedulerAssist;
      if ( v103 )
      {
        if ( v98->NestingLevel <= 1u )
        {
          v104 = v103[6];
          v103[6] = v104 + 1;
          if ( v104 == -1 )
            goto LABEL_227;
        }
      }
    }
    if ( !*(_QWORD *)(v36 + 16) )
      KiSelectNextThread(v36, (__int64)&v132);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 48), 0LL);
    v105 = KeGetCurrentPrcb();
    v106 = v105->SchedulerAssist;
    if ( v106 )
    {
      if ( v105->NestingLevel <= 1u )
      {
        v107 = v106[6] - 1;
        v106[6] = v107;
        if ( !v107 )
          KiRemoveSystemWorkPriorityKick(v105);
      }
    }
    KiProcessDeferredReadyList(v36, (__int64)&v132, v46);
    return WaitStatus;
  }
  KiCheckForThreadDispatch(v36, 1u);
  KiDeliverApc(0, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v108 = KeGetCurrentPrcb();
      v109 = v108->SchedulerAssist;
      v52 = (v109[5] & 0xFFFF0001) == 0;
      v109[5] &= 0xFFFF0001;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick(v108);
    }
  }
  __writecr8(0LL);
  return WaitStatus;
}
