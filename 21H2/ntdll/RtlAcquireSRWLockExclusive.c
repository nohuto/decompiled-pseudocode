/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x1800290A0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlpHpHeapExtendContext @ 0x180003030 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180003144 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180004754 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x180005664 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x180006534 (RtlpCSparseBitmapLock.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x180006B88 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180007CDC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpFcInsertChangeRegistration @ 0x180009438 (RtlpFcInsertChangeRegistration.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180009638 (RtlpHpStackTraceHeapDestroy.c)
 *     TpWaitForWait @ 0x180009990 (TpWaitForWait.c)
 *     TpTimerOutstandingCallbackCount @ 0x180009BB0 (TpTimerOutstandingCallbackCount.c)
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180009D50 (RtlCreateTimer.c)
 *     TpWaitOutstandingCallbackCount @ 0x18000B568 (TpWaitOutstandingCallbackCount.c)
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     TpReleaseWait @ 0x18000C270 (TpReleaseWait.c)
 *     TppCleanupGroupAddMember @ 0x18000C490 (TppCleanupGroupAddMember.c)
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     LdrProtectMrdataHeap @ 0x18000EED4 (LdrProtectMrdataHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpPinModule @ 0x18000F948 (LdrpPinModule.c)
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     AlpcGetMessageFromCompletionList @ 0x180010A60 (AlpcGetMessageFromCompletionList.c)
 *     TppWaitCompletion @ 0x180010D20 (TppWaitCompletion.c)
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     TpWaitForTimer @ 0x180011200 (TpWaitForTimer.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     RtlpGetCachedPath @ 0x180011708 (RtlpGetCachedPath.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     TpStartAsyncIoOperation @ 0x1800127E0 (TpStartAsyncIoOperation.c)
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x18001F59C (LdrpBuildForwarderLink.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE04 (SbUpdateSwitchContextBasedOnDll.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425FC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     EtwpSetProviderTraits @ 0x180042B48 (EtwpSetProviderTraits.c)
 *     EtwNotificationRegister @ 0x180043040 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x180043394 (EtwpFindGuidEntry.c)
 *     EtwpInsertRegistration @ 0x180043464 (EtwpInsertRegistration.c)
 *     RtlpCreateSerializationGroup @ 0x180044D5C (RtlpCreateSerializationGroup.c)
 *     EtwpDisableTraceProviders @ 0x180044FF4 (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x1800452B0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18004563C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18004572C (EtwpFindRegistration.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180047D08 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180047DB4 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpInsertGuidEntry @ 0x180048114 (EtwpInsertGuidEntry.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     TpReleaseCleanupGroupMembers @ 0x18004CCC0 (TpReleaseCleanupGroupMembers.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x18004E250 (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x18004E664 (TppWorkerFindTask.c)
 *     TppPoolAddWorker @ 0x18004EBB0 (TppPoolAddWorker.c)
 *     TppPoolRemoveWorker @ 0x18004EE54 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     RtlFlsSetValue @ 0x18004FB60 (RtlFlsSetValue.c)
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180051638 (EtwpRemoveRegistrationFromTable.c)
 *     LdrpFindLoadedDllByAddress @ 0x180053A30 (LdrpFindLoadedDllByAddress.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005411C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 *     LdrpQueueDeferredTlsData @ 0x1800553B4 (LdrpQueueDeferredTlsData.c)
 *     RtlpLockAtomTable @ 0x180059958 (RtlpLockAtomTable.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x18005E3D0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x18005E430 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x18005E4C4 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x18005E504 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x18005E9B0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x18005EA20 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18005EACC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x18005EB60 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x18005EC00 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x18005ECB0 (RtlLockModuleSection.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005F2B4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     RtlpHpHeapLock @ 0x18005FAF4 (RtlpHpHeapLock.c)
 *     LdrpFindExistingModule @ 0x180061004 (LdrpFindExistingModule.c)
 *     LdrpComputeLazyDllPath @ 0x1800614A0 (LdrpComputeLazyDllPath.c)
 *     LdrpLoadContextReplaceModule @ 0x1800617EC (LdrpLoadContextReplaceModule.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180063BDC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E6C (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x1800640A0 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x180064618 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800650D8 (RtlpDecrementWnfSerializationGroup.c)
 *     TpTrimPools @ 0x1800651D0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800654F0 (RtlSleepConditionVariableSRW.c)
 *     RtlDeleteFunctionTable @ 0x180068EE0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x1800690C0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180069900 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B810 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006EA58 (RtlpHpVsSubsegmentCommitPages.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F498 (LdrpCondenseGraphRecurse.c)
 *     TpSetDefaultPoolStackInformation @ 0x180070A40 (TpSetDefaultPoolStackInformation.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800712E4 (RtlpLowFragHeapAllocateFromZone.c)
 *     LdrpCleanupThreadTlsData @ 0x1800715A4 (LdrpCleanupThreadTlsData.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180071E24 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071F18 (RtlpHpVsContextGrowInPlace.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800746B0 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800757F4 (LdrpFindLoadedDllByMapping.c)
 *     ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x1800758A4 (-RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z.c)
 *     TppCleanupGroupRemoveMember @ 0x180076F4C (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitCheckReset @ 0x18007973C (RtlpTpWaitCheckReset.c)
 *     TppDirectExecuteCallback @ 0x180079980 (TppDirectExecuteCallback.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007EE30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     LdrpReleaseTlsEntry @ 0x18007F060 (LdrpReleaseTlsEntry.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007F1B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpFcRemoveChangeRegistration @ 0x18007F8CC (RtlpFcRemoveChangeRegistration.c)
 *     LdrGetDllDirectory @ 0x18007F920 (LdrGetDllDirectory.c)
 *     TppJobpRundownJob @ 0x18007FCD8 (TppJobpRundownJob.c)
 *     RtlSetSearchPathMode @ 0x1800803A0 (RtlSetSearchPathMode.c)
 *     LdrSetDllDirectory @ 0x180080640 (LdrSetDllDirectory.c)
 *     LdrpInsertModuleToIndex @ 0x180080760 (LdrpInsertModuleToIndex.c)
 *     RtlpGetNormalization @ 0x180080F40 (RtlpGetNormalization.c)
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 *     EtwpTrackProviderBinary @ 0x180081E38 (EtwpTrackProviderBinary.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 *     RtlUpdateTimer @ 0x180082400 (RtlUpdateTimer.c)
 *     RtlpRemoveVectoredHandler @ 0x1800828A0 (RtlpRemoveVectoredHandler.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180083F60 (RtlpInitializeStaticCriticalSection.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D60 (RtlDeleteTimerQueueEx.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180085520 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180085580 (RtlDestroyMemoryZone.c)
 *     TppTimerpStopCallbackGeneration @ 0x180085790 (TppTimerpStopCallbackGeneration.c)
 *     TpDisablePoolCallbackChecks @ 0x1800859D0 (TpDisablePoolCallbackChecks.c)
 *     TppStopWaitCallbackGeneration @ 0x1800860D0 (TppStopWaitCallbackGeneration.c)
 *     LdrFlushAlternateResourceModules @ 0x180089A50 (LdrFlushAlternateResourceModules.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18008A6D4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     TppQueueRemoveHead @ 0x18008AA6C (TppQueueRemoveHead.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008B4C0 (RtlpWnfRetryTimerCallback.c)
 *     LdrAddDllDirectory @ 0x18008BD10 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008C420 (LdrRemoveDllDirectory.c)
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE190 (LdrQueryModuleServiceTags.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEC90 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D534C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5A50 (LdrForkMrdata.c)
 *     RtlCloneUserProcess @ 0x1800D6470 (RtlCloneUserProcess.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEC50 (LdrUpdatePackageSearchPath.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DF334 (RtlpSignalSystemDirsModification.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF49C (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlGrowFunctionTable @ 0x1800E0B90 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800EB290 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x1800EB2F0 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800ED940 (RtlDeleteBarrier.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F7B70 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F7CA0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F7D54 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800FDFCC (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800FEA0C (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800FEAE8 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FEBD4 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FED14 (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLockAcquire @ 0x180101968 (RtlpStdLockAcquire.c)
 *     RtlpFcChangeRegistrationCallback @ 0x180101DF0 (RtlpFcChangeRegistrationCallback.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180108AA8 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180108E5C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x180109034 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180109088 (RtlpHpStackTraceEnable.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010BAB0 (RtlpIsLFHZoneAllocation.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010E250 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010E2C4 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLargeReAlloc @ 0x18010E93C (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x18010F0B4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010F224 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010F3A4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x18010F954 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010FC08 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsContextFreeList @ 0x18010FDB0 (RtlpHpVsContextFreeList.c)
 *     TpSetDefaultPoolCpuSets @ 0x180111D18 (TpSetDefaultPoolCpuSets.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111D70 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetPoolThreadCpuSets @ 0x180111EC0 (TpSetPoolThreadCpuSets.c)
 *     TppDirectUnposted @ 0x180112020 (TppDirectUnposted.c)
 *     RtlSetIoCompletionCallback @ 0x180112F80 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoDllLoaded @ 0x18011341C (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x18011362C (RtlpTpIoDllUnloaded.c)
 *     RtlpTpIoLookup @ 0x1801136C4 (RtlpTpIoLookup.c)
 *     RtlStackDbContextSerialize @ 0x180118704 (RtlStackDbContextSerialize.c)
 *     RtlStackDbStackAdd @ 0x180118A50 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180119028 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18011947C (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x180119A88 (RtlpStackDbSegmentRemoveRef.c)
 * Callees:
 *     RtlBackoff @ 0x18005E2E8 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180064DE0 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x18007ABEC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A1030 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 i; // rdx
  _RTL_SRWLOCK *v2; // r8
  char *v3; // r9
  PRTL_SRWLOCK v4; // rsi
  unsigned __int64 Value; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  PRTL_SRWLOCK v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  unsigned int v16[3]; // [rsp+44h] [rbp-24h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = SRWLock;
  v17 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Value = SRWLock->Value;
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(SRWLock, i, v2, v3, v11) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v16[0] = 3;
        v13 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v12 = 0LL;
          v15 = -1;
          SRWLock = (PRTL_SRWLOCK)(unsigned __int8)Value;
          v11 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v11 | Value & 8 | 7;
          LOBYTE(SRWLock) = (Value & 4) == 0;
        }
        else
        {
          v6 = 11LL;
          v12 = &v11;
          v15 = Value >> 4;
          if ( v15 <= 1 )
            v6 = 3LL;
          i = (unsigned __int64)&v11 | v6;
          if ( !(unsigned int)(Value >> 4) )
            v15 = -2;
        }
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, i, Value);
        v7 = Value == v8;
        Value = v8;
        if ( !v7 )
          goto LABEL_13;
        if ( (_BYTE)SRWLock )
          RtlpOptimizeSRWLockList(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v2 = (_RTL_SRWLOCK *)__rdtsc();
            v3 = (char *)v2 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              SRWLock = (PRTL_SRWLOCK)v16[0];
              if ( (v16[0] & 2) == 0 )
                break;
              SRWLock = v2;
              v10 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v10) << 32;
              v2 = (_RTL_SRWLOCK *)v10;
              if ( v10 <= (unsigned __int64)SRWLock || v10 >= (unsigned __int64)v3 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              SRWLock = (PRTL_SRWLOCK)v16[0];
              if ( (v16[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v16, 1u) )
        {
          do
            NtWaitForAlertByThreadId(v4, 0LL);
          while ( (v16[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v4, Value + 1, Value) )
          return;
LABEL_13:
        RtlBackoff(&v17);
        _m_prefetchw(v4);
        Value = v4->Value;
      }
    }
  }
}
