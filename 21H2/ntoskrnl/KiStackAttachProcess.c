/*
 * XREFs of KiStackAttachProcess @ 0x14025C2E0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402043D0 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     KeForceAttachProcess @ 0x14025C278 (KeForceAttachProcess.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiDeleteFinalPageTables @ 0x140296F6C (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x140298FE0 (MmAttachSession.c)
 *     PsQueryProcessCommandLine @ 0x1402BEE10 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1402C49E4 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E18B0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
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
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
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
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     PspWow64InitThread @ 0x1406959A0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140696868 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x140697F38 (PoEnergyContextStart.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x1406AF8F8 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406B599C (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406BAEFC (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406BE5D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406BECD8 (PspDeleteUserStack.c)
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
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077C9DC (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140797740 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407A00AC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C3C70 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0EC4 (MmInitializeHandBuiltProcess2.c)
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
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x1402079D0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x14029BAA0 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FAD60 (HvlSwitchVirtualAddressSpace.c)
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
  $B1BEF1DC70D0553D212470EE5F0BB1FC *v13; // rsi
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
