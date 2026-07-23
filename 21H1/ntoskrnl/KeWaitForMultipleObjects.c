/*
 * XREFs of KeWaitForMultipleObjects @ 0x140243AA0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402BE4DC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     PopFxProcessWorkPool @ 0x1402D79B4 (PopFxProcessWorkPool.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140309030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopSleepDeviceList @ 0x1403805CC (PopSleepDeviceList.c)
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403B2B50 (CcAsyncReadWorker.c)
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B50D0 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1403B9130 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x1403BC7D0 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x14052FC20 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1405377C8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x140537AC0 (MiWaitForAsynchronousFlushes.c)
 *     MiWaitForFreePagesToZero @ 0x14054A49C (MiWaitForFreePagesToZero.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405F7600 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x140663CFC (CmpDoFileWrite.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 *     PfGenerateTrace @ 0x1407629D4 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408E35E0 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093E2B0 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409AC2A0 (MiZeroAllPageFiles.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x1402CDA98 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x14051CFF4 (KiSatisfyThreadWait.c)
 */

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
  _DWORD *v13; // rcx
  unsigned __int8 v14; // r14
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v17; // r10
  volatile UCHAR *p_BlockState; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v19; // r11
  unsigned __int64 v20; // r8
  ULONG v21; // r14d
  volatile signed __int32 *v22; // rbx
  PVOID *v23; // rdx
  int v24; // r9d
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
  struct _KPRCB *v36; // r13
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  volatile __int64 WaitStatus; // r15
  ULONG_PTR AbWaitObject; // rcx
  struct _KWAIT_BLOCK *v41; // rbx
  volatile signed __int32 *v42; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  _KWAIT_STATUS_REGISTER v48; // al
  struct _KPRCB *v49; // rbx
  _DWORD *v50; // rcx
  struct _KPRCB *v51; // rdi
  _DWORD *v52; // rcx
  bool v53; // zf
  unsigned __int8 v54; // r10
  _DWORD *v55; // rcx
  _DWORD *v56; // rcx
  unsigned __int8 v57; // cl
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  int v64; // eax
  _DWORD *SchedulerAssist; // r9
  int v66; // eax
  int v67; // eax
  int v68; // eax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  _DWORD *v71; // r9
  unsigned __int64 v72; // rax
  char v73; // r14
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // r8d
  unsigned __int64 v79; // rdx
  __int64 v80; // r9
  unsigned __int64 v81; // rdi
  _KLOCK_ENTRY *v82; // rbx
  __int64 v83; // rax
  _DWORD *v84; // r9
  NTSTATUS v85; // ebx
  int v86; // eax
  int v87; // eax
  int v88; // eax
  struct _KPRCB *v89; // rbx
  _DWORD *v90; // rcx
  int v91; // eax
  _DWORD *v92; // rcx
  int v93; // eax
  _DWORD *v94; // rcx
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  __int64 v103; // rax
  struct _KPRCB *v104; // rdi
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  struct _KPRCB *v111; // rcx
  _DWORD *v112; // rdx
  int v113; // eax
  struct _KPRCB *v114; // rcx
  _DWORD *v115; // rdx
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r9
  _DWORD *v118; // r8
  int v119; // eax
  unsigned __int8 v120; // [rsp+40h] [rbp-89h]
  int v121; // [rsp+44h] [rbp-85h]
  struct _KPRCB *v123; // [rsp+50h] [rbp-79h]
  unsigned __int64 v124; // [rsp+58h] [rbp-71h]
  __int64 v125; // [rsp+58h] [rbp-71h]
  __int64 v126; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-61h]
  int v129; // [rsp+70h] [rbp-59h] BYREF
  KWAIT_REASON v130; // [rsp+74h] [rbp-55h]
  _DWORD v131[4]; // [rsp+78h] [rbp-51h] BYREF
  int v132; // [rsp+88h] [rbp-41h] BYREF
  int v133; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v134; // [rsp+90h] [rbp-39h] BYREF
  int v135; // [rsp+94h] [rbp-35h] BYREF
  int v136; // [rsp+98h] [rbp-31h] BYREF
  PVOID v137; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v138; // [rsp+A8h] [rbp-21h] BYREF
  struct _KTHREAD *v139; // [rsp+B0h] [rbp-19h]
  __int64 v140; // [rsp+B8h] [rbp-11h]
  _BYTE v141[8]; // [rsp+C0h] [rbp-9h]

  WaitBlock = WaitBlockArray;
  v130 = WaitReason;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v139 = CurrentThread;
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
             (_DWORD)Object,
             WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v137 = 0LL;
  v140 = 0LL;
  v120 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v120 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v121 = 1;
    }
    else
    {
      v121 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v121 = 0;
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
      v129 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v66 = v13[6];
          v13[6] = v66 + 1;
          if ( v66 == -1 )
LABEL_139:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v55 = CurrentPrcb->SchedulerAssist;
        if ( v55 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v67 = v55[6] - 1;
            v55[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v129);
        while ( CurrentThread->ThreadLock );
        v56 = CurrentPrcb->SchedulerAssist;
        if ( v56 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v68 = v56[6];
            v56[6] = v68 + 1;
            if ( v68 == -1 )
              goto LABEL_139;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v53 = (v70[5] & 0xFFFF0003) == 0;
          v70[5] &= 0xFFFF0003;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
      {
        v71 = KeGetCurrentPrcb()->SchedulerAssist;
        v71[5] |= ~((unsigned __int8)(1LL << (v57 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v130;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_120;
      goto LABEL_20;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v85 = 257;
      goto LABEL_121;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_120:
      v85 = 192;
LABEL_121:
      KiReleaseThreadLockSafe(CurrentThread);
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
      return v85;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v85 = 257;
      goto LABEL_121;
    }
LABEL_20:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v14;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v64 = v16[6] - 1;
        v16[6] = v64;
        if ( !v64 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v17 = KeGetCurrentPrcb();
    p_BlockState = &WaitBlock->BlockState;
    v19 = Object;
    v20 = 0LL;
    v123 = v17;
    v21 = 0;
    v124 = 0LL;
    do
    {
      v131[0] = 0;
      v22 = (volatile signed __int32 *)v19[v21];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v21;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v22;
      if ( _interlockedbittestandset(v22, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(v131);
          while ( (*v22 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v22, 7u) );
        v19 = Object;
        v20 = v124;
        v17 = v123;
      }
      if ( (*(_BYTE *)v22 & 0x7F) == 2 )
      {
        if ( (v22[12] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v20, v21);
          v124 = v20;
        }
        if ( *((int *)v22 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v22 + 5) && *((_BYTE *)v22 + 2) == v17->DpcRoutineActive )
        {
          if ( *((_DWORD *)v22 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v22, 0xFFFFFF7F);
            v89 = KeGetCurrentPrcb();
            v133 = 0;
            v90 = v89->SchedulerAssist;
            if ( !v90 )
              goto LABEL_186;
            if ( v89->NestingLevel > 1u )
              goto LABEL_186;
            v91 = v90[6];
            v90[6] = v91 + 1;
            if ( v91 != -1 )
              goto LABEL_186;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v89);
              while ( 1 )
              {
LABEL_186:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait((_DWORD)v123, (_DWORD)CurrentThread, v120, (_DWORD)WaitBlock, v21);
                  RtlRaiseStatus(-1073741423);
                }
                v92 = v89->SchedulerAssist;
                if ( v92 )
                {
                  if ( v89->NestingLevel <= 1u )
                  {
                    v93 = v92[6] - 1;
                    v92[6] = v93;
                    if ( !v93 )
                      KiRemoveSystemWorkPriorityKick(v89);
                  }
                }
                do
                  KeYieldProcessorEx(&v133);
                while ( CurrentThread->ThreadLock );
                v94 = v89->SchedulerAssist;
                if ( v94 )
                {
                  if ( v89->NestingLevel <= 1u )
                  {
                    v95 = v94[6];
                    v94[6] = v95 + 1;
                    if ( v95 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v51 = KeGetCurrentPrcb();
          v132 = 0;
          v52 = v51->SchedulerAssist;
          if ( v52 )
          {
            if ( v51->NestingLevel <= 1u )
            {
              v86 = v52[6];
              v52[6] = v86 + 1;
              if ( v86 == -1 )
LABEL_175:
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v62 = v51->SchedulerAssist;
            if ( v62 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v87 = v62[6] - 1;
                v62[6] = v87;
                if ( !v87 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            do
              KeYieldProcessorEx(&v132);
            while ( CurrentThread->ThreadLock );
            v63 = v51->SchedulerAssist;
            if ( v63 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v88 = v63[6];
                v63[6] = v88 + 1;
                if ( v88 == -1 )
                  goto LABEL_175;
              }
            }
          }
          v36 = v123;
          v35 = 0LL;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v21;
            CurrentThread->AbWaitObject = 0LL;
            v53 = (*((_DWORD *)v22 + 1))-- == 1;
            if ( v53 )
            {
              KiWaitSatisfyMutant(v22, CurrentThread, v123, 0LL);
              v35 = 0LL;
            }
          }
          goto LABEL_44;
        }
      }
      else if ( *((int *)v22 + 1) > 0 )
      {
        v33 = KeGetCurrentPrcb();
        v135 = 0;
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v99 = v34[6];
            v34[6] = v99 + 1;
            if ( v99 == -1 )
LABEL_209:
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v58 = v33->SchedulerAssist;
          if ( v58 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v100 = v58[6] - 1;
              v58[6] = v100;
              if ( !v100 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          do
            KeYieldProcessorEx(&v135);
          while ( CurrentThread->ThreadLock );
          v59 = v33->SchedulerAssist;
          if ( v59 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v101 = v59[6];
              v59[6] = v101 + 1;
              if ( v101 == -1 )
                goto LABEL_209;
            }
          }
        }
        v35 = 0LL;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v21;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*(_BYTE *)v22 & 7) == 1 )
          {
            *((_DWORD *)v22 + 1) = 0;
          }
          else if ( (*(_BYTE *)v22 & 0x7F) == 5 )
          {
            --*((_DWORD *)v22 + 1);
          }
        }
        v36 = v123;
LABEL_44:
        _InterlockedAnd(v22, 0xFFFFFF7F);
        goto LABEL_45;
      }
      v23 = (PVOID *)*((_QWORD *)v22 + 2);
      if ( *v23 != v22 + 2 )
LABEL_52:
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = v23;
      *(_QWORD *)(p_BlockState - 17) = v22 + 2;
      *v23 = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v22 + 2) = p_BlockState - 17;
      _InterlockedAnd(v22, 0xFFFFFF7F);
      ++v21;
      p_BlockState += 48;
    }
    while ( v21 < Count );
    v24 = QuadPart;
    v25 = v121;
    v26 = QuadPart;
    if ( v121 != 2 )
      break;
    ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
    v46 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
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
    if ( v46 > v26 )
      goto LABEL_81;
    v25 = v121;
LABEL_29:
    v27 = 0;
    CurrentThread->WaitBlockCount = Count;
    v28 = 0;
    v29 = 0LL;
    if ( v20 )
    {
      do
      {
        _BitScanForward64(&v72, v20);
        v73 = v72;
        v131[1] = v72;
        v125 = v20 & ~(1LL << v72);
        v74 = KeAbPreAcquire((ULONG_PTR)v19[v72]);
        v75 = v74;
        if ( !v74 )
          break;
        v29 |= 1LL << v73;
        KeAbPreWait(v74);
        v20 = v125;
        v19 = Object;
        v76 = v75 - *(_QWORD *)(v75 - 16LL * *(unsigned __int8 *)(v75 + 24) + 800);
        v77 = v28++;
        v141[v77] = (2
                   * (((((unsigned __int128)(v76 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                    + ((__int64)((unsigned __int128)(v76 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
      }
      while ( v125 );
      CurrentThread = v139;
      v27 = 0;
      v24 = QuadPart;
      v25 = v121;
    }
    v30 = KiCommitThreadWait((_DWORD)CurrentThread, (_DWORD)WaitBlock, v25, v24, (__int64)&v137);
    v31 = Object;
    if ( v137 )
    {
      v78 = 0;
      v79 = v29;
      if ( v29 )
      {
        while ( 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v80, v79);
          v79 &= ~(1LL << v80);
          v131[2] = v80;
          if ( v137 == Object[v80] )
            break;
          ++v78;
          if ( !v79 )
            goto LABEL_165;
        }
        v29 &= ~(1LL << v80);
        v81 = v78;
        v82 = &KeGetCurrentThread()->LockEntries[v141[v78] >> 1];
        KeAbPreAcquire((ULONG_PTR)Object[v80]);
        v82->AcquiredByte |= 1u;
        if ( v81 >= 6 )
          _report_rangecheckfailure();
        v31 = Object;
        v141[v81] = 0;
        v27 = 0;
      }
LABEL_165:
      CurrentThread->AbWaitObject = 0LL;
    }
    for ( ; v29; ++v27 )
    {
      _BitScanForward64((unsigned __int64 *)&v83, v29);
      v131[3] = v83;
      v29 &= ~(1LL << v83);
      v126 = (unsigned int)v83;
      if ( !v141[v27] )
        ++v27;
      KeAbPreAcquire((ULONG_PTR)v31[(unsigned int)v83]);
      KeAbPostReleaseEx((ULONG_PTR)Object[v126]);
      v31 = Object;
    }
    if ( v30 != 256 )
      return v30;
    v120 = 0;
    v54 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
    {
      v84 = KeGetCurrentPrcb()->SchedulerAssist;
      v84[5] |= ~((unsigned __int8)(1LL << (v54 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v54;
  }
  if ( !v121 )
    goto LABEL_29;
  if ( QuadPart )
  {
    v46 = MEMORY[0xFFFFF78000000014];
    goto LABEL_55;
  }
LABEL_81:
  v49 = KeGetCurrentPrcb();
  v134 = 0;
  v50 = v49->SchedulerAssist;
  if ( v50 )
  {
    if ( v49->NestingLevel <= 1u )
    {
      v96 = v50[6];
      v50[6] = v96 + 1;
      if ( v96 == -1 )
LABEL_199:
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v60 = v49->SchedulerAssist;
    if ( v60 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v97 = v60[6] - 1;
        v60[6] = v97;
        if ( !v97 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
    do
      KeYieldProcessorEx(&v134);
    while ( CurrentThread->ThreadLock );
    v61 = v49->SchedulerAssist;
    if ( v61 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v98 = v61[6];
        v61[6] = v98 + 1;
        if ( v98 == -1 )
          goto LABEL_199;
      }
    }
  }
  v36 = v123;
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
      v102 = *(_DWORD *)(v38 + 24) - 1;
      *(_DWORD *)(v38 + 24) = v102;
      if ( !v102 )
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
    v103 = KeAbPreAcquire(AbWaitObject);
    if ( v103 )
      *(_BYTE *)(v103 + 26) |= 1u;
    v35 = 0LL;
  }
  if ( v21 )
  {
    v41 = &WaitBlock[(unsigned __int8)v21];
    do
    {
      if ( WaitBlock->BlockState < 5u )
      {
        v42 = (volatile signed __int32 *)WaitBlock->Object;
        KiAcquireKobjectLockSafe(v42, v38, v20, v35);
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
  v47 = CurrentThread->WaitIrql;
  v48.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v48.Flags & 0x38) == 0 )
  {
    if ( v120 )
    {
      KiCheckForThreadDispatch(v36, (unsigned __int8)v47);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v116 = KeGetCurrentIrql();
          if ( v116 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v116 >= 2u )
          {
            v117 = KeGetCurrentPrcb();
            v118 = v117->SchedulerAssist;
            v119 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
            v53 = (v119 & v118[5]) == 0;
            v118[5] &= v119;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(v117);
          }
        }
      }
      __writecr8(v47);
    }
    return WaitStatus;
  }
  if ( (v48.Flags & 0x18) != 0 )
  {
    if ( (v48.Flags & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    v138 = 0LL;
    v104 = KeGetCurrentPrcb();
    v136 = 0;
    v105 = v104->SchedulerAssist;
    if ( v105 )
    {
      if ( v104->NestingLevel <= 1u )
      {
        v106 = v105[6];
        v105[6] = v106 + 1;
        if ( v106 == -1 )
LABEL_227:
          KiRemoveSystemWorkPriorityKick(v104);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v36->PrcbLock, 0LL) )
    {
      v107 = v104->SchedulerAssist;
      if ( v107 )
      {
        if ( v104->NestingLevel <= 1u )
        {
          v108 = v107[6] - 1;
          v107[6] = v108;
          if ( !v108 )
            KiRemoveSystemWorkPriorityKick(v104);
        }
      }
      do
        KeYieldProcessorEx(&v136);
      while ( v36->PrcbLock );
      v109 = v104->SchedulerAssist;
      if ( v109 )
      {
        if ( v104->NestingLevel <= 1u )
        {
          v110 = v109[6];
          v109[6] = v110 + 1;
          if ( v110 == -1 )
            goto LABEL_227;
        }
      }
    }
    if ( !v36->NextThread )
      KiSelectNextThread(v36, &v138);
    _InterlockedAnd64((volatile signed __int64 *)&v36->PrcbLock, 0LL);
    v111 = KeGetCurrentPrcb();
    v112 = v111->SchedulerAssist;
    if ( v112 )
    {
      if ( v111->NestingLevel <= 1u )
      {
        v113 = v112[6] - 1;
        v112[6] = v113;
        if ( !v113 )
          KiRemoveSystemWorkPriorityKick(v111);
      }
    }
    KiProcessDeferredReadyList(v36, &v138, (unsigned __int8)v47, v35);
    return WaitStatus;
  }
  LOBYTE(v38) = 1;
  KiCheckForThreadDispatch(v36, v38);
  KiDeliverApc(0LL, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v114 = KeGetCurrentPrcb();
      v115 = v114->SchedulerAssist;
      v53 = (v115[5] & 0xFFFF0001) == 0;
      v115[5] &= 0xFFFF0001;
      if ( v53 )
        KiRemoveSystemWorkPriorityKick(v114);
    }
  }
  __writecr8(0LL);
  return WaitStatus;
}
