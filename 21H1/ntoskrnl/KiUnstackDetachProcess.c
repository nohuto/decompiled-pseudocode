/*
 * XREFs of KiUnstackDetachProcess @ 0x14025E290
 * Callers:
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402CDC78 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030A2D0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     PsQueryProcessCommandLine @ 0x14030EFD0 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1403153D4 (PspIsProcessReadyForRemoteThread.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
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
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     EtwpWriteProcessEvent @ 0x1405D85C4 (EtwpWriteProcessEvent.c)
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     PspWriteTebImpersonationInfo @ 0x140609460 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14061AC90 (CmCallbackGetKeyObjectIDEx.c)
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1406207C0 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
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
 *     NtCommitRegistryTransaction @ 0x140656520 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140659840 (CmpCleanUpKCBCacheTable.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     CmpInitHiveFromFile @ 0x1406636E8 (CmpInitHiveFromFile.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140667AD0 (ExpWnfWriteStateData.c)
 *     MmAssignProcessToJob @ 0x140671C70 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140671D90 (PspApplyWorkingSetLimitsToProcess.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     PoEnergyContextStart @ 0x1406C69C8 (PoEnergyContextStart.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406DB278 (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x1406E0F68 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406E523C (EtwpTiQueryVad.c)
 *     PspDeleteUserStack @ 0x1406E8978 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     MmNewProcessInitialized @ 0x1406F6B68 (MmNewProcessInitialized.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     PspWow64InitThread @ 0x1406FC5CC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406FD494 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140704A9C (EtwpRealtimeInjectEtwBuffer.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x14071F630 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407824F8 (MmCreateShadowMapping.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407AE7D0 (PsStartSiloMonitor.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B30D8 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407B65E8 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BB214 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140863980 (NtCompressKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140864B60 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140864E30 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140865070 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140865100 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x1408659F8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140865D08 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1408661BC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmReconcileAndValidateAllHives @ 0x14086D740 (CmReconcileAndValidateAllHives.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmpRmUnDoPhase @ 0x1408712D4 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x1408724F0 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x140A4950C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A4965C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A70188 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KiMoveApcState @ 0x14025E210 (KiMoveApcState.c)
 *     KiSwapProcess @ 0x14025E4C0 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  char v5; // bp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r14
  int v8; // esi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v11; // rcx
  $C774EFD68449142D8271B1EC1EB7FB26 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KPRCB *v16; // r9
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  struct _KPRCB *v25; // r10
  bool v26; // zf
  struct _KPRCB *v27; // rdi
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  unsigned __int8 v34; // al
  int v35; // eax
  int v36; // [rsp+60h] [rbp+8h] BYREF
  int v37; // [rsp+68h] [rbp+10h]
  int v38; // [rsp+70h] [rbp+18h] BYREF

  v37 = a2;
  result = *(_QWORD *)(a1 + 32);
  v5 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v8 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
      }
      else
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
        v36 = 0;
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v19 = v11[6];
            v11[6] = v19 + 1;
            if ( v19 == -1 )
LABEL_35:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v17 = CurrentPrcb->SchedulerAssist;
          if ( v17 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v20 = v17[6] - 1;
              v17[6] = v20;
              if ( !v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v36, a2, a3, (__int64)SchedulerAssist);
          while ( CurrentThread->ThreadLock );
          v18 = CurrentPrcb->SchedulerAssist;
          if ( v18 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v21 = v18[6];
              v18[6] = v21 + 1;
              if ( v21 == -1 )
                goto LABEL_35;
            }
          }
        }
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        do
        {
          if ( CurrentIrql || CurrentThread->SpecialApcDisable )
            break;
          KiReleaseThreadLockSafe(CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v25 = KeGetCurrentPrcb();
              v22 = -2LL;
              v24 = v25->SchedulerAssist;
              v26 = (v24[5] & 0xFFFF0001) == 0;
              v23 = v24[5] & 0xFFFF0001;
              v24[5] = v23;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v24 = KeGetCurrentPrcb()->SchedulerAssist;
            v22 = (-1LL << (CurrentIrql + 1)) & 4;
            v23 = (unsigned int)v22 | v24[5];
            v24[5] = v23;
          }
          v27 = KeGetCurrentPrcb();
          v38 = 0;
          v28 = v27->SchedulerAssist;
          if ( v28 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v29 = v28[6];
              v28[6] = v29 + 1;
              if ( v29 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v30 = v27->SchedulerAssist;
            if ( v30 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v31 = v30[6] - 1;
                v30[6] = v31;
                if ( !v31 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
            do
              KeYieldProcessorEx(&v38, v22, v23, (__int64)v24);
            while ( CurrentThread->ThreadLock );
            v32 = v27->SchedulerAssist;
            if ( v32 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v33 = v32[6];
                v32[6] = v33 + 1;
                if ( v33 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v5 = v37;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v12 = &CurrentThread->152, ($C774EFD68449142D8271B1EC1EB7FB26 *)v12->ApcState.ApcListHead[0].Flink != v12)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState((__int64 *)&CurrentThread->600, (__int64)&CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v8 )
        KiReleaseThreadLockSafe(CurrentThread);
      result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v8 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
            {
              v16 = KeGetCurrentPrcb();
              v14 = (unsigned int)CurrentIrql + 1;
              v15 = (__int64)v16->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v26 = (v35 & *(_DWORD *)(v15 + 20)) == 0;
              v13 = (unsigned int)v35 & *(_DWORD *)(v15 + 20);
              *(_DWORD *)(v15 + 20) = v13;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v5 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process, v13, v15, v16);
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v12->ApcState.ApcListHead[0].Flink != v12 )
      {
        LOBYTE(v14) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v14);
      }
    }
  }
  return result;
}
