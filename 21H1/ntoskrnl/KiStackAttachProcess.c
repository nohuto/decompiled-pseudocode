/*
 * XREFs of KiStackAttachProcess @ 0x1402A88C0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402CDC78 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030A2D0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     PsQueryProcessCommandLine @ 0x14030EFD0 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1403153D4 (PspIsProcessReadyForRemoteThread.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     MiFlushAllPages @ 0x14037F554 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403BD520 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1405001D0 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14050DF80 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x1405179FC (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14052740C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x140536ECC (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1405412C0 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140593A44 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140593E00 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B37B0 (ExpSvmServicePageFault.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1405CEF78 (SmProcessStoreMemoryPriorityRequest.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     EtwpWriteProcessEvent @ 0x1405D85C4 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     PspWriteTebImpersonationInfo @ 0x140609460 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1406207C0 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14063864C (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x140638710 (MmProbeAndLockProcessPages.c)
 *     PspSetupUserStack @ 0x140638EE8 (PspSetupUserStack.c)
 *     MmCreateTeb @ 0x1406392B4 (MmCreateTeb.c)
 *     PfSnPopulateReadList @ 0x140639A20 (PfSnPopulateReadList.c)
 *     MmDeleteTeb @ 0x14063A688 (MmDeleteTeb.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     PspWriteTebIdealProcessor @ 0x14064C5BC (PspWriteTebIdealProcessor.c)
 *     PsMapSystemDlls @ 0x14064CF94 (PsMapSystemDlls.c)
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 *     PfSnAsyncPrefetchWorker @ 0x140651B10 (PfSnAsyncPrefetchWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406560F0 (MiInSwapStoreWorker.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140667AD0 (ExpWnfWriteStateData.c)
 *     MmAssignProcessToJob @ 0x140671C70 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140671D90 (PspApplyWorkingSetLimitsToProcess.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     PoEnergyContextStart @ 0x1406C69C8 (PoEnergyContextStart.c)
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DB278 (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     PspSetupReservedUserMappings @ 0x1406E0F68 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406E523C (EtwpTiQueryVad.c)
 *     PspDeleteUserStack @ 0x1406E8978 (PspDeleteUserStack.c)
 *     MmNewProcessInitialized @ 0x1406F6B68 (MmNewProcessInitialized.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     PspWow64InitThread @ 0x1406FC5CC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406FD494 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140704A9C (EtwpRealtimeInjectEtwBuffer.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407824F8 (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407AE7D0 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407B65E8 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BB214 (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14088071C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1408809BC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140882400 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x14088D57C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14088D860 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408B8A4C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BEC20 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408C5928 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408C9598 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408CD014 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408CF2AC (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408CF3D0 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408D4E30 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D51B0 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408D53D0 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140902E10 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140903654 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140904070 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1409058EC (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x140905F5C (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x140906E60 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x1409084BC (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14092B180 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x14092FA3C (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14092FCD0 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A2C0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093CAC0 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940270 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x140A4965C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A70188 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x14025ECC0 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x1402EF380 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F52E0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v6; // r10
  char v7; // r14
  unsigned __int64 v9; // rax
  int v10; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  $2D5B062263E2BEE97A34A67201DBDB9B *v13; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *Process; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r14
  _DWORD *v30; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  bool v49; // zf
  int v51[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v52; // [rsp+90h] [rbp+18h]
  int v53; // [rsp+98h] [rbp+20h] BYREF

  v52 = a3;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  v6 = a3;
  v7 = a2;
  LOBYTE(SchedulerAssist) = (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0;
  LOBYTE(v9) = (a2 & 2) == 0;
  if ( ((unsigned __int8)SchedulerAssist & (unsigned __int8)v9) != 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x400) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    v10 = a2 & 2;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v53 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v35 = v12[6];
          v12[6] = v35 + 1;
          if ( v35 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v33 = CurrentPrcb->SchedulerAssist;
        if ( v33 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v36 = v33[6] - 1;
            v33[6] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v53, a2, a3, (__int64)SchedulerAssist);
        while ( CurrentThread->ThreadLock );
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[6];
            v34[6] = v37 + 1;
            if ( v37 == -1 )
              goto LABEL_47;
          }
        }
      }
      v6 = v52;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v9) = KiAttachProcess((__int64)CurrentThread, (__int64)BugCheckParameter1, CurrentIrql, v7, v6);
    }
    else
    {
      v13 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->152 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
        Blink->Flink = (struct _LIST_ENTRY *)v13;
      }
      v15 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v16 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v15 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v16->Flink = v16;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v32 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v32;
        v15->Header.WaitListHead.Flink = v16;
        v32->Flink = v16;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[0].Flink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcStateIndex = 1;
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( (v7 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        KiReleaseThreadLockSafe(CurrentThread);
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          v27 = KeGetCurrentPrcb()->SchedulerAssist;
          v25 = (-1LL << (v28 + 1)) & 4;
          v26 = (unsigned int)v25 | v27[5];
          v27[5] = v26;
        }
        v29 = KeGetCurrentPrcb();
        v51[0] = 0;
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v38 = v30[6];
            v30[6] = v38 + 1;
            if ( v38 == -1 )
LABEL_59:
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v39 = v29->SchedulerAssist;
          if ( v39 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v40 = v39[6] - 1;
              v39[6] = v40;
              if ( !v40 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          do
            KeYieldProcessorEx(v51, v25, v26, (__int64)v27);
          while ( CurrentThread->ThreadLock );
          v41 = v29->SchedulerAssist;
          if ( v41 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v42 = v41[6];
              v41[6] = v42 + 1;
              if ( v42 == -1 )
                goto LABEL_59;
            }
          }
        }
        v6 = v52;
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( !v10 )
      {
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v43 = v18[6] - 1;
            v18[6] = v43;
            if ( !v43 )
            {
              KiRemoveSystemWorkPriorityKick(v17);
              v6 = v52;
            }
          }
        }
      }
      v19 = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = v19->GroupIndex;
      v22 = 8LL * v19->Group + 376;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v22),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v24 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v24 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x9000u, v24);
        KiSetAddressPolicy();
        v6 = v52;
      }
      LOBYTE(v9) = HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
      {
        LOBYTE(v9) = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
        v6 = v52;
      }
      else
      {
        __writecr3(DirectoryTableBase);
      }
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v44 = __readcr4();
        if ( (v44 & 0x20080) != 0 )
        {
          LOBYTE(v9) = v44 ^ 0x80;
          __writecr4(v44 ^ 0x80);
          __writecr4(v44);
        }
        else
        {
          v9 = __readcr3();
          __writecr3(v9);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v10 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v49 = (v48 & v47[5]) == 0;
              v47[5] &= v48;
              if ( v49 )
              {
                KiRemoveSystemWorkPriorityKick(v46);
                v6 = v52;
              }
            }
          }
        }
        LOBYTE(v9) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(v6 + 32) = 0LL;
    }
  }
  return v9;
}
