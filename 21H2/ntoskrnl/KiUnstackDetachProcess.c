/*
 * XREFs of KiUnstackDetachProcess @ 0x1402AB900
 * Callers:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     PsQueryProcessCommandLine @ 0x14023D260 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140242F64 (PspIsProcessReadyForRemoteThread.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140292C00 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1118 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiFlushAllPages @ 0x140384834 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140505BF0 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x140513C80 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14051D73C (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14052D16C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053CC2C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x140547020 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x14055B538 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599834 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140599BF0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B9690 (ExpSvmServicePageFault.c)
 *     NtCommitRegistryTransaction @ 0x1405DE880 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     CmpCleanUpKCBCacheTable @ 0x1405E0B60 (CmpCleanUpKCBCacheTable.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     PspWow64InitThread @ 0x1405F4EF0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405F5DB8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x1405F6C30 (PoEnergyContextStart.c)
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x14060E198 (PspWow64SetupUserStack.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x140614E58 (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     EtwpTiQueryVad @ 0x14061A1CC (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14061D834 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x14061DDC8 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14063AC3C (EtwpRealtimeInjectEtwBuffer.c)
 *     PspWriteTebIdealProcessor @ 0x14063C4B8 (PspWriteTebIdealProcessor.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x140640C2C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1406411A4 (PspSetupUserStack.c)
 *     PspWriteTebImpersonationInfo @ 0x1406500A0 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140657018 (MmSecureVirtualMemoryAgainstWrites.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14065AA10 (CmCallbackGetKeyObjectIDEx.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x140677260 (PfSnPopulateReadList.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcpRestoreWriteAccess @ 0x1406895C0 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x140689680 (MmProbeAndLockProcessPages.c)
 *     ExpWnfWriteStateData @ 0x14069FF60 (ExpWnfWriteStateData.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406A2104 (PspWritePebAffinityInfo.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     MmNewProcessInitialized @ 0x1406B0910 (MmNewProcessInitialized.c)
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 *     MiInSwapStoreWorker @ 0x1406BEB20 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406C096C (PsMapSystemDlls.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1406E6DA0 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     EtwpWriteProcessEvent @ 0x1406F2264 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x1406F3D00 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x1406F55A0 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406F56C0 (PspApplyWorkingSetLimitsToProcess.c)
 *     MmDeleteTeb @ 0x1407007B0 (MmDeleteTeb.c)
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x1407338F0 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140797940 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C4190 (PsStartSiloMonitor.c)
 *     CmpInitializeRegistryProcess @ 0x1407C638C (CmpInitializeRegistryProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C9058 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D1034 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140869900 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140869B40 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140869BD0 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x14086A4C8 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086A7D8 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AC8C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x140872700 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140876E10 (CmpForceFlushWorker.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140884C8C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884F2C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140886970 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140891A84 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140891D60 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408BD3EC (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C36D0 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408CA3D8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CE048 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408D1180 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D3D5C (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408D3E80 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9514 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408D98E0 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9C60 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408D9E80 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x140907620 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907E64 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140908880 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x14090A0FC (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x14090A73C (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x14090B640 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14090CC9C (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14092FB90 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409344BC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140934750 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093ED30 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094149C (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140944C50 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 *     EmpCacheBiosDate @ 0x140A4868C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A487DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4C0C0 (PspInitPhase3.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSwapProcess @ 0x1402ABB30 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     KiMoveApcState @ 0x1402AC300 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int v6; // esi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  $C459BD0D405E8E46662177FB3D0A143F *v10; // rdi
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  bool v19; // zf
  _DWORD *v20; // r9
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  int v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v33 = a2;
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
        v32 = 0;
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v9[6];
            v9[6] = v14 + 1;
            if ( v14 == -1 )
LABEL_35:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v11 = CurrentPrcb->SchedulerAssist;
          if ( v11 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v11[6] - 1;
              v11[6] = v15;
              if ( !v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v32);
          while ( CurrentThread->ThreadLock );
          v12 = CurrentPrcb->SchedulerAssist;
          if ( v12 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v12[6];
              v12[6] = v16 + 1;
              if ( v16 == -1 )
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
          KiReleaseThreadLockSafe((__int64)CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = (v18[5] & 0xFFFF0001) == 0;
              v18[5] &= 0xFFFF0001;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v20 = KeGetCurrentPrcb()->SchedulerAssist;
            v20[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v21 = KeGetCurrentPrcb();
          v34 = 0;
          v22 = v21->SchedulerAssist;
          if ( v22 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v23 = v22[6];
              v22[6] = v23 + 1;
              if ( v23 == -1 )
LABEL_55:
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v24 = v21->SchedulerAssist;
            if ( v24 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v25 = v24[6] - 1;
                v24[6] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            do
              KeYieldProcessorEx(&v34);
            while ( CurrentThread->ThreadLock );
            v26 = v21->SchedulerAssist;
            if ( v26 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v27 = v26[6];
                v26[6] = v27 + 1;
                if ( v27 == -1 )
                  goto LABEL_55;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v33;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v6 )
        KiReleaseThreadLockSafe((__int64)CurrentThread);
      result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v6 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(1);
      }
    }
  }
  return result;
}
