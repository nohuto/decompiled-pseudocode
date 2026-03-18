/*
 * XREFs of KeWaitForMultipleObjects @ 0x1402DCE40
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14024B4B4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025C8B0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxProcessWorkPool @ 0x14033D5EC (PopFxProcessWorkPool.c)
 *     PopSleepDeviceList @ 0x140382BCC (PopSleepDeviceList.c)
 *     MiMappedPageWriter @ 0x1403B60F0 (MiMappedPageWriter.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 *     KeBalanceSetManager @ 0x1403B86E0 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B89A0 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1403BC920 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x1403BFBE0 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x140533C40 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14053B7E8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14053BAE0 (MiWaitForAsynchronousFlushes.c)
 *     MiWaitForFreePagesToZero @ 0x14054E4BC (MiWaitForFreePagesToZero.c)
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140688200 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     PfGenerateTrace @ 0x1407728C4 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14079B030 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x1407A6A90 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408EA470 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409452F0 (EtwpCovSampCaptureWorkerThread.c)
 *     PnprQuiesceWorker @ 0x1409B1D60 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B3070 (MiZeroAllPageFiles.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWaitForAllObjects @ 0x1402F5424 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x1402F5DC8 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     __report_rangecheckfailure @ 0x1404B4AAC (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x140521014 (KiSatisfyThreadWait.c)
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
  __int64 v35; // r13
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  volatile __int64 WaitStatus; // r15
  ULONG_PTR AbWaitObject; // rcx
  struct _KWAIT_BLOCK *v40; // rbx
  volatile signed __int32 *v41; // rdi
  __int64 Flink; // rcx
  PKWAIT_BLOCK *Blink; // rax
  __int64 ThreadTimerDelay; // rdx
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
  _DWORD *SchedulerAssist; // r9
  int v65; // eax
  int v66; // eax
  int v67; // eax
  struct _KPRCB *v68; // rcx
  _DWORD *v69; // rdx
  _DWORD *v70; // r9
  unsigned __int64 v71; // rax
  char v72; // r14
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rax
  unsigned int v79; // r8d
  unsigned __int64 v80; // rdx
  __int64 v81; // r9
  unsigned __int64 v82; // rdi
  _KLOCK_ENTRY *v83; // rbx
  __int64 v84; // rax
  _KLOCK_ENTRY *v85; // rbx
  _DWORD *v86; // r9
  NTSTATUS v87; // ebx
  int v88; // eax
  int v89; // eax
  int v90; // eax
  struct _KPRCB *v91; // rbx
  _DWORD *v92; // rcx
  int v93; // eax
  _DWORD *v94; // rcx
  int v95; // eax
  _DWORD *v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  struct _KPRCB *v106; // rdi
  _DWORD *v107; // rcx
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  _DWORD *v111; // rcx
  int v112; // eax
  struct _KPRCB *v113; // rcx
  _DWORD *v114; // rdx
  int v115; // eax
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r9
  _DWORD *v120; // r8
  int v121; // eax
  unsigned __int8 v122; // [rsp+40h] [rbp-89h]
  int v123; // [rsp+44h] [rbp-85h]
  struct _KPRCB *v125; // [rsp+50h] [rbp-79h]
  unsigned __int64 v126; // [rsp+58h] [rbp-71h]
  __int64 v127; // [rsp+58h] [rbp-71h]
  __int64 v128; // [rsp+58h] [rbp-71h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-61h]
  int v131; // [rsp+70h] [rbp-59h] BYREF
  KWAIT_REASON v132; // [rsp+74h] [rbp-55h]
  _DWORD v133[4]; // [rsp+78h] [rbp-51h] BYREF
  int v134; // [rsp+88h] [rbp-41h] BYREF
  int v135; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v136; // [rsp+90h] [rbp-39h] BYREF
  int v137; // [rsp+94h] [rbp-35h] BYREF
  int v138; // [rsp+98h] [rbp-31h] BYREF
  PVOID v139; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v140; // [rsp+A8h] [rbp-21h] BYREF
  struct _KTHREAD *v141; // [rsp+B0h] [rbp-19h]
  __int64 v142; // [rsp+B8h] [rbp-11h]
  _BYTE v143[8]; // [rsp+C0h] [rbp-9h]

  WaitBlock = WaitBlockArray;
  v132 = WaitReason;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v141 = CurrentThread;
  if ( WaitBlockArray )
  {
    if ( Count <= 0x40 )
      goto LABEL_5;
LABEL_132:
    KeBugCheck(0xCu);
  }
  if ( Count > 3 )
    goto LABEL_132;
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
  v139 = 0LL;
  v142 = 0LL;
  v122 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v122 )
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
      v123 = 1;
    }
    else
    {
      v123 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v123 = 0;
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
      v131 = 0;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v65 = v13[6];
          v13[6] = v65 + 1;
          if ( v65 == -1 )
LABEL_138:
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
            v66 = v54[6] - 1;
            v54[6] = v66;
            if ( !v66 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v131);
        while ( CurrentThread->ThreadLock );
        v55 = CurrentPrcb->SchedulerAssist;
        if ( v55 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v67 = v55[6];
            v55[6] = v67 + 1;
            if ( v67 == -1 )
              goto LABEL_138;
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
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          v52 = (v69[5] & 0xFFFF0003) == 0;
          v69[5] &= 0xFFFF0003;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v68);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        v70 = KeGetCurrentPrcb()->SchedulerAssist;
        v70[5] |= ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v14 = v132;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_119;
      goto LABEL_20;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v87 = 257;
      goto LABEL_120;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_119:
      v87 = 192;
LABEL_120:
      KiReleaseThreadLockSafe(CurrentThread);
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
      return v87;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v87 = 257;
      goto LABEL_120;
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
        v63 = v16[6] - 1;
        v16[6] = v63;
        if ( !v63 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v17 = KeGetCurrentPrcb();
    p_BlockState = &WaitBlock->BlockState;
    v19 = Object;
    v20 = 0LL;
    v125 = v17;
    v21 = 0;
    v126 = 0LL;
    do
    {
      v133[0] = 0;
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
            KeYieldProcessorEx(v133);
          while ( (*v22 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v22, 7u) );
        v19 = Object;
        v20 = v126;
        v17 = v125;
      }
      if ( (*(_BYTE *)v22 & 0x7F) == 2 )
      {
        if ( (v22[12] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v20, v21);
          v126 = v20;
        }
        if ( *((int *)v22 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v22 + 5) && *((_BYTE *)v22 + 2) == v17->DpcRoutineActive )
        {
          if ( *((_DWORD *)v22 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v22, 0xFFFFFF7F);
            v91 = KeGetCurrentPrcb();
            v135 = 0;
            v92 = v91->SchedulerAssist;
            if ( !v92 )
              goto LABEL_185;
            if ( v91->NestingLevel > 1u )
              goto LABEL_185;
            v93 = v92[6];
            v92[6] = v93 + 1;
            if ( v93 != -1 )
              goto LABEL_185;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v91);
              while ( 1 )
              {
LABEL_185:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait((_DWORD)v125, (_DWORD)CurrentThread, v122, (_DWORD)WaitBlock, v21);
                  RtlRaiseStatus(3221225873LL);
                }
                v94 = v91->SchedulerAssist;
                if ( v94 )
                {
                  if ( v91->NestingLevel <= 1u )
                  {
                    v95 = v94[6] - 1;
                    v94[6] = v95;
                    if ( !v95 )
                      KiRemoveSystemWorkPriorityKick(v91);
                  }
                }
                do
                  KeYieldProcessorEx(&v135);
                while ( CurrentThread->ThreadLock );
                v96 = v91->SchedulerAssist;
                if ( v96 )
                {
                  if ( v91->NestingLevel <= 1u )
                  {
                    v97 = v96[6];
                    v96[6] = v97 + 1;
                    if ( v97 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v50 = KeGetCurrentPrcb();
          v134 = 0;
          v51 = v50->SchedulerAssist;
          if ( v51 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v88 = v51[6];
              v51[6] = v88 + 1;
              if ( v88 == -1 )
LABEL_174:
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
                v89 = v61[6] - 1;
                v61[6] = v89;
                if ( !v89 )
                  KiRemoveSystemWorkPriorityKick(v50);
              }
            }
            do
              KeYieldProcessorEx(&v134);
            while ( CurrentThread->ThreadLock );
            v62 = v50->SchedulerAssist;
            if ( v62 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v90 = v62[6];
                v62[6] = v90 + 1;
                if ( v90 == -1 )
                  goto LABEL_174;
              }
            }
          }
          v35 = (__int64)v125;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v21;
            CurrentThread->AbWaitObject = 0LL;
            v52 = (*((_DWORD *)v22 + 1))-- == 1;
            if ( v52 )
              KiWaitSatisfyMutant(v22, CurrentThread, v125);
          }
          goto LABEL_44;
        }
      }
      else if ( *((int *)v22 + 1) > 0 )
      {
        v33 = KeGetCurrentPrcb();
        v137 = 0;
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v101 = v34[6];
            v34[6] = v101 + 1;
            if ( v101 == -1 )
LABEL_208:
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
              v102 = v57[6] - 1;
              v57[6] = v102;
              if ( !v102 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          do
            KeYieldProcessorEx(&v137);
          while ( CurrentThread->ThreadLock );
          v58 = v33->SchedulerAssist;
          if ( v58 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v103 = v58[6];
              v58[6] = v103 + 1;
              if ( v103 == -1 )
                goto LABEL_208;
            }
          }
        }
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
        v35 = (__int64)v125;
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
    v25 = v123;
    v26 = QuadPart;
    if ( v123 != 2 )
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
      goto LABEL_80;
    v25 = v123;
LABEL_29:
    v27 = 0;
    CurrentThread->WaitBlockCount = Count;
    v28 = 0;
    v29 = 0LL;
    if ( v20 )
    {
      do
      {
        _BitScanForward64(&v71, v20);
        v72 = v71;
        v133[1] = v71;
        v127 = v20 & ~(1LL << v71);
        v73 = KeAbPreAcquire((ULONG_PTR)v19[v71], 0LL, 0LL);
        v76 = v73;
        if ( !v73 )
          break;
        v29 |= 1LL << v72;
        KeAbPreWait(v73, v74, v75);
        v20 = v127;
        v19 = Object;
        v77 = v76 - *(_QWORD *)(v76 - 16LL * *(unsigned __int8 *)(v76 + 24) + 800);
        v78 = v28++;
        v143[v78] = (2
                   * (((((unsigned __int128)(v77 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                    + ((__int64)((unsigned __int128)(v77 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
      }
      while ( v127 );
      CurrentThread = v141;
      v27 = 0;
      v24 = QuadPart;
      v25 = v123;
    }
    v30 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)WaitBlock, v25, v24, &v139);
    v31 = Object;
    if ( v139 )
    {
      v79 = 0;
      v80 = v29;
      if ( v29 )
      {
        while ( 1 )
        {
          _BitScanForward64((unsigned __int64 *)&v81, v80);
          v80 &= ~(1LL << v81);
          v133[2] = v81;
          if ( v139 == Object[v81] )
            break;
          ++v79;
          if ( !v80 )
            goto LABEL_164;
        }
        v29 &= ~(1LL << v81);
        v82 = v79;
        v83 = &KeGetCurrentThread()->LockEntries[v143[v79] >> 1];
        KeAbPreAcquire((ULONG_PTR)Object[v81], (__int64)v83, 0LL);
        v83->AcquiredByte |= 1u;
        if ( v82 >= 6 )
          _report_rangecheckfailure();
        v31 = Object;
        v143[v82] = 0;
        v27 = 0;
      }
LABEL_164:
      CurrentThread->AbWaitObject = 0LL;
    }
    for ( ; v29; ++v27 )
    {
      _BitScanForward64((unsigned __int64 *)&v84, v29);
      v133[3] = v84;
      v29 &= ~(1LL << v84);
      v128 = (unsigned int)v84;
      if ( !v143[v27] )
        ++v27;
      v85 = &KeGetCurrentThread()->LockEntries[v143[v27] >> 1];
      KeAbPreAcquire((ULONG_PTR)v31[(unsigned int)v84], (__int64)v85, 0LL);
      KeAbPostReleaseEx((ULONG_PTR)Object[v128], (ULONG_PTR)v85);
      v31 = Object;
    }
    if ( v30 != 256 )
      return v30;
    v122 = 0;
    v53 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v53 <= 0xFu )
    {
      v86 = KeGetCurrentPrcb()->SchedulerAssist;
      v86[5] |= ~((unsigned __int8)(1LL << (v53 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v53;
  }
  if ( !v123 )
    goto LABEL_29;
  if ( QuadPart )
  {
    v45 = MEMORY[0xFFFFF78000000014];
    goto LABEL_55;
  }
LABEL_80:
  v48 = KeGetCurrentPrcb();
  v136 = 0;
  v49 = v48->SchedulerAssist;
  if ( v49 )
  {
    if ( v48->NestingLevel <= 1u )
    {
      v98 = v49[6];
      v49[6] = v98 + 1;
      if ( v98 == -1 )
LABEL_198:
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
        v99 = v59[6] - 1;
        v59[6] = v99;
        if ( !v99 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    do
      KeYieldProcessorEx(&v136);
    while ( CurrentThread->ThreadLock );
    v60 = v48->SchedulerAssist;
    if ( v60 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v100 = v60[6];
        v60[6] = v100 + 1;
        if ( v100 == -1 )
          goto LABEL_198;
      }
    }
  }
  v35 = (__int64)v125;
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
      v104 = *(_DWORD *)(v37 + 24) - 1;
      *(_DWORD *)(v37 + 24) = v104;
      if ( !v104 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v105 = KeAbPreAcquire(AbWaitObject, 0LL, 1LL);
    if ( v105 )
      *(_BYTE *)(v105 + 26) |= 1u;
  }
  if ( v21 )
  {
    v40 = &WaitBlock[(unsigned __int8)v21];
    do
    {
      if ( WaitBlock->BlockState < 5u )
      {
        v41 = (volatile signed __int32 *)WaitBlock->Object;
        KiAcquireKobjectLockSafe(v41);
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
  }
  v46 = CurrentThread->WaitIrql;
  v47.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v47.Flags & 0x38) == 0 )
  {
    if ( v122 )
    {
      KiCheckForThreadDispatch(v35, (unsigned __int8)v46);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v118 = KeGetCurrentIrql();
          if ( v118 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v118 >= 2u )
          {
            v119 = KeGetCurrentPrcb();
            v120 = v119->SchedulerAssist;
            v121 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v52 = (v121 & v120[5]) == 0;
            v120[5] &= v121;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v119);
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
    v140 = 0LL;
    v106 = KeGetCurrentPrcb();
    v138 = 0;
    v107 = v106->SchedulerAssist;
    if ( v107 )
    {
      if ( v106->NestingLevel <= 1u )
      {
        v108 = v107[6];
        v107[6] = v108 + 1;
        if ( v108 == -1 )
LABEL_226:
          KiRemoveSystemWorkPriorityKick(v106);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 48), 0LL) )
    {
      v109 = v106->SchedulerAssist;
      if ( v109 )
      {
        if ( v106->NestingLevel <= 1u )
        {
          v110 = v109[6] - 1;
          v109[6] = v110;
          if ( !v110 )
            KiRemoveSystemWorkPriorityKick(v106);
        }
      }
      do
        KeYieldProcessorEx(&v138);
      while ( *(_QWORD *)(v35 + 48) );
      v111 = v106->SchedulerAssist;
      if ( v111 )
      {
        if ( v106->NestingLevel <= 1u )
        {
          v112 = v111[6];
          v111[6] = v112 + 1;
          if ( v112 == -1 )
            goto LABEL_226;
        }
      }
    }
    if ( !*(_QWORD *)(v35 + 16) )
      KiSelectNextThread(v35, (__int64)&v140);
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 48), 0LL);
    v113 = KeGetCurrentPrcb();
    v114 = v113->SchedulerAssist;
    if ( v114 )
    {
      if ( v113->NestingLevel <= 1u )
      {
        v115 = v114[6] - 1;
        v114[6] = v115;
        if ( !v115 )
          KiRemoveSystemWorkPriorityKick(v113);
      }
    }
    KiProcessDeferredReadyList(v35, (__int64)&v140, v46);
    return WaitStatus;
  }
  LOBYTE(v37) = 1;
  KiCheckForThreadDispatch(v35, v37);
  KiDeliverApc(0LL, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v116 = KeGetCurrentPrcb();
      v117 = v116->SchedulerAssist;
      v52 = (v117[5] & 0xFFFF0001) == 0;
      v117[5] &= 0xFFFF0001;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick(v116);
    }
  }
  __writecr8(0LL);
  return WaitStatus;
}
