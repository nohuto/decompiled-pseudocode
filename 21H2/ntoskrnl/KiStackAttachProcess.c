/*
 * XREFs of KiStackAttachProcess @ 0x14027D850
 * Callers:
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     PsQueryProcessCommandLine @ 0x14023D260 (PsQueryProcessCommandLine.c)
 *     SepRmCallLsa @ 0x14023FE60 (SepRmCallLsa.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140242F64 (PspIsProcessReadyForRemoteThread.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140292C00 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1118 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
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
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     PspWow64InitThread @ 0x1405F4EF0 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405F5DB8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PoEnergyContextStart @ 0x1405F6C30 (PoEnergyContextStart.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64SetupUserStack @ 0x14060E198 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x140614E58 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x14061A1CC (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14061D834 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x14061DDC8 (PspDeleteUserStack.c)
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
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     MmNewProcessInitialized @ 0x1406B0910 (MmNewProcessInitialized.c)
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 *     MiInSwapStoreWorker @ 0x1406BEB20 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     PsMapSystemDlls @ 0x1406C096C (PsMapSystemDlls.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
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
 *     CmpAddRemoveContainerToCLFSLog @ 0x14077CB9C (CmpAddRemoveContainerToCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140797940 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1407C4190 (PsStartSiloMonitor.c)
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D1034 (MmInitializeHandBuiltProcess2.c)
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
 *     EmpMapPhysicalAddress @ 0x140A487DC (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140A4C0C0 (PspInitPhase3.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140213470 (KiInSwapSingleProcess.c)
 *     KiAttachProcess @ 0x1402ABC40 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
 */

char __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r13
  __int64 v5; // r10
  unsigned __int64 v8; // rax
  int v9; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v11; // rcx
  $B1BEF1DC70D0553D212470EE5F0BB1FC *v12; // rsi
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
      LOBYTE(v8) = KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, v5);
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
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiInSwapSingleProcess(CurrentThread, (__int64)BugCheckParameter1, CurrentIrql);
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
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
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
