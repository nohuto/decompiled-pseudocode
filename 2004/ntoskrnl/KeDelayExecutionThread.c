/*
 * XREFs of KeDelayExecutionThread @ 0x1402BC230
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     FsRtlCreateSectionForDataScan @ 0x140266E80 (FsRtlCreateSectionForDataScan.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D1A78 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiFlushAllHintedStorePages @ 0x14031056C (MiFlushAllHintedStorePages.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     ExpExpandResourceOwnerTable @ 0x14034417C (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x14034725C (IopCancelIrpsInFileObjectList.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     MiFlushAllPagesWorker @ 0x140380308 (MiFlushAllPagesWorker.c)
 *     PnpBootDeviceWait @ 0x1403B4188 (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403EE0F8 (MiMarkHugePfnGood.c)
 *     CcCrossPartitionDrainSectionDeletion @ 0x1404E474C (CcCrossPartitionDrainSectionDeletion.c)
 *     CcDeleteSectionsForPartition @ 0x1404E6D64 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9DE0 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140502210 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x14052524C (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053585C (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x140542EB4 (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140597600 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x14059C0D4 (MdlInvariantPostProcessing1.c)
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14060587C (PfpOpenHandleCreate.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     PnpCompleteDeviceEvent @ 0x1406497B8 (PnpCompleteDeviceEvent.c)
 *     CmpUuidCreate @ 0x1406564B4 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     NtDelayExecution @ 0x140697390 (NtDelayExecution.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PopPolicyWorkerNotify @ 0x1406A4C30 (PopPolicyWorkerNotify.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1406B1050 (IoCancelThreadIo.c)
 *     NtNotifyChangeSession @ 0x1406E48A0 (NtNotifyChangeSession.c)
 *     NtCancelIoFile @ 0x1406EE850 (NtCancelIoFile.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406FFCA8 (EtwpWaitForBufferReferenceCount.c)
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 *     MmGetSystemRoutineAddress @ 0x1407055C0 (MmGetSystemRoutineAddress.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140720594 (PipEventRemovalCheckOpenHandles.c)
 *     PnpAllocateCriticalMemory @ 0x140732FD8 (PnpAllocateCriticalMemory.c)
 *     PfTLoggingWorker @ 0x14078E8F0 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x140871C08 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1408C4FB4 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1408E41B0 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409527C0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140959900 (WheaRemoveErrorSource.c)
 *     sub_1409601C0 @ 0x1409601C0 (sub_1409601C0.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D5D2C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x1409ED020 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A660 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x140210E70 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x1402BC710 (KiCheckWaitNext.c)
 *     KiCheckDueTimeExpired @ 0x1402BC800 (KiCheckDueTimeExpired.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402ED780 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
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
  __int64 v13; // rcx
  __int64 v14; // r9
  NTSTATUS v15; // eax
  struct _KTHREAD *v16; // rdi
  unsigned __int8 v17; // r14
  struct _KPRCB *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rbp
  _DWORD *v23; // rcx
  struct _KPRCB *v24; // rbp
  _DWORD *v25; // rcx
  __int64 NextThread; // rbp
  __int64 CycleTime; // rdx
  unsigned __int64 v28; // rcx
  unsigned int v29; // r15d
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  struct _KPRCB *v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  bool v35; // zf
  char v36; // cl
  __int64 v37; // r8
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  unsigned __int8 CurrentIrql; // r10
  char IsThreadRankNonZero; // al
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // r9
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // edx
  _DWORD *SchedulerAssist; // r9
  int v58; // [rsp+30h] [rbp-58h] BYREF
  int v59; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v62; // [rsp+A0h] [rbp+18h]
  unsigned int v63; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = Interval;
  v61 = 0LL;
  v63 = 0;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    LOBYTE(Interval) = 1;
    v10 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v5, (_DWORD)Interval, (unsigned int)&v61, (__int64)&v63);
    v11 = v61;
    v12 = v63;
    v62 = v10;
    while ( 1 )
    {
      result = KiBeginThreadWait((__int64)CurrentThread, (unsigned __int8)WaitMode, 4LL, (_DWORD *)Alertable);
      v60 = result;
      if ( result )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v12, v11) )
      {
        KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v62, v14);
        if ( v5->QuadPart )
          return v60;
        else
          return KeYieldExecution(0LL);
      }
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      v15 = KiCommitThreadWait(v13, (__int64 *)&CurrentThread->320, v12, v11, 0LL);
      if ( v15 != 256 )
      {
        if ( v15 != 258 )
          return v15;
        return v4;
      }
      v62 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = v61;
        v12 = v63;
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
    v16 = KeGetCurrentThread();
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      v44[5] |= (-1LL << (v17 + 1)) & 4;
    }
    v18 = KeGetCurrentPrcb();
    if ( v18->ReadySummary || v18->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch((__int64)v16, 0);
      v22 = KeGetCurrentPrcb();
      v58 = 0;
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v45 = v23[6];
          v23[6] = v45 + 1;
          if ( v45 == -1 )
LABEL_69:
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v16->ThreadLock, 0LL) )
      {
        v42 = v22->SchedulerAssist;
        if ( v42 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v46 = v42[6] - 1;
            v42[6] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(&v58, v19, v20, v21);
        while ( v16->ThreadLock );
        v43 = v22->SchedulerAssist;
        if ( v43 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v47 = v43[6];
            v43[6] = v47 + 1;
            if ( v47 == -1 )
              goto LABEL_69;
          }
        }
      }
      v24 = KeGetCurrentPrcb();
      v59 = 0;
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v48 = v25[6];
          v25[6] = v48 + 1;
          if ( v48 == -1 )
LABEL_78:
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        v38 = v24->SchedulerAssist;
        if ( v38 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v49 = v38[6] - 1;
            v38[6] = v49;
            if ( !v49 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v59, v19, v20, v21);
        while ( v18->PrcbLock );
        v39 = v24->SchedulerAssist;
        if ( v39 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v50 = v39[6];
            v39[6] = v50 + 1;
            if ( v50 == -1 )
              goto LABEL_78;
          }
        }
      }
      NextThread = (__int64)v18->NextThread;
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(v18, 0LL, 1)) != 0 )
      {
        if ( v18->NestingLevel )
        {
          CycleTime = v16->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread(v18, v16, 0LL);
          _enable();
        }
        v28 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v16->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v16->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v16->116 + 1, 5u);
        v16->QuantumTarget = v28;
        LOBYTE(CycleTime) = 1;
        v29 = (char)KiComputeNewPriority(v16, CycleTime);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)v16) )
        {
          v31 = KeGetCurrentPrcb();
          if ( (char)v29 > v16->Priority )
          {
            if ( v16->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v16->PropagateBoostsEntry;
              if ( v16->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_AbPropagateBoostsList = &v31->AbPropagateBoostsList;
                if ( v31 != (struct _KPRCB *)-34680LL )
                {
                  p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&v16->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v31);
                }
              }
            }
          }
          v35 = (*((_DWORD *)&v16->0 + 1) & 0x400000) == 0;
          v16->Priority = v29;
          if ( !v35 )
          {
            LOBYTE(p_PropagateBoostsEntry) = 1;
            KiSetSchedulerAssistPriority(v16->SchedulerAssist, v29, p_PropagateBoostsEntry);
          }
        }
        KiReleaseThreadLockSafe(v16);
        v18->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v18, v16, 0LL);
        _enable();
        if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v18), v36 = 1, !IsThreadRankNonZero) )
        {
          v36 = *(_BYTE *)(NextThread + 195);
        }
        *v18->PriorityState = v36;
        if ( v18->SchedulerAssist )
        {
          v52 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( (_KTHREAD *)NextThread != v18->IdleThread )
            v52 = (unsigned int)v36;
          KiSetSchedulerAssistPriority(v18->SchedulerAssist, v52, 0LL);
        }
        v18->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 2;
        v16->WaitReason = 33;
        v16->WaitIrql = v17;
        KiQueueReadyThread(v18, v16);
        LOBYTE(v37) = 1;
        KiSwapContext(v16, NextThread, v37);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v51 = v33[6] - 1;
            v33[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        KiReleaseThreadLockSafe(v16);
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
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && v17 <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v35 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    __writecr8(v17);
    return v4;
  }
  return result;
}
