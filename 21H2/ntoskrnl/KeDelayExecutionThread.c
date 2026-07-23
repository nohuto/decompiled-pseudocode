/*
 * XREFs of KeDelayExecutionThread @ 0x140278A00
 * Callers:
 *     ExpExpandResourceOwnerTable @ 0x14023682C (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x14023912C (IopCancelIrpsInFileObjectList.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028B7C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     MiFlushAllHintedStorePages @ 0x1402A0AE0 (MiFlushAllHintedStorePages.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     MiFlushAllPagesWorker @ 0x1403848EC (MiFlushAllPagesWorker.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x1403B8524 (PnpBootDeviceWait.c)
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1404E9AAC (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF190 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1405075E0 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053AF6C (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x1405485C4 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059CD00 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A17D4 (MdlInvariantPostProcessing1.c)
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     NtNotifyChangeSession @ 0x1405F4300 (NtNotifyChangeSession.c)
 *     NtCancelIoFile @ 0x1405FCA40 (NtCancelIoFile.c)
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     MmGetSystemRoutineAddress @ 0x140616320 (MmGetSystemRoutineAddress.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140639A4C (EtwpWaitForBufferReferenceCount.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1406417D0 (IoCancelThreadIo.c)
 *     PopPolicyWorkerNotify @ 0x14066F310 (PopPolicyWorkerNotify.c)
 *     PopAcquireAdaptiveLock @ 0x140671E84 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140672828 (PoBlockConsoleSwitch.c)
 *     PfpOpenHandleCreate @ 0x140677DE8 (PfpOpenHandleCreate.c)
 *     NtDelayExecution @ 0x140684010 (NtDelayExecution.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     CmpUuidCreate @ 0x1406C4E04 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 *     PnpCompleteDeviceEvent @ 0x1406FE838 (PnpCompleteDeviceEvent.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PipEventRemovalCheckOpenHandles @ 0x1407329B4 (PipEventRemovalCheckOpenHandles.c)
 *     PnpAllocateCriticalMemory @ 0x14073963C (PnpAllocateCriticalMemory.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 *     PfTLoggingWorker @ 0x1407AD160 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x1408751A0 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1408C8714 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140955F20 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
 *     sub_1409639F0 @ 0x1409639F0 (sub_1409639F0.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D9D3C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x1409F1020 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140A4CB74 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6EEEC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCheckWaitNext @ 0x140278EE0 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140278FD0 (KiCheckDueTimeExpired.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbp
  NTSTATUS v4; // ebx
  PLARGE_INTEGER v5; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v10; // al
  __int64 v11; // r12
  unsigned int v12; // r13d
  int v13; // ecx
  NTSTATUS v14; // eax
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r14
  struct _KPRCB *v17; // rsi
  struct _KPRCB *v18; // rbp
  _DWORD *v19; // rcx
  struct _KPRCB *v20; // rbp
  _DWORD *v21; // rcx
  __int64 NextThread; // rbp
  __int64 CycleTime; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // r15d
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  struct _KDPC *v27; // rcx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  PVOID *p_DpcData; // rdx
  bool v31; // zf
  char v32; // cl
  __int64 v33; // r8
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  unsigned __int8 CurrentIrql; // r10
  char IsThreadRankNonZero; // al
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *v40; // r9
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // edx
  _DWORD *SchedulerAssist; // r9
  int v54; // [rsp+30h] [rbp-58h] BYREF
  int v55; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v56; // [rsp+38h] [rbp-50h]
  __int64 v57; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v58; // [rsp+A0h] [rbp+18h]
  unsigned int v59; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = Interval;
  v57 = 0LL;
  v59 = 0;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    LOBYTE(Interval) = 1;
    v10 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v5, (_DWORD)Interval, (unsigned int)&v57, (__int64)&v59);
    v11 = v57;
    v12 = v59;
    v58 = v10;
    while ( 1 )
    {
      result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
      v56 = result;
      if ( result )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v12, v11) )
      {
        KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v58);
        if ( v5->QuadPart )
          return v56;
        else
          return KeYieldExecution(0);
      }
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      v14 = KiCommitThreadWait(v13, (int)CurrentThread + 320, v12, v11, 0LL);
      if ( v14 != 256 )
      {
        if ( v14 != 258 )
          return v14;
        return v4;
      }
      v58 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = v57;
        v12 = v59;
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
    v15 = KeGetCurrentThread();
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
    {
      v40 = KeGetCurrentPrcb()->SchedulerAssist;
      v40[5] |= (-1LL << (v16 + 1)) & 4;
    }
    v17 = KeGetCurrentPrcb();
    if ( v17->ReadySummary || v17->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch(v15, 0LL);
      v18 = KeGetCurrentPrcb();
      v54 = 0;
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v41 = v19[6];
          v19[6] = v41 + 1;
          if ( v41 == -1 )
LABEL_69:
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->ThreadLock, 0LL) )
      {
        v38 = v18->SchedulerAssist;
        if ( v38 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v42 = v38[6] - 1;
            v38[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v54);
        while ( v15->ThreadLock );
        v39 = v18->SchedulerAssist;
        if ( v39 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v43 = v39[6];
            v39[6] = v43 + 1;
            if ( v43 == -1 )
              goto LABEL_69;
          }
        }
      }
      v20 = KeGetCurrentPrcb();
      v55 = 0;
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v44 = v21[6];
          v21[6] = v44 + 1;
          if ( v44 == -1 )
LABEL_78:
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
      {
        v34 = v20->SchedulerAssist;
        if ( v34 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v45 = v34[6] - 1;
            v34[6] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        do
          KeYieldProcessorEx(&v55);
        while ( v17->PrcbLock );
        v35 = v20->SchedulerAssist;
        if ( v35 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v46 = v35[6];
            v35[6] = v46 + 1;
            if ( v46 == -1 )
              goto LABEL_78;
          }
        }
      }
      NextThread = (__int64)v17->NextThread;
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(v17, 0LL)) != 0 )
      {
        if ( v17->NestingLevel )
        {
          CycleTime = v15->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread(v17, v15, 0LL);
          _enable();
        }
        v24 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v15->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v15->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v15->116 + 1, 5u);
        v15->QuantumTarget = v24;
        LOBYTE(CycleTime) = 1;
        v25 = (char)KiComputeNewPriority(v15, CycleTime);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)v15) )
        {
          v27 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v25 > v15->Priority )
          {
            if ( v15->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v15->PropagateBoostsEntry;
              if ( v15->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_DpcData = &v27[541].DpcData;
                if ( v27 != (struct _KDPC *)-34680LL )
                {
                  p_PropagateBoostsEntry->Next = (struct _SINGLE_LIST_ENTRY *)*p_DpcData;
                  *p_DpcData = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&v15->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v27);
                }
              }
            }
          }
          v31 = (*((_DWORD *)&v15->0 + 1) & 0x400000) == 0;
          v15->Priority = v25;
          if ( !v31 )
          {
            LOBYTE(p_PropagateBoostsEntry) = 1;
            KiSetSchedulerAssistPriority(v15->SchedulerAssist, v25, p_PropagateBoostsEntry);
          }
        }
        KiReleaseThreadLockSafe((__int64)v15);
        v17->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v17, v15, 0LL);
        _enable();
        if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v17), v32 = 1, !IsThreadRankNonZero) )
        {
          v32 = *(_BYTE *)(NextThread + 195);
        }
        *v17->PriorityState = v32;
        if ( v17->SchedulerAssist )
        {
          v48 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( (_KTHREAD *)NextThread != v17->IdleThread )
            v48 = (unsigned int)v32;
          KiSetSchedulerAssistPriority(v17->SchedulerAssist, v48, 0LL);
        }
        v17->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 2;
        v15->WaitReason = 33;
        v15->WaitIrql = v16;
        KiQueueReadyThread(v17, v15);
        LOBYTE(v33) = 1;
        KiSwapContext(v15, NextThread, v33);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v47 = v29[6] - 1;
            v29[6] = v47;
            if ( !v47 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        KiReleaseThreadLockSafe((__int64)v15);
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
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && v16 <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(-1LL << (v16 + 1));
          v31 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
    __writecr8(v16);
    return v4;
  }
  return result;
}
