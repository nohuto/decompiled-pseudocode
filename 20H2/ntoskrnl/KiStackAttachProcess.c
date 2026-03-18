/*
 * XREFs of KiStackAttachProcess @ 0x1402D6FA0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14025CA90 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     KeForceAttachProcess @ 0x1402D6F38 (KeForceAttachProcess.c)
 *     PsQueryProcessCommandLine @ 0x14031D3D0 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140323C34 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140337B6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14033AA64 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiFlushAllPages @ 0x140386588 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x1403A2B70 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403C1C04 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1405040F0 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x140511F00 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14051BA1C (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14052B42C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053AEEC (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1405452E0 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x140559828 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140597BD4 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140597F90 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B7A30 (ExpSvmServicePageFault.c)
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     PspWriteTebImpersonationInfo @ 0x140607640 (PspWriteTebImpersonationInfo.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1406295A0 (ObSetHandleAttributes.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x14062DE50 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PoEnergyContextStart @ 0x14062F73C (PoEnergyContextStart.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     EtwpWriteProcessEvent @ 0x140632354 (EtwpWriteProcessEvent.c)
 *     PfSnPopulateReadList @ 0x140633B00 (PfSnPopulateReadList.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AA48 (AlpcpPrepareViewForDelivery.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140653560 (ExpWnfWriteStateData.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x14067A340 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14068317C (MmSecureVirtualMemoryAgainstWrites.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     MmCreateTeb @ 0x140685020 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x140685CD0 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x140685D90 (MmProbeAndLockProcessPages.c)
 *     PspWriteTebIdealProcessor @ 0x14069319C (PspWriteTebIdealProcessor.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140695814 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmNewProcessInitialized @ 0x140698C64 (MmNewProcessInitialized.c)
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406ADCA4 (PspWritePebAffinityInfo.c)
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406D124C (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     PspSetupReservedUserMappings @ 0x1406D6F04 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406DB62C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406DE584 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406DEE58 (PspDeleteUserStack.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406EF8FC (PsMapSystemDlls.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406F0DB0 (MiInSwapStoreWorker.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1407175D0 (EtwpRealtimeInjectEtwBuffer.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x14078D390 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x140795B8C (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407BF870 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407CCC14 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14088758C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14088782C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140889270 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14089435C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140894640 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408BFACC (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C5DB0 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408CCAB8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408D0728 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408D41A4 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D643C (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408D6560 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408DB8A0 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408DBBF4 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408DBFC0 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408DC340 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408DC560 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140909D10 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x14090A554 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x14090AF70 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x14090C7EC (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x14090CE2C (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x14090DD30 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14090F38C (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x140932260 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x140936B1C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140936DB0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140941390 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140943AFC (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409472B0 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140A4888C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A77164 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x140268CF0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x1402FF0E0 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F91C0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v5; // r10
  unsigned __int64 v8; // rax
  int v9; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v11; // rcx
  $2D5B062263E2BEE97A34A67201DBDB9B *v12; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v14; // r8
  _LIST_ENTRY *v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v21; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r14
  _DWORD *v26; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // r9
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  bool v47; // zf
  int v49[4]; // [rsp+30h] [rbp-48h] BYREF
  int v51; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v5 = a3;
  LOBYTE(v8) = (a2 & 2) == 0;
  if ( (((KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) & (unsigned __int8)v8) != 0
    || (*(_DWORD *)&BugCheckParameter1->0 & 0x400) != 0 )
  {
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v9 = a2 & 2;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v51 = 0;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = v11[6];
          v11[6] = v32 + 1;
          if ( v32 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = v29[6] - 1;
            v29[6] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v51);
        while ( CurrentThread->ThreadLock );
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v30[6];
            v30[6] = v34 + 1;
            if ( v34 == -1 )
              goto LABEL_47;
          }
        }
      }
      v5 = a3;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v8) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, a2, v5);
    }
    else
    {
      v12 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->152 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v12->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v12->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
        Blink->Flink = (struct _LIST_ENTRY *)v12;
      }
      v14 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v15 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v14 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v15->Flink = v15;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v28 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v15->Flink = (struct _LIST_ENTRY *)v14;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v28;
        v14->Header.WaitListHead.Flink = v15;
        v28->Flink = v15;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[0].Flink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcStateIndex = 1;
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
        {
          v35 = KeGetCurrentPrcb()->SchedulerAssist;
          v35[5] |= (-1 << (v24 + 1)) & 4;
        }
        v25 = KeGetCurrentPrcb();
        v49[0] = 0;
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v36 = v26[6];
            v26[6] = v36 + 1;
            if ( v36 == -1 )
LABEL_59:
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v37 = v25->SchedulerAssist;
          if ( v37 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v38 = v37[6] - 1;
              v37[6] = v38;
              if ( !v38 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
          do
            KeYieldProcessorEx(v49);
          while ( CurrentThread->ThreadLock );
          v39 = v25->SchedulerAssist;
          if ( v39 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v40 = v39[6];
              v39[6] = v40 + 1;
              if ( v40 == -1 )
                goto LABEL_59;
            }
          }
        }
        v5 = a3;
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( !v9 )
      {
        CurrentThread->ThreadLock = 0LL;
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v41 = v17[6] - 1;
            v17[6] = v41;
            if ( !v41 )
            {
              KiRemoveSystemWorkPriorityKick(v16);
              v5 = a3;
            }
          }
        }
      }
      v18 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v18->GroupIndex;
      v21 = 8LL * v18->Group + 376;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v21),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v23 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v23 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x9000u, v23);
        KiSetAddressPolicy();
        v5 = a3;
      }
      LOBYTE(v8) = HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
      {
        LOBYTE(v8) = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
        v5 = a3;
      }
      else
      {
        __writecr3(DirectoryTableBase);
      }
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v42 = __readcr4();
        if ( (v42 & 0x20080) != 0 )
        {
          LOBYTE(v8) = v42 ^ 0x80;
          __writecr4(v42 ^ 0x80);
          __writecr4(v42);
        }
        else
        {
          v8 = __readcr3();
          __writecr3(v8);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v21), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v9 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v43 = KeGetCurrentIrql();
            if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
            {
              v44 = KeGetCurrentPrcb();
              v45 = v44->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v47 = (v46 & v45[5]) == 0;
              v45[5] &= v46;
              if ( v47 )
              {
                KiRemoveSystemWorkPriorityKick(v44);
                v5 = a3;
              }
            }
          }
        }
        LOBYTE(v8) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  return v8;
}
