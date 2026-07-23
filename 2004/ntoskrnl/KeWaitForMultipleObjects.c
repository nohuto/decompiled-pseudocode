/*
 * XREFs of KeWaitForMultipleObjects @ 0x1402801A0
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402654AC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxProcessWorkPool @ 0x1402E3688 (PopFxProcessWorkPool.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403031C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopSleepDeviceList @ 0x140380E0C (PopSleepDeviceList.c)
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 *     KeBalanceSetManager @ 0x1403B5C40 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B5F00 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1403BA4A0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x1403BD760 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x140530270 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x140537E18 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x140538110 (MiWaitForAsynchronousFlushes.c)
 *     MiWaitForFreePagesToZero @ 0x14054AAEC (MiWaitForFreePagesToZero.c)
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14066F6A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     PfGenerateTrace @ 0x1407642B4 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x140797760 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408E4860 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093F530 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409AD100 (MiZeroAllPageFiles.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x14030F468 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x1404B12CC (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x14051D644 (KiSatisfyThreadWait.c)
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
  PVOID *ThreadTimerDelay; // rdx
  struct _KPRCB *v17; // r10
  volatile UCHAR *p_BlockState; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v19; // r11
  unsigned __int64 v20; // r8
  ULONG v21; // r14d
  volatile signed __int32 *v22; // rbx
  __int64 v23; // r9
  int v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // ebx
  unsigned __int64 v28; // r15
  NTSTATUS v29; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v30; // r11
  struct _KPRCB *v32; // rdi
  _DWORD *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r13
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  volatile __int64 WaitStatus; // r15
  ULONG_PTR AbWaitObject; // rcx
  struct _KWAIT_BLOCK *v40; // rbx
  volatile signed __int32 *v41; // rdi
  __int64 Flink; // rcx
  PKWAIT_BLOCK *Blink; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rbx
  _KWAIT_STATUS_REGISTER v46; // al
  struct _KPRCB *v47; // rbx
  _DWORD *v48; // rcx
  struct _KPRCB *v49; // rdi
  _DWORD *v50; // rcx
  bool v51; // zf
  unsigned __int8 v52; // r10
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  unsigned __int8 v55; // cl
  _DWORD *v56; // rcx
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  _DWORD *v69; // r9
  unsigned __int64 v70; // rax
  char v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // r8d
  __int64 v77; // r9
  unsigned __int64 v78; // rdi
  _KLOCK_ENTRY *v79; // rbx
  __int64 v80; // rax
  _KLOCK_ENTRY *v81; // rbx
  _DWORD *v82; // r9
  NTSTATUS v83; // ebx
  int v84; // eax
  int v85; // eax
  int v86; // eax
  struct _KPRCB *v87; // rbx
  _DWORD *v88; // rcx
  int v89; // eax
  _DWORD *v90; // rcx
  int v91; // eax
  _DWORD *v92; // rcx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  __int64 v101; // rax
  struct _KPRCB *v102; // rdi
  _DWORD *v103; // rcx
  int v104; // eax
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  struct _KPRCB *v109; // rcx
  _DWORD *v110; // rdx
  int v111; // eax
  struct _KPRCB *v112; // rcx
  _DWORD *v113; // rdx
  unsigned __int8 v114; // al
  struct _KPRCB *v115; // r9
  _DWORD *v116; // r8
  int v117; // eax
  unsigned __int8 v118; // [rsp+40h] [rbp-89h]
  int v119; // [rsp+44h] [rbp-85h]
  PVOID *__attribute__((__org_arrdim(0,0))) v120; // [rsp+48h] [rbp-81h]
  struct _KPRCB *v121; // [rsp+50h] [rbp-79h]
  unsigned __int64 v122; // [rsp+58h] [rbp-71h]
  __int64 v123; // [rsp+58h] [rbp-71h]
  __int64 v124; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-61h]
  int v127; // [rsp+70h] [rbp-59h] BYREF
  KWAIT_REASON v128; // [rsp+74h] [rbp-55h]
  _DWORD v129[4]; // [rsp+78h] [rbp-51h] BYREF
  int v130; // [rsp+88h] [rbp-41h] BYREF
  int v131; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v132; // [rsp+90h] [rbp-39h] BYREF
  int v133; // [rsp+94h] [rbp-35h] BYREF
  int v134; // [rsp+98h] [rbp-31h] BYREF
  PVOID v135; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-21h] BYREF
  struct _KTHREAD *v137; // [rsp+B0h] [rbp-19h]
  __int64 v138; // [rsp+B8h] [rbp-11h]
  _BYTE v139[8]; // [rsp+C0h] [rbp-9h]

  WaitBlock = WaitBlockArray;
  v128 = WaitReason;
  v120 = Object;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v137 = CurrentThread;
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
  v135 = 0LL;
  v138 = 0LL;
  v118 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v118 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      Object = (PVOID *)((-1LL << (CurrentIrql + 1)) & 4);
      SchedulerAssist[5] |= (unsigned int)Object;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v119 = 1;
    }
    else
    {
      v119 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v119 = 0;
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
      v127 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v64 = v13[6];
          v13[6] = v64 + 1;
          if ( v64 == -1 )
LABEL_139:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v53 = CurrentPrcb->SchedulerAssist;
        if ( v53 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v65 = v53[6] - 1;
            v53[6] = v65;
            if ( !v65 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v127, Object);
        while ( CurrentThread->ThreadLock );
        v54 = CurrentPrcb->SchedulerAssist;
        if ( v54 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v66 = v54[6];
            v54[6] = v66 + 1;
            if ( v66 == -1 )
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
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          v51 = (v68[5] & 0xFFFF0003) == 0;
          v68[5] &= 0xFFFF0003;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(v67);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v55 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
      {
        v69 = KeGetCurrentPrcb()->SchedulerAssist;
        Object = (PVOID *)(v69[5] | ~((unsigned __int8)(1LL << (v55 + 1)) - 1) & 4u);
        v69[5] = (_DWORD)Object;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v128;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_120;
      goto LABEL_20;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v83 = 257;
      goto LABEL_121;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_120:
      v83 = 192;
LABEL_121:
      KiReleaseThreadLockSafe(CurrentThread);
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
      return v83;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v83 = 257;
      goto LABEL_121;
    }
LABEL_20:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v14;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v15 = KeGetCurrentPrcb();
    ThreadTimerDelay = (PVOID *)v15->SchedulerAssist;
    if ( ThreadTimerDelay )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v62 = *((_DWORD *)ThreadTimerDelay + 6) - 1;
        *((_DWORD *)ThreadTimerDelay + 6) = v62;
        if ( !v62 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v17 = KeGetCurrentPrcb();
    p_BlockState = &WaitBlock->BlockState;
    v19 = v120;
    v20 = 0LL;
    v121 = v17;
    v21 = 0;
    v122 = 0LL;
    do
    {
      v129[0] = 0;
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
            KeYieldProcessorEx(v129, ThreadTimerDelay);
          while ( (*v22 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v22, 7u) );
        v19 = v120;
        v20 = v122;
        v17 = v121;
      }
      if ( (*(_BYTE *)v22 & 0x7F) == 2 )
      {
        if ( (v22[12] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v20, v21);
          v122 = v20;
        }
        if ( *((int *)v22 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v22 + 5) && *((_BYTE *)v22 + 2) == v17->DpcRoutineActive )
        {
          if ( *((_DWORD *)v22 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v22, 0xFFFFFF7F);
            v87 = KeGetCurrentPrcb();
            v131 = 0;
            v88 = v87->SchedulerAssist;
            if ( !v88 )
              goto LABEL_186;
            if ( v87->NestingLevel > 1u )
              goto LABEL_186;
            v89 = v88[6];
            v88[6] = v89 + 1;
            if ( v89 != -1 )
              goto LABEL_186;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v87);
              while ( 1 )
              {
LABEL_186:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait((_DWORD)v121, (_DWORD)CurrentThread, v118, (_DWORD)WaitBlock, v21);
                  RtlRaiseStatus(-1073741423);
                }
                v90 = v87->SchedulerAssist;
                if ( v90 )
                {
                  if ( v87->NestingLevel <= 1u )
                  {
                    v91 = v90[6] - 1;
                    v90[6] = v91;
                    if ( !v91 )
                      KiRemoveSystemWorkPriorityKick(v87);
                  }
                }
                do
                  KeYieldProcessorEx(&v131, ThreadTimerDelay);
                while ( CurrentThread->ThreadLock );
                v92 = v87->SchedulerAssist;
                if ( v92 )
                {
                  if ( v87->NestingLevel <= 1u )
                  {
                    v93 = v92[6];
                    v92[6] = v93 + 1;
                    if ( v93 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v49 = KeGetCurrentPrcb();
          v130 = 0;
          v50 = v49->SchedulerAssist;
          if ( v50 )
          {
            if ( v49->NestingLevel <= 1u )
            {
              v84 = v50[6];
              v50[6] = v84 + 1;
              if ( v84 == -1 )
LABEL_175:
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
                v85 = v60[6] - 1;
                v60[6] = v85;
                if ( !v85 )
                  KiRemoveSystemWorkPriorityKick(v49);
              }
            }
            do
              KeYieldProcessorEx(&v130, ThreadTimerDelay);
            while ( CurrentThread->ThreadLock );
            v61 = v49->SchedulerAssist;
            if ( v61 )
            {
              if ( v49->NestingLevel <= 1u )
              {
                v86 = v61[6];
                v61[6] = v86 + 1;
                if ( v86 == -1 )
                  goto LABEL_175;
              }
            }
          }
          v35 = (__int64)v121;
          v34 = 0LL;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v21;
            CurrentThread->AbWaitObject = 0LL;
            v51 = (*((_DWORD *)v22 + 1))-- == 1;
            if ( v51 )
            {
              KiWaitSatisfyMutant(v22, CurrentThread, v121, 0LL);
              v34 = 0LL;
            }
          }
          goto LABEL_44;
        }
      }
      else if ( *((int *)v22 + 1) > 0 )
      {
        v32 = KeGetCurrentPrcb();
        v133 = 0;
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v97 = v33[6];
            v33[6] = v97 + 1;
            if ( v97 == -1 )
LABEL_209:
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v56 = v32->SchedulerAssist;
          if ( v56 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v98 = v56[6] - 1;
              v56[6] = v98;
              if ( !v98 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          do
            KeYieldProcessorEx(&v133, ThreadTimerDelay);
          while ( CurrentThread->ThreadLock );
          v57 = v32->SchedulerAssist;
          if ( v57 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v99 = v57[6];
              v57[6] = v99 + 1;
              if ( v99 == -1 )
                goto LABEL_209;
            }
          }
        }
        v34 = 0LL;
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
        v35 = (__int64)v121;
LABEL_44:
        _InterlockedAnd(v22, 0xFFFFFF7F);
        goto LABEL_45;
      }
      ThreadTimerDelay = (PVOID *)*((_QWORD *)v22 + 2);
      if ( *ThreadTimerDelay != v22 + 2 )
LABEL_52:
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = ThreadTimerDelay;
      *(_QWORD *)(p_BlockState - 17) = v22 + 2;
      *ThreadTimerDelay = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v22 + 2) = p_BlockState - 17;
      _InterlockedAnd(v22, 0xFFFFFF7F);
      ++v21;
      p_BlockState += 48;
    }
    while ( v21 < Count );
    v23 = QuadPart;
    v24 = v119;
    v25 = QuadPart;
    if ( v119 != 2 )
      break;
    ThreadTimerDelay = (PVOID *)CurrentThread->ThreadTimerDelay;
    v44 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    v25 = QuadPart;
    if ( CurrentThread->WaitMode
      && !CurrentThread->WaitBlock[3].SpareLong
      && !CurrentThread->WaitIrql
      && !CurrentThread->ApcState.InProgressFlags
      && (_DWORD)ThreadTimerDelay )
    {
      v25 = (unsigned __int64)ThreadTimerDelay + QuadPart;
    }
LABEL_55:
    if ( v44 > v25 )
      goto LABEL_81;
    v24 = v119;
LABEL_29:
    v26 = 0;
    CurrentThread->WaitBlockCount = Count;
    v27 = 0;
    v28 = 0LL;
    if ( v20 )
    {
      do
      {
        _BitScanForward64(&v70, v20);
        v71 = v70;
        v129[1] = v70;
        v123 = v20 & ~(1LL << v70);
        v72 = KeAbPreAcquire((ULONG_PTR)v19[v70], 0LL, 0);
        v73 = v72;
        if ( !v72 )
          break;
        v28 |= 1LL << v71;
        KeAbPreWait(v72);
        v20 = v123;
        v19 = v120;
        v74 = v73 - *(_QWORD *)(v73 - 16LL * *(unsigned __int8 *)(v73 + 24) + 800);
        v75 = v27++;
        v139[v75] = (2
                   * (((((unsigned __int128)(v74 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                    + ((__int64)((unsigned __int128)(v74 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
      }
      while ( v123 );
      CurrentThread = v137;
      v26 = 0;
      v23 = QuadPart;
      v24 = v119;
    }
    v29 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)WaitBlock, v24, v23, &v135);
    v30 = v120;
    if ( v135 )
    {
      v76 = 0;
      Object = (PVOID *)v28;
      if ( v28 )
      {
        while ( 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v77, (unsigned __int64)Object);
          Object = (PVOID *)((unsigned __int64)Object & ~(1LL << v77));
          v129[2] = v77;
          if ( v135 == v120[v77] )
            break;
          ++v76;
          if ( !Object )
            goto LABEL_165;
        }
        v28 &= ~(1LL << v77);
        v78 = v76;
        v79 = &KeGetCurrentThread()->LockEntries[v139[v76] >> 1];
        KeAbPreAcquire((ULONG_PTR)v120[v77], (__int64)v79, 0);
        v79->AcquiredByte |= 1u;
        if ( v78 >= 6 )
          _report_rangecheckfailure();
        v30 = v120;
        v139[v78] = 0;
        v26 = 0;
      }
LABEL_165:
      CurrentThread->AbWaitObject = 0LL;
    }
    for ( ; v28; ++v26 )
    {
      _BitScanForward64((unsigned __int64 *)&v80, v28);
      v129[3] = v80;
      v28 &= ~(1LL << v80);
      v124 = (unsigned int)v80;
      if ( !v139[v26] )
        ++v26;
      v81 = &KeGetCurrentThread()->LockEntries[v139[v26] >> 1];
      KeAbPreAcquire((ULONG_PTR)v30[(unsigned int)v80], (__int64)v81, 0);
      KeAbPostReleaseEx((ULONG_PTR)v120[v124], (ULONG_PTR)v81);
      v30 = v120;
    }
    if ( v29 != 256 )
      return v29;
    v118 = 0;
    v52 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
    {
      v82 = KeGetCurrentPrcb()->SchedulerAssist;
      Object = (PVOID *)(v82[5] | ~((unsigned __int8)(1LL << (v52 + 1)) - 1) & 4u);
      v82[5] = (_DWORD)Object;
    }
    CurrentThread->WaitIrql = v52;
  }
  if ( !v119 )
    goto LABEL_29;
  if ( QuadPart )
  {
    v44 = MEMORY[0xFFFFF78000000014];
    goto LABEL_55;
  }
LABEL_81:
  v47 = KeGetCurrentPrcb();
  v132 = 0;
  v48 = v47->SchedulerAssist;
  if ( v48 )
  {
    if ( v47->NestingLevel <= 1u )
    {
      v94 = v48[6];
      v48[6] = v94 + 1;
      if ( v94 == -1 )
LABEL_199:
        KiRemoveSystemWorkPriorityKick(v47);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v58 = v47->SchedulerAssist;
    if ( v58 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v95 = v58[6] - 1;
        v58[6] = v95;
        if ( !v95 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    do
      KeYieldProcessorEx(&v132, ThreadTimerDelay);
    while ( CurrentThread->ThreadLock );
    v59 = v47->SchedulerAssist;
    if ( v59 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v96 = v59[6];
        v59[6] = v96 + 1;
        if ( v96 == -1 )
          goto LABEL_199;
      }
    }
  }
  v35 = (__int64)v121;
  v34 = 0LL;
  if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
  {
    CurrentThread->WaitStatus = 258LL;
    CurrentThread->AbWaitObject = 0LL;
  }
LABEL_45:
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v36 = KeGetCurrentPrcb();
  v37 = (__int64)v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v100 = *(_DWORD *)(v37 + 24) - 1;
      *(_DWORD *)(v37 + 24) = v100;
      if ( !v100 )
      {
        KiRemoveSystemWorkPriorityKick(v36);
        v34 = 0LL;
      }
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v101 = KeAbPreAcquire(AbWaitObject, 0LL, 1);
    if ( v101 )
      *(_BYTE *)(v101 + 26) |= 1u;
    v34 = 0LL;
  }
  if ( v21 )
  {
    v40 = &WaitBlock[(unsigned __int8)v21];
    do
    {
      if ( WaitBlock->BlockState < 5u )
      {
        v41 = (volatile signed __int32 *)WaitBlock->Object;
        KiAcquireKobjectLockSafe(v41, v37, v20, v34);
        if ( WaitBlock->BlockState == 4 )
        {
          Flink = (__int64)WaitBlock->WaitListEntry.Flink;
          Blink = (PKWAIT_BLOCK *)WaitBlock->WaitListEntry.Blink;
          if ( (PKWAIT_BLOCK)WaitBlock->WaitListEntry.Flink->Blink != WaitBlock || *Blink != WaitBlock )
            goto LABEL_52;
          *Blink = (PKWAIT_BLOCK)Flink;
          *(_QWORD *)(Flink + 8) = Blink;
        }
        _InterlockedAnd(v41, 0xFFFFFF7F);
      }
      ++WaitBlock;
    }
    while ( WaitBlock != v40 );
    v34 = 0LL;
  }
  v45 = CurrentThread->WaitIrql;
  v46.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v46.Flags & 0x38) == 0 )
  {
    if ( v118 )
    {
      KiCheckForThreadDispatch(v35, (unsigned __int8)v45);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v114 = KeGetCurrentIrql();
          if ( v114 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v114 >= 2u )
          {
            v115 = KeGetCurrentPrcb();
            v116 = v115->SchedulerAssist;
            v117 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            v51 = (v117 & v116[5]) == 0;
            v116[5] &= v117;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(v115);
          }
        }
      }
      __writecr8(v45);
    }
    return WaitStatus;
  }
  if ( (v46.Flags & 0x18) != 0 )
  {
    if ( (v46.Flags & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    v136 = 0LL;
    v102 = KeGetCurrentPrcb();
    v134 = 0;
    v103 = v102->SchedulerAssist;
    if ( v103 )
    {
      if ( v102->NestingLevel <= 1u )
      {
        v104 = v103[6];
        v103[6] = v104 + 1;
        if ( v104 == -1 )
LABEL_227:
          KiRemoveSystemWorkPriorityKick(v102);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 48), 0LL) )
    {
      v105 = v102->SchedulerAssist;
      if ( v105 )
      {
        if ( v102->NestingLevel <= 1u )
        {
          v106 = v105[6] - 1;
          v105[6] = v106;
          if ( !v106 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
      do
        KeYieldProcessorEx(&v134, v37);
      while ( *(_QWORD *)(v35 + 48) );
      v107 = v102->SchedulerAssist;
      if ( v107 )
      {
        if ( v102->NestingLevel <= 1u )
        {
          v108 = v107[6];
          v107[6] = v108 + 1;
          if ( v108 == -1 )
            goto LABEL_227;
        }
      }
    }
    if ( !*(_QWORD *)(v35 + 16) )
      KiSelectNextThread(v35, &v136, v20, v34);
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 48), 0LL);
    v109 = KeGetCurrentPrcb();
    v110 = v109->SchedulerAssist;
    if ( v110 )
    {
      if ( v109->NestingLevel <= 1u )
      {
        v111 = v110[6] - 1;
        v110[6] = v111;
        if ( !v111 )
          KiRemoveSystemWorkPriorityKick(v109);
      }
    }
    KiProcessDeferredReadyList(v35, (__int64)&v136, v45);
    return WaitStatus;
  }
  LOBYTE(v37) = 1;
  KiCheckForThreadDispatch(v35, v37);
  KiDeliverApc(0, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v112 = KeGetCurrentPrcb();
      v113 = v112->SchedulerAssist;
      v51 = (v113[5] & 0xFFFF0001) == 0;
      v113[5] &= 0xFFFF0001;
      if ( v51 )
        KiRemoveSystemWorkPriorityKick(v112);
    }
  }
  __writecr8(0LL);
  return WaitStatus;
}
