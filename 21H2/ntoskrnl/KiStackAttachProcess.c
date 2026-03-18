/*
 * XREFs of KiStackAttachProcess @ 0x14030D5C0
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x140216EE8 (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14024E388 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14025E9D0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     MiFlushAllPages @ 0x14038A880 (MiFlushAllPages.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140394080 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14056C6B8 (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x14056FA60 (KeCopyXfdMaskToTeb.c)
 *     KiTpWriteMemory @ 0x140573408 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14058196C (MmSetCommitReleaseEligibility.c)
 *     MmQueryBadAddresses @ 0x14058FE88 (MmQueryBadAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14059774C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1405A6204 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405F7344 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405F774C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x140641840 (ExpSvmServicePageFault.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspWritePebAffinityInfo @ 0x140672BD8 (PspWritePebAffinityInfo.c)
 *     PoEnergyContextStart @ 0x140673B4C (PoEnergyContextStart.c)
 *     PspWow64InitThread @ 0x1406747FC (PspWow64InitThread.c)
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspQueryQuotaLimits @ 0x1406B48F0 (PspQueryQuotaLimits.c)
 *     PspWow64SetupUserStack @ 0x1406C9C7C (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406D94F0 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406D98F8 (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406E5B58 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406E616C (PspDeleteUserStack.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     AlpcpRestoreWriteAccess @ 0x1406F60E8 (AlpcpRestoreWriteAccess.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 *     PspWriteTebIdealProcessor @ 0x1407028B8 (PspWriteTebIdealProcessor.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407049DC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmProbeAndLockProcessPages @ 0x140708890 (MmProbeAndLockProcessPages.c)
 *     MmCreateTeb @ 0x1407096A4 (MmCreateTeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x14070AE08 (EtwpWriteProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     PsMapSystemDlls @ 0x140756164 (PsMapSystemDlls.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140798F44 (EtwpRealtimeInjectEtwBuffer.c)
 *     MmDeleteTeb @ 0x14079EE84 (MmDeleteTeb.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     PspWriteTebImpersonationInfo @ 0x1407AF4B0 (PspWriteTebImpersonationInfo.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407BEBF0 (NtProtectVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1407DF200 (PfSnPopulateReadList.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     PspSetupUserStack @ 0x1407E4964 (PspSetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14080CD20 (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860DAC (MmInitializeHandBuiltProcess2.c)
 *     PspIumGetPhysicalPage @ 0x1408824D0 (PspIumGetPhysicalPage.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1409279CC (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140927C7C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14092972C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140934B80 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x14096324C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14097723C (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x140978B04 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x14097AC04 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x14097AD20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14097B220 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14097FF40 (MiInSwapSharedWorkingSetWorker.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AD320 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ADDA4 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AE050 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1409AEAA0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1409AF550 (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x1409AFB7C (PspSetupUserShadowStack.c)
 *     PspApplyWorkingSetLimits @ 0x1409AFE9C (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     VmpPrefetchWorker @ 0x1409DA4D0 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409E47C4 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E4A50 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EB400 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F1110 (EtwpCovSampEnumerateProcess.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     EmpMapPhysicalAddress @ 0x140B0DAC4 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140B313B8 (PspInitPhase3.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x14021158C (KiInSwapSingleProcess.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x140347550 (KiSetAddressPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14054CAE0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // r10
  int v7; // ebp
  unsigned __int64 v9; // rax
  int v10; // esi
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v12; // rcx
  $A86797CF303B55BC33C4C82ECEB93C70 *v13; // r14
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *Process; // r13
  unsigned __int64 GroupIndex; // r12
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // rbp
  _DWORD *v30; // rcx
  struct _LIST_ENTRY *v31; // rcx
  struct _LIST_ENTRY *Blink; // rax
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
  if ( ((unsigned __int8)SchedulerAssist & (unsigned __int8)v9) != 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
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
LABEL_50:
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
              goto LABEL_50;
          }
        }
      }
      v6 = v52;
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LOBYTE(v9) = KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, v7, v6);
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
        v31 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v31;
        v15->Header.WaitListHead.Flink = v16;
        v31->Flink = v16;
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
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiInSwapSingleProcess(CurrentThread, (__int64)BugCheckParameter1, CurrentIrql);
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
        __writegsqword(0xA000u, v24);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
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
