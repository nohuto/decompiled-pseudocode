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
 *     LdrpDynamicShimModule @ 0x18003D994 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DBFC (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18003DD60 (LdrpSendDllNotifications.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044A6C (RtlpActivateLowFragmentationHeap.c)
 *     RtlCreateProcessParametersInternal @ 0x18004D6D0 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18004DF00 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004E110 (RtlSetEnvironmentVar.c)
 *     EtwpSwitchBuffer @ 0x180050124 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1800551E4 (EtwpFlushActiveBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x180056350 (EtwpAllocateFreeBuffers.c)
 *     RtlSetCurrentDirectory_U @ 0x18005CFE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005D320 (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18005D92C (LdrpDropLastInProgressCount.c)
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18005E080 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005E390 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18005EA90 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 *     LdrpCheckForRetryLoading @ 0x18005FCD8 (LdrpCheckForRetryLoading.c)
 *     RtlSleepConditionVariableCS @ 0x180064190 (RtlSleepConditionVariableCS.c)
 *     LdrpGetLoadAsEntry @ 0x18006A17C (LdrpGetLoadAsEntry.c)
 *     LdrpUnloadNode @ 0x18006A3E8 (LdrpUnloadNode.c)
 *     LdrpLoadShimEngine @ 0x18006B7E4 (LdrpLoadShimEngine.c)
 *     RtlpComputePath @ 0x18006C6C0 (RtlpComputePath.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006EC10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18006F83C (RtlpSetProcMergedLangList.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071654 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     LdrAddLoadAsDataTable @ 0x180073010 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800737D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetHeapInformation @ 0x180073CB0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180073DC0 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180073FCC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     RtlAcquirePebLock @ 0x180079990 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x18007CFD0 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x1800829E0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x180082AB4 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x1800848BC (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084AF0 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008904C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089680 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008A440 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008BAD0 (RtlSetCurrentEnvironment.c)
 *     RtlPrepareForProcessCloning @ 0x18009B4B0 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD15C (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD24C (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800CE540 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6360 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D9734 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DA260 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF43C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DF7D0 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DF868 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DF994 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800F2050 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F24F4 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800F2730 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2908 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2AD0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F6160 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F69A8 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x1800F8640 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F89FC (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F8E44 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F904C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9340 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F94E4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9630 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9BB4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800F9D80 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800F9F14 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA128 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1801024A0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801026E0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1801027B0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180102830 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180102880 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x1801108B0 (EtwpBufferingModeFlush.c)
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
