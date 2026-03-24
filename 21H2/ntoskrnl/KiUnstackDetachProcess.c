/*
 * XREFs of KiUnstackDetachProcess @ 0x140207000
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402043D0 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiDeleteFinalPageTables @ 0x140296F6C (MiDeleteFinalPageTables.c)
 *     MmDetachSession @ 0x140298F40 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x1402BA388 (KeForceDetachProcess.c)
 *     PsQueryProcessCommandLine @ 0x1402BEE10 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1402C49E4 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E18B0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AA5C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14035C1E8 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14035D458 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiFlushAllPages @ 0x1403846E4 (MiFlushAllPages.c)
 *     MiEmptyAccessLogs @ 0x1403A3430 (MiEmptyAccessLogs.c)
 *     SepAdtLogAuditRecord @ 0x1403C2454 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140505C70 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x140513A40 (KeSecureProcess.c)
 *     KiTpWriteMemory @ 0x14051D4FC (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CF2C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C9EC (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x140546DE0 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x14055B2F8 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599604 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405999C0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x1405B9460 (ExpSvmServicePageFault.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x1405F7640 (MiFindNextEnclaveBoundary.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605C30 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExpWnfWriteStateData @ 0x1406104B0 (ExpWnfWriteStateData.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140612654 (PspWritePebAffinityInfo.c)
 *     AlpcViewDestroyProcedure @ 0x14061DE30 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E590 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcpRestoreWriteAccess @ 0x14061F950 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x14061FA10 (MmProbeAndLockProcessPages.c)
 *     ObpDecrementHandleCount @ 0x14062CA04 (ObpDecrementHandleCount.c)
 *     EtwpAddRegEntryToGroup @ 0x140643580 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140645E50 (EtwpRealtimeInjectEtwBuffer.c)
 *     PspWriteTebIdealProcessor @ 0x1406476C8 (PspWriteTebIdealProcessor.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x14064BE0C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x14064C384 (PspSetupUserStack.c)
 *     PspWriteTebImpersonationInfo @ 0x14065B280 (PspWriteTebImpersonationInfo.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140661B50 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140661FB8 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406621F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140665BF0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpInitHiveFromFile @ 0x140670FA8 (CmpInitHiveFromFile.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     PspWow64InitThread @ 0x1406959A0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140696868 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x140697F38 (PoEnergyContextStart.c)
 *     NtQueryMultipleValueKey @ 0x1406A1E20 (NtQueryMultipleValueKey.c)
 *     NtCommitRegistryTransaction @ 0x1406A2B80 (NtCommitRegistryTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406AF8F8 (PspWow64SetupUserStack.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     PspSetupReservedUserMappings @ 0x1406B599C (PspSetupReservedUserMappings.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 *     EtwpTiQueryVad @ 0x1406BAEFC (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406BE5D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406BECD8 (PspDeleteUserStack.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406C62F0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1406C8970 (PfSnPopulateReadList.c)
 *     EtwTraceAppStateChange @ 0x1406CDBB8 (EtwTraceAppStateChange.c)
 *     MmNewProcessInitialized @ 0x1406D9630 (MmNewProcessInitialized.c)
 *     MmDeleteTeb @ 0x1406E93D0 (MmDeleteTeb.c)
 *     MiMapViewOfSection @ 0x1406EBA30 (MiMapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1406ED600 (MmFreeVirtualMemory.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 *     MmProcessWorkingSetControl @ 0x14070EE14 (MmProcessWorkingSetControl.c)
 *     MiInSwapStoreWorker @ 0x1407104D0 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1407108F8 (MmPrefetchVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x1407114D4 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x14071231C (PsMapSystemDlls.c)
 *     MiUnmapImageInSystemSpace @ 0x1407155A4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     CmpCleanUpKCBCacheTable @ 0x140719A14 (CmpCleanUpKCBCacheTable.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     NtSaveKeyEx @ 0x140728950 (NtSaveKeyEx.c)
 *     NtRollbackRegistryTransaction @ 0x140733730 (NtRollbackRegistryTransaction.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C9DC (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140797740 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407A00AC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C3C70 (PsStartSiloMonitor.c)
 *     CmpInitializeRegistryProcess @ 0x1407C606C (CmpInitializeRegistryProcess.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8D38 (CmpHandlePageFileOpenNotification.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0EC4 (MmInitializeHandBuiltProcess2.c)
 *     NtCompressKey @ 0x1408682E0 (NtCompressKey.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 *     NtRestoreKey @ 0x1408694D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697A0 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1408699E0 (NtThawRegistry.c)
 *     CmCallbackGetKeyObjectID @ 0x140869A70 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x14086A368 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x14086A678 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB2C (CmpPublishEventForPcaResolver.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F1D4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpFlushBackupHive @ 0x140870F40 (CmpFlushBackupHive.c)
 *     CmReconcileAndValidateAllHives @ 0x1408725A0 (CmReconcileAndValidateAllHives.c)
 *     CmpRmUnDoPhase @ 0x1408759F4 (CmpRmUnDoPhase.c)
 *     CmpForceFlushWorker @ 0x140876CB0 (CmpForceFlushWorker.c)
 *     DbgkSendSystemDllMessages @ 0x1408844DC (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140884B2C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884DCC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140886810 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140886D50 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140891924 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140891C00 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x1408BD28C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C3570 (AlpcpForceUnlinkSecureView.c)
 *     MiHotPatchAllProcesses @ 0x1408CA278 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CBFBC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CDEE8 (MiQueryProcessActivePatches.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x1408D1964 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408D39BC (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D3BFC (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x1408D3D20 (NtCreateEnclave.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1408D9060 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D93B4 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x1408D9780 (MiInsertChildVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9B00 (MiInSwapSharedWorkingSetWorker.c)
 *     MiCopyLargeVad @ 0x1408D9D20 (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409074C0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D04 (PspProcessDynamicEHContinuationTargets.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x140908720 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x140909F9C (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x14090A5DC (PspSetupUserShadowStack.c)
 *     PsUnregisterSiloMonitor @ 0x14090B4E0 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x14090CB3C (PspIumGetPhysicalPage.c)
 *     VmpPrefetchWorker @ 0x14092FA30 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409342EC (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140934580 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EB60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409412CC (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpCovSampEnumerateProcess @ 0x140944A80 (EtwpCovSampEnumerateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     EmpCacheBiosDate @ 0x140A4768C (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 * Callees:
 *     KiSwapProcess @ 0x140207230 (KiSwapProcess.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     KiMoveApcState @ 0x140207A00 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x140207A80 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FDED0 (KeBugCheck.c)
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
  $C459BD0D405E8E46662177FB3D0A143F *v10; // rdi
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
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(v11) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(v11);
      }
    }
  }
  return result;
}
