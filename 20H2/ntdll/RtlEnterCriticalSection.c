/*
 * XREFs of RtlEnterCriticalSection @ 0x18002FAA0
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     LdrpDynamicShimModule @ 0x18003D9E4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC4C (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18003DDB0 (LdrpSendDllNotifications.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044ABC (RtlpActivateLowFragmentationHeap.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D720 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18004DF50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004E160 (RtlSetEnvironmentVar.c)
 *     EtwpSwitchBuffer @ 0x180050174 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x180055234 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x1800563A0 (EtwpAllocateFreeBuffers.c)
 *     RtlSetCurrentDirectory_U @ 0x18005D030 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005D370 (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18005E190 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005E4A0 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18005EBA0 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 *     LdrpCheckForRetryLoading @ 0x18005FDE8 (LdrpCheckForRetryLoading.c)
 *     RtlSleepConditionVariableCS @ 0x1800642A0 (RtlSleepConditionVariableCS.c)
 *     LdrpGetLoadAsEntry @ 0x18006A28C (LdrpGetLoadAsEntry.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     RtlpComputePath @ 0x18006C7D0 (RtlpComputePath.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006ED10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18006F93C (RtlpSetProcMergedLangList.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071754 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     LdrAddLoadAsDataTable @ 0x180073110 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800738D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetHeapInformation @ 0x180073DB0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180073EC0 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800740CC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007429C (RtlpEnumProcessHeaps.c)
 *     RtlAcquirePebLock @ 0x180079A90 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x18007D0D0 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x180082AE0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x180082BB4 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800849BC (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084BF0 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089780 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008A540 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008BBD0 (RtlSetCurrentEnvironment.c)
 *     RtlPrepareForProcessCloning @ 0x18009C400 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD33C (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD42C (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800CE720 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6700 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7FE0 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D9AD4 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DA600 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF7DC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DFB70 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DFC08 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DFD34 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800F2560 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2A04 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800F2C40 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2E18 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2FE0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F6670 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6EB8 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x1800F8B50 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8F0C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9354 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F955C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9850 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FA0C4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA290 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1801029B0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180102BF0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180102CC0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180102D40 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180102D90 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180110DC0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18002FAF0 (RtlpEnterCriticalSectionContended.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
