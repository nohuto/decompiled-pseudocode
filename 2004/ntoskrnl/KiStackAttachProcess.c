/*
 * XREFs of KiStackAttachProcess @ 0x14024F890
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiDeleteFinalPageTables @ 0x14026B62C (MiDeleteFinalPageTables.c)
 *     MmEnforceWorkingSetLimit @ 0x14027B43C (MmEnforceWorkingSetLimit.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140302F58 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14030CBC4 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FEBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     PsQueryProcessCommandLine @ 0x14034C6A0 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x14034F640 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140353124 (PspIsProcessReadyForRemoteThread.c)
 *     MiFlushAllPages @ 0x140384458 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x1403A06A0 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403BE4B0 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140500820 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14050E5D0 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14051804C (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x140527A5C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053751C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x140541910 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x140555E58 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140594134 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405944F0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B3ED0 (ExpSvmServicePageFault.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1405EB1A0 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14060360C (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x1406036D0 (MmProbeAndLockProcessPages.c)
 *     PspSetupUserStack @ 0x140603EA8 (PspSetupUserStack.c)
 *     MmCreateTeb @ 0x140604274 (MmCreateTeb.c)
 *     PfSnPopulateReadList @ 0x1406049E0 (PfSnPopulateReadList.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MmNewProcessInitialized @ 0x140613704 (MmNewProcessInitialized.c)
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x1406223B0 (ExpWnfWriteStateData.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406596EC (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1406598B0 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     ExSweepHandleTable @ 0x14065C780 (ExSweepHandleTable.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     EtwpWriteProcessEvent @ 0x14065E8C4 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x14065F68C (PspWritePebAffinityInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     PspWriteTebImpersonationInfo @ 0x140681540 (PspWriteTebImpersonationInfo.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14069C1A0 (EtwpRealtimeInjectEtwBuffer.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B424C (MmInitializeProcessAddressSpace.c)
 *     PspWriteTebIdealProcessor @ 0x1406B559C (PspWriteTebIdealProcessor.c)
 *     PsMapSystemDlls @ 0x1406B5F74 (PsMapSystemDlls.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406D0750 (MiInSwapStoreWorker.c)
 *     MmProcessWorkingSetControl @ 0x1406D2AE8 (MmProcessWorkingSetControl.c)
 *     ObSetHandleAttributes @ 0x1406E1A90 (ObSetHandleAttributes.c)
 *     PspWow64InitThread @ 0x1406E53AC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406E6274 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x1406E72C0 (PoEnergyContextStart.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406FE2E8 (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     PspSetupReservedUserMappings @ 0x140703CF8 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x140708E1C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14070C444 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x14070C948 (PspDeleteUserStack.c)
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x140787E7C (MmCreateShadowMapping.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     PsStartSiloMonitor @ 0x1407B1930 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BE384 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140881A3C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140881CDC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140883720 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14088E89C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14088EB80 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408B9D6C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BFF70 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408C6C78 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CA8E8 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408CE364 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D05FC (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408D0720 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D5DB4 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408D6180 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D6500 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408D8A10 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409040F0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140904934 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140905350 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x140906BCC (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x14090720C (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x140908110 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14090976C (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14092C430 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x140930CEC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140930F80 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093B560 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093DD3C (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409414F0 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140A425EC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A70F94 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140205710 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x140205DA0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140328540 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F5930 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v5; // r10
  char v6; // r14
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
  __int64 v24; // rdx
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r14
  _DWORD *v27; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // r9
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  bool v48; // zf
  int v50[4]; // [rsp+30h] [rbp-48h] BYREF
  int v52; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v5 = a3;
  v6 = a2;
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
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v52 = 0;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = v11[6];
          v11[6] = v33 + 1;
          if ( v33 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v30[6] - 1;
            v30[6] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v52, a2);
        while ( CurrentThread->ThreadLock );
        v31 = CurrentPrcb->SchedulerAssist;
        if ( v31 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v31[6];
            v31[6] = v35 + 1;
            if ( v35 == -1 )
              goto LABEL_47;
          }
        }
      }
      v5 = a3;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v8) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, v6, v5);
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
        v29 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v15->Flink = (struct _LIST_ENTRY *)v14;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v29;
        v14->Header.WaitListHead.Flink = v15;
        v29->Flink = v15;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[0].Flink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcStateIndex = 1;
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( (v6 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
        {
          v36 = KeGetCurrentPrcb()->SchedulerAssist;
          v24 = (-1LL << (v25 + 1)) & 4;
          v36[5] |= v24;
        }
        v26 = KeGetCurrentPrcb();
        v50[0] = 0;
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v37 = v27[6];
            v27[6] = v37 + 1;
            if ( v37 == -1 )
LABEL_59:
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v38 = v26->SchedulerAssist;
          if ( v38 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v39 = v38[6] - 1;
              v38[6] = v39;
              if ( !v39 )
                KiRemoveSystemWorkPriorityKick(v26);
            }
          }
          do
            KeYieldProcessorEx(v50, v24);
          while ( CurrentThread->ThreadLock );
          v40 = v26->SchedulerAssist;
          if ( v40 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v41 = v40[6];
              v40[6] = v41 + 1;
              if ( v41 == -1 )
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
            v42 = v17[6] - 1;
            v17[6] = v42;
            if ( !v42 )
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
        v43 = __readcr4();
        if ( (v43 & 0x20080) != 0 )
        {
          LOBYTE(v8) = v43 ^ 0x80;
          __writecr4(v43 ^ 0x80);
          __writecr4(v43);
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
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = v45->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v48 = (v47 & v46[5]) == 0;
              v46[5] &= v47;
              if ( v48 )
              {
                KiRemoveSystemWorkPriorityKick(v45);
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
