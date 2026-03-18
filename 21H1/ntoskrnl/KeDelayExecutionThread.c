/*
 * XREFs of KeDelayExecutionThread @ 0x1402295B0
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14023EC48 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     FsRtlCreateSectionForDataScan @ 0x1402BFEB0 (FsRtlCreateSectionForDataScan.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     MiFlushAllHintedStorePages @ 0x1402D0518 (MiFlushAllHintedStorePages.c)
 *     ExpExpandResourceOwnerTable @ 0x140306378 (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030A95C (IopCancelIrpsInFileObjectList.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x1403B3664 (PnpBootDeviceWait.c)
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1404E419C (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeleteSectionsForPartition @ 0x1404E67B4 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9790 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140501BC0 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x140524BFC (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053520C (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x140542864 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140596F10 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x14059B9E4 (MdlInvariantPostProcessing1.c)
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     NtDelayExecution @ 0x1405EDE90 (NtDelayExecution.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405F22E4 (EtwpWaitForBufferReferenceCount.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14063A8BC (PfpOpenHandleCreate.c)
 *     CmpUuidCreate @ 0x14065AC58 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     NtNotifyChangeSession @ 0x1406C4F30 (NtNotifyChangeSession.c)
 *     NtCancelIoFile @ 0x1406CD550 (NtCancelIoFile.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     PopPolicyWorkerNotify @ 0x1406E4F50 (PopPolicyWorkerNotify.c)
 *     MmGetSystemRoutineAddress @ 0x1406FC3A0 (MmGetSystemRoutineAddress.c)
 *     PoBlockConsoleSwitch @ 0x1406FDD90 (PoBlockConsoleSwitch.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x140706F10 (IoCancelThreadIo.c)
 *     PnpCompleteDeviceEvent @ 0x14070ADAC (PnpCompleteDeviceEvent.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14071E7F4 (PipEventRemovalCheckOpenHandles.c)
 *     PnpAllocateCriticalMemory @ 0x1407332CC (PnpAllocateCriticalMemory.c)
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x140870928 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1408C3C64 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140951420 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140958560 (WheaRemoveErrorSource.c)
 *     sub_14095EE20 @ 0x14095EE20 (sub_14095EE20.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D5CCC (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x1409ED020 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A400 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140226020 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x140229A90 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x140229B80 (KiCheckDueTimeExpired.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1403328C0 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
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
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
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
      result = KiBeginThreadWait((__int64)CurrentThread, WaitMode, 4, Alertable);
      v56 = result;
      if ( result )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v12, v11) )
      {
        KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v58);
        if ( v5->QuadPart )
          return v56;
        else
          return KeYieldExecution(0LL);
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
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(v17, 0LL, 1LL)) != 0 )
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
          v27 = KeGetCurrentPrcb();
          if ( (char)v25 > v15->Priority )
          {
            if ( v15->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v15->PropagateBoostsEntry;
              if ( v15->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_AbPropagateBoostsList = &v27->AbPropagateBoostsList;
                if ( v27 != (struct _KPRCB *)-34680LL )
                {
                  p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
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
        KiReleaseThreadLockSafe(v15);
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
        KiReleaseThreadLockSafe(v15);
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
