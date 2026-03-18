/*
 * XREFs of KiUnstackDetachProcess @ 0x140205370
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiDeleteFinalPageTables @ 0x14026B62C (MiDeleteFinalPageTables.c)
 *     MmEnforceWorkingSetLimit @ 0x14027B43C (MmEnforceWorkingSetLimit.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140302F58 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14030CBC4 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FEBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
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
 *     CmpDelayCloseWorker @ 0x1405DF360 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405E5670 (CmCallbackGetKeyObjectIDEx.c)
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1405EB1A0 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
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
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     EtwTraceAppStateChange @ 0x14061EF70 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfWriteStateData @ 0x1406223B0 (ExpWnfWriteStateData.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140652BC8 (CmpCleanUpKCBCacheTable.c)
 *     NtCommitRegistryTransaction @ 0x140653230 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
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
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406FE2E8 (PspWow64SetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x140703CF8 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x140708E1C (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14070C444 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x14070C948 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x1407214F0 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 *     CmpInitializeRegistryProcess @ 0x140781E8C (CmpInitializeRegistryProcess.c)
 *     MmCreateShadowMapping @ 0x140787E7C (MmCreateShadowMapping.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     PsStartSiloMonitor @ 0x1407B1930 (PsStartSiloMonitor.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B6248 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407BE384 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140865E80 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140866150 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140866390 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140866420 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140867028 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1408674DC (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x14086F200 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x1408725B4 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x1408737E0 (CmpForceFlushWorker.c)
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
 *     EmpCacheBiosDate @ 0x140A4249C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A425EC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A70F94 (PspInitPhase3.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1402051D8 (KiDecrementProcessStackCount.c)
 *     KiMoveApcState @ 0x1402052F0 (KiMoveApcState.c)
 *     KiSwapProcess @ 0x1402055A0 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r14
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
  __int64 v18; // rdx
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  bool v21; // zf
  _DWORD *v22; // r9
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  int v34; // [rsp+60h] [rbp+8h] BYREF
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+70h] [rbp+18h] BYREF

  v35 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
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
          a2 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= a2;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v34 = 0;
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
            KeYieldProcessorEx(&v34, a2);
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
              v19 = KeGetCurrentPrcb();
              v18 = -2LL;
              v20 = v19->SchedulerAssist;
              v21 = (v20[5] & 0xFFFF0001) == 0;
              v20[5] &= 0xFFFF0001;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v22 = KeGetCurrentPrcb()->SchedulerAssist;
            v18 = (-1LL << (CurrentIrql + 1)) & 4;
            v22[5] |= v18;
          }
          v23 = KeGetCurrentPrcb();
          v36 = 0;
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v25 = v24[6];
              v24[6] = v25 + 1;
              if ( v25 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v26 = v23->SchedulerAssist;
            if ( v26 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v27 = v26[6] - 1;
                v26[6] = v27;
                if ( !v27 )
                  KiRemoveSystemWorkPriorityKick(v23);
              }
            }
            do
              KeYieldProcessorEx(&v36, v18);
            while ( CurrentThread->ThreadLock );
            v28 = v23->SchedulerAssist;
            if ( v28 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v29 = v28[6];
                v28[6] = v29 + 1;
                if ( v29 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v35;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState((__int64 *)&CurrentThread->600, (__int64)&CurrentThread->152);
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
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v11 = (unsigned int)CurrentIrql + 1;
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v21 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v31);
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
