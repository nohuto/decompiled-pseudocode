/*
 * XREFs of KiUnstackDetachProcess @ 0x140268320
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14025CA90 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     KeForceDetachProcess @ 0x140317684 (KeForceDetachProcess.c)
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
 *     CmpInitHiveFromFile @ 0x14064EC08 (CmpInitHiveFromFile.c)
 *     EtwTraceAppStateChange @ 0x14064FBB0 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x140653560 (ExpWnfWriteStateData.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14066FA70 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDelayCloseWorker @ 0x140670BA0 (CmpDelayCloseWorker.c)
 *     NtEnumerateValueKey @ 0x1406775B0 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
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
 *     NtCommitRegistryTransaction @ 0x1406A0FE0 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406A37D8 (CmpCleanUpKCBCacheTable.c)
 *     NtQueryMultipleValueKey @ 0x1406A4AE0 (NtQueryMultipleValueKey.c)
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406ADCA4 (PspWritePebAffinityInfo.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406D124C (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     PspSetupReservedUserMappings @ 0x1406D6F04 (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     EtwpTiQueryVad @ 0x1406DB62C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406DE584 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406DEE58 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406EF8FC (PsMapSystemDlls.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 *     MiInSwapStoreWorker @ 0x1406F0DB0 (MiInSwapStoreWorker.c)
 *     MiUnmapImageInSystemSpace @ 0x14070D7F4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1407175D0 (EtwpRealtimeInjectEtwBuffer.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140724EC0 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x14072F4E0 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x14078D390 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x140795B8C (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407BF870 (PsStartSiloMonitor.c)
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C4A78 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407CCC14 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 *     NtRestoreKey @ 0x14086B8A0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14086BB70 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x14086BDB0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x14086BE40 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x14086C738 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086CA48 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086CEFC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x140874D50 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140879330 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x140A4873C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A4888C (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A77164 (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x140268550 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KiMoveApcState @ 0x140268D20 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x140268DA0 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, int a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int v6; // esi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  $C774EFD68449142D8271B1EC1EB7FB26 *v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  bool v20; // zf
  _DWORD *v21; // r9
  struct _KPRCB *v22; // rdi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+70h] [rbp+18h] BYREF

  v34 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess();
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v6 = a2 & 2;
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
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v33 = 0;
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v9[6];
            v9[6] = v15 + 1;
            if ( v15 == -1 )
LABEL_35:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v12 = CurrentPrcb->SchedulerAssist;
          if ( v12 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v12[6] - 1;
              v12[6] = v16;
              if ( !v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v33);
          while ( CurrentThread->ThreadLock );
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v13[6];
              v13[6] = v17 + 1;
              if ( v17 == -1 )
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
              v18 = KeGetCurrentPrcb();
              v19 = v18->SchedulerAssist;
              v20 = (v19[5] & 0xFFFF0001) == 0;
              v19[5] &= 0xFFFF0001;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v21 = KeGetCurrentPrcb()->SchedulerAssist;
            v21[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v22 = KeGetCurrentPrcb();
          v35 = 0;
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v24 = v23[6];
              v23[6] = v24 + 1;
              if ( v24 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v25 = v22->SchedulerAssist;
            if ( v25 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v26 = v25[6] - 1;
                v25[6] = v26;
                if ( !v26 )
                  KiRemoveSystemWorkPriorityKick(v22);
              }
            }
            do
              KeYieldProcessorEx(&v35);
            while ( CurrentThread->ThreadLock );
            v27 = v22->SchedulerAssist;
            if ( v27 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v28 = v27[6];
                v27[6] = v28 + 1;
                if ( v28 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v34;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v6 )
        KiReleaseThreadLockSafe(CurrentThread);
      result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v6 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v11 = (unsigned int)CurrentIrql + 1;
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v11) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v11);
      }
    }
  }
  return result;
}
