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
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18003DD70 (LdrpSendDllNotifications.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpFlushActiveBuffers @ 0x18004C7E4 (EtwpFlushActiveBuffers.c)
 *     EtwpSwitchBuffer @ 0x180051284 (EtwpSwitchBuffer.c)
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     RtlSetCurrentDirectory_U @ 0x18005E560 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E8A0 (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18005EEAC (LdrpDropLastInProgressCount.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005F990 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005FEF4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x180060090 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x18006011C (LdrpProcessWork.c)
 *     LdrpCheckForRetryLoading @ 0x1800612D8 (LdrpCheckForRetryLoading.c)
 *     RtlSleepConditionVariableCS @ 0x180065790 (RtlSleepConditionVariableCS.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006FD40 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18007096C (RtlpSetProcMergedLangList.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072784 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     LdrAddLoadAsDataTable @ 0x180074140 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180074900 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180074EF0 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x1800752CC (RtlpEnumProcessHeaps.c)
 *     RtlAcquirePebLock @ 0x18007AAC0 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x18007DA70 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x1800831F0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x180084CFC (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084F30 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089D80 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008AB40 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1D0 (RtlSetCurrentEnvironment.c)
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD2BC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD3AC (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800CE6A0 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6470 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7D50 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D9844 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DA370 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF54C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DF8E0 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DF978 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DFAA4 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC30 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800F23B0 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800F2A90 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2C68 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F64C0 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6D08 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x1800F89A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8D5C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F91A4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F96A0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9844 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA0E0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA274 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA488 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180102810 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180102A50 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180102B20 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180102BA0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180102BF0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180110C20 (EtwpBufferingModeFlush.c)
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
