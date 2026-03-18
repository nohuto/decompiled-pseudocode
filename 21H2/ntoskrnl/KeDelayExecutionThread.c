/*
 * XREFs of KeDelayExecutionThread @ 0x1402B90A0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     ExpExpandResourceOwnerTable @ 0x14021CE94 (ExpExpandResourceOwnerTable.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     MmFlushSection @ 0x140283C50 (MmFlushSection.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140389670 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     MiFlushAllPagesWorker @ 0x14038A914 (MiFlushAllPagesWorker.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x1403C5C64 (PnpBootDeviceWait.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x140538B34 (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140558DE0 (IopKeepAliveWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiRemoveUnusedSegments @ 0x14058BEE4 (MiRemoveUnusedSegments.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1405962EC (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x1405A70EC (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405FA660 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405FF19C (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x1406129E0 (DifKeDelayExecutionThreadWrapper.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     IpmiLibpDelay @ 0x140652EC8 (IpmiLibpDelay.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     NtCancelIoFile @ 0x1406A4A70 (NtCancelIoFile.c)
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x1406A91F0 (NtNotifyChangeSession.c)
 *     PopPolicyWorkerNotify @ 0x1406DC970 (PopPolicyWorkerNotify.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     NtDelayExecution @ 0x14073A240 (NtDelayExecution.c)
 *     CmpTransMgrCommit @ 0x1407426B8 (CmpTransMgrCommit.c)
 *     CmpUuidCreate @ 0x1407435A8 (CmpUuidCreate.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     PnpAllocateCriticalMemory @ 0x140767730 (PnpAllocateCriticalMemory.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140798CFC (EtwpWaitForBufferReferenceCount.c)
 *     IoCancelThreadIo @ 0x14079FC78 (IoCancelThreadIo.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PnpCompleteDeviceEvent @ 0x1407D78A0 (PnpCompleteDeviceEvent.c)
 *     MmManagePartitionMemoryInformation @ 0x1407DE98C (MmManagePartitionMemoryInformation.c)
 *     PfpOpenHandleCreate @ 0x1407DFC68 (PfpOpenHandleCreate.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 *     MmVirtualAccessFault @ 0x140881C00 (MmVirtualAccessFault.c)
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14095E6D4 (PipEventRemovalCheckOpenHandles.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A01E60 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140A94030 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140AAA09C (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B286CC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiBeginThreadWait @ 0x140217CA0 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x140217E70 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140217FB0 (KiCheckDueTimeExpired.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiFastExitThreadWait @ 0x1402946B8 (KiFastExitThreadWait.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v10; // rdi
  unsigned __int8 v11; // r12
  struct _KPRCB *v12; // rsi
  __int64 v13; // r8
  struct _KPRCB *v14; // rbp
  _DWORD *v15; // rcx
  struct _KPRCB *v16; // rbp
  _DWORD *v17; // rcx
  __int64 NextThread; // rbp
  __int64 CycleTime; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r14d
  PVOID *p_DpcData; // r8
  __int64 v23; // r9
  struct _KDPC *v24; // rcx
  bool v25; // zf
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int8 *PriorityState; // r14
  char v32; // cl
  unsigned __int8 v33; // al
  void *v34; // rcx
  _KPRIORITY_STATE *v35; // r8
  __int64 v36; // r8
  _DWORD *v37; // r9
  unsigned __int8 v38; // al
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  int v41; // r10d
  NTSTATUS v42; // eax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  _DWORD *v52; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // edx
  char v64; // al
  char v65; // al
  char v66; // cl
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // edx
  int v71; // [rsp+30h] [rbp-58h] BYREF
  int v72; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v73; // [rsp+38h] [rbp-50h]
  unsigned __int64 v74[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v75; // [rsp+A0h] [rbp+18h]
  int v76; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v74[0] = 0LL;
  v76 = 0;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    v38 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Interval, 1, v74, &v76);
    v39 = v74[0];
    v75 = v38;
    while ( 1 )
    {
      result = KiBeginThreadWait((__int64)CurrentThread, WaitMode, 4, Alertable);
      v73 = result;
      if ( result )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v76, v39) )
      {
        KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v75);
        if ( Interval->QuadPart )
          return v73;
        else
          return KeYieldExecution(0);
      }
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      v42 = KiCommitThreadWait(v40, (__int64 *)&CurrentThread->320, v41, v39, 0LL);
      if ( v42 != 256 )
      {
        if ( v42 != 258 )
          return v42;
        return v4;
      }
      v75 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v39 = v74[0];
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = CurrentIrql;
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
      return 1073741860;
    v10 = KeGetCurrentThread();
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      v37 = KeGetCurrentPrcb()->SchedulerAssist;
      v37[5] |= (-1 << (v11 + 1)) & 4;
    }
    v12 = KeGetCurrentPrcb();
    if ( v12->ReadySummary || v12->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch((__int64)v10, 0);
      v14 = KeGetCurrentPrcb();
      v71 = 0;
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v51 = v15[6];
          v15[6] = v51 + 1;
          if ( v51 == -1 )
LABEL_74:
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v10->ThreadLock, 0LL) )
      {
        v52 = v14->SchedulerAssist;
        if ( v52 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v53 = v52[6] - 1;
            v52[6] = v53;
            if ( !v53 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v71);
        while ( v10->ThreadLock );
        v54 = v14->SchedulerAssist;
        if ( v54 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v55 = v54[6];
            v54[6] = v55 + 1;
            if ( v55 == -1 )
              goto LABEL_74;
          }
        }
      }
      v16 = KeGetCurrentPrcb();
      v72 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v56 = v17[6];
          v17[6] = v56 + 1;
          if ( v56 == -1 )
LABEL_86:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v12->PrcbLock, 0LL) )
      {
        v47 = v16->SchedulerAssist;
        if ( v47 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v57 = v47[6] - 1;
            v47[6] = v57;
            if ( !v57 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v72);
        while ( v12->PrcbLock );
        v48 = v16->SchedulerAssist;
        if ( v48 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v58 = v48[6];
            v48[6] = v58 + 1;
            if ( v58 == -1 )
              goto LABEL_86;
          }
        }
      }
      NextThread = (__int64)v12->NextThread;
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(v12, 0LL, 1LL)) != 0 )
      {
        if ( v12->NestingLevel )
        {
          CycleTime = v10->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread(v12, v10, 0LL);
          _enable();
        }
        v20 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v10->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v10->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v10->116 + 1, 5u);
        LOBYTE(v13) = 1;
        v10->QuantumTarget = v20;
        v21 = (char)KiComputeNewPriority(v10, 1LL, v13);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)v10) )
        {
          v24 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v21 > v10->Priority )
          {
            if ( v10->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v10->PropagateBoostsEntry;
              if ( v10->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_DpcData = &v24[557].DpcData;
                if ( v24 != (struct _KDPC *)-35704LL )
                {
                  p_PropagateBoostsEntry->Next = (struct _SINGLE_LIST_ENTRY *)*p_DpcData;
                  *p_DpcData = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&v10->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v24);
                }
              }
            }
          }
          v25 = (*((_DWORD *)&v10->0 + 1) & 0x400000) == 0;
          v10->Priority = v21;
          if ( !v25 )
          {
            LOBYTE(p_DpcData) = 1;
            KiSetSchedulerAssistPriority(v10->SchedulerAssist, v21, p_DpcData);
          }
        }
        v10->ThreadLock = 0LL;
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v61 = v27[6] - 1;
            v27[6] = v61;
            if ( !v61 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        v12->NextThread = 0LL;
        _disable();
        v12->NestingLevel = 1;
        v28 = __rdtsc();
        v29 = v28 - v12->StartCycles;
        v10->CycleTime += v29;
        v30 = ((v29 * (unsigned __int64)v12->CpuCycleScalingFactor) >> 16) + v10->CurrentRunTime;
        if ( v30 > 0xFFFFFFFF )
          LODWORD(v30) = -1;
        v12->StartCycles = v28;
        v25 = (v10->Header.Size & 0xBE) == 0;
        v10->CurrentRunTime = v30;
        if ( !v25 )
        {
          LOBYTE(v23) = 1;
          KiEndThreadAccountingPeriodEx(v12, v10, v29, v23);
        }
        _enable();
        PriorityState = (unsigned __int8 *)v12->PriorityState;
        if ( (*(_BYTE *)(NextThread + 2) & 4) != 0
          && *(char *)(NextThread + 195) < 16
          && *(_QWORD *)(NextThread + 104)
          && (v45 = *(_QWORD *)(NextThread + 104)) != 0
          && (v46 = v12->ScbOffset + v45) != 0
          && (unsigned int)KiGetThreadEffectiveRankNonZero(NextThread, v46, v29, 0, 0LL) )
        {
          v32 = 1;
        }
        else
        {
          v32 = *(_BYTE *)(NextThread + 195);
        }
        v33 = v32 & 0x7F | (*(_BYTE *)(NextThread + 119) << 7);
        *PriorityState = v33;
        v34 = v12->SchedulerAssist;
        if ( v34 )
        {
          if ( (_KTHREAD *)NextThread == v12->IdleThread )
            v62 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v62 = v33 & 0x7F;
          KiSetSchedulerAssistPriority(v34, v62, 0LL);
        }
        v35 = v12->PriorityState;
        if ( KeHeteroSystem )
        {
          v63 = *(_DWORD *)(NextThread + 80);
          v64 = (v35[64].AllFields ^ *(_BYTE *)(NextThread + 512)) & 7 ^ v35[64].AllFields;
          v65 = (v64 ^ (8 * *(_BYTE *)(NextThread + 516))) & 0x38 ^ v64;
          if ( v63 <= *(_DWORD *)(NextThread + 84) )
            v63 = *(_DWORD *)(NextThread + 84);
          v66 = 64;
          if ( v63 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v66 = 0;
          v35[64].AllFields = v66 | v65 & 0xBF;
        }
        v12->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 2;
        v10->WaitReason = 33;
        v10->WaitIrql = v11;
        KiQueueReadyThread(v12, v10);
        LOBYTE(v36) = 1;
        KiSwapContext(v10, NextThread, v36);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v12->PrcbLock, 0LL);
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        if ( v44 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v59 = v44[6] - 1;
            v44[6] = v59;
            if ( !v59 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        KiReleaseThreadLockSafe((__int64)v10);
        v4 = 1073741860;
      }
    }
    else
    {
      v4 = 1073741860;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v67 = KeGetCurrentIrql();
        if ( v67 <= 0xFu && v11 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = v68->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v25 = (v70 & v69[5]) == 0;
          v69[5] &= v70;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v68);
        }
      }
    }
    __writecr8(v11);
    return v4;
  }
  return result;
}
