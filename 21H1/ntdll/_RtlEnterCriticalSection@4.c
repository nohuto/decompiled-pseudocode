/*
 * XREFs of _RtlEnterCriticalSection@4 @ 0x4B2BFE90
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _AVrfDllLoadNotification@4 @ 0x4B2A6D66 (_AVrfDllLoadNotification@4.c)
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0 (_RtlSetCurrentDirectory_U@4.c)
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 *     _LdrRegisterDllNotification@16 @ 0x4B2AB330 (_LdrRegisterDllNotification@16.c)
 *     @RtlpAffinitizeSegmentInfoForBucket@8 @ 0x4B2AE1C2 (@RtlpAffinitizeSegmentInfoForBucket@8.c)
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _LdrpWorkCallback@12 @ 0x4B2B71B0 (_LdrpWorkCallback@12.c)
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _RtlpAllocateUserBlockFromHeap@16 @ 0x4B2C01B1 (_RtlpAllocateUserBlockFromHeap@16.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpSendDllNotifications@12 @ 0x4B2D0BFC (_LdrpSendDllNotifications@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpDynamicShimModule@4 @ 0x4B2D234A (_LdrpDynamicShimModule@4.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     _RtlAcquirePebLock@0 @ 0x4B2EA840 (_RtlAcquirePebLock@0.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlpSetProcMergedLangList@8 @ 0x4B2EBADE (_RtlpSetProcMergedLangList@8.c)
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlpSetRequestedFrontEndHeap@8 @ 0x4B2ECB78 (_RtlpSetRequestedFrontEndHeap@8.c)
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _RtlSetCurrentEnvironment@8 @ 0x4B32DD40 (_RtlSetCurrentEnvironment@8.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 *     _LdrUnregisterDllNotification@4 @ 0x4B32EFC0 (_LdrUnregisterDllNotification@4.c)
 *     _LdrpPrepareForProcesscloning@0 @ 0x4B333CB9 (_LdrpPrepareForProcesscloning@0.c)
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _AVrfDllUnloadNotification@4 @ 0x4B33849A (_AVrfDllUnloadNotification@4.c)
 *     _AVrfInternalHeapFreeNotification@8 @ 0x4B338890 (_AVrfInternalHeapFreeNotification@8.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     @RtlpEnsureLiveDeadListsInitialized@0 @ 0x4B33D8B7 (@RtlpEnsureLiveDeadListsInitialized@0.c)
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 *     @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A (@RtlpPlaceActivationContextOnLiveList@4.c)
 *     _RtlGetProcessPreferredUILanguages@16 @ 0x4B352330 (_RtlGetProcessPreferredUILanguages@16.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     @RtlpSetupExtendedBlock@24 @ 0x4B35CF90 (@RtlpSetupExtendedBlock@24.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 *     _RtlSleepConditionVariableCS@12 @ 0x4B366010 (_RtlSleepConditionVariableCS@12.c)
 *     _RtlTraceDatabaseAdd@16 @ 0x4B36A150 (_RtlTraceDatabaseAdd@16.c)
 *     _RtlTraceDatabaseEnumerate@12 @ 0x4B36A300 (_RtlTraceDatabaseEnumerate@12.c)
 *     _RtlTraceDatabaseFind@16 @ 0x4B36A3A0 (_RtlTraceDatabaseFind@16.c)
 *     _RtlTraceDatabaseLock@4 @ 0x4B36A3F0 (_RtlTraceDatabaseLock@4.c)
 *     _RtlTraceDatabaseValidate@4 @ 0x4B36A430 (_RtlTraceDatabaseValidate@4.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _RtlpEnterCriticalSectionContended@4 @ 0x4B2BFEE0 (_RtlpEnterCriticalSectionContended@4.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // edx
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  if ( _interlockedbittestandreset(&CriticalSection->LockCount, 0) )
  {
    CriticalSection->OwningThread = v1->ClientId.UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == v1->ClientId.UniqueThread )
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
