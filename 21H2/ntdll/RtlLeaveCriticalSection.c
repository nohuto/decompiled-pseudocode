/*
 * XREFs of RtlLeaveCriticalSection @ 0x18002F230
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlpFlushHeap @ 0x180007180 (RtlpFlushHeap.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18003DD70 (LdrpSendDllNotifications.c)
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpFlushActiveBuffers @ 0x18004C7E4 (EtwpFlushActiveBuffers.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     EtwpSwitchBuffer @ 0x180051284 (EtwpSwitchBuffer.c)
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     RtlSetCurrentDirectory_U @ 0x18005E560 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18005E700 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18005E7C0 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E8A0 (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18005EEAC (LdrpDropLastInProgressCount.c)
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlUnlockHeap @ 0x18005FA30 (RtlUnlockHeap.c)
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
 *     RtlReleasePebLock @ 0x180078550 (RtlReleasePebLock.c)
 *     RtlCreateTagHeap @ 0x18007DA70 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x1800831F0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x180084CFC (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084F30 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008974C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089D80 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008AB40 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1D0 (RtlSetCurrentEnvironment.c)
 *     RtlCompleteProcessCloning @ 0x18009BA70 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     LdrDeleteEnclave @ 0x1800CCD50 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCDE0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCEE0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CCF80 (LdrLoadEnclaveModule.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD2BC (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD3AC (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD870 (LdrpIssueEnclaveCall.c)
 *     LdrUnregisterDllNotification @ 0x1800CE6A0 (LdrUnregisterDllNotification.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4B28 (LdrpCompleteProcessCloning.c)
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
 *     RtlQueryTagHeap @ 0x1800F2A90 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2C68 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F4B84 (RtlpUnlockHeapManagerForCloning.c)
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
 *     RtlTraceDatabaseUnlock @ 0x180102BD0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x180102BF0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180110C20 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18006471C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180065030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E90D0 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  signed __int32 LockCount; // esi
  void *LockSemaphore; // r9
  unsigned int v8; // ecx
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+30h] [rbp+8h]

  if ( CriticalSection->RecursionCount-- != 1 )
    return 0;
  CriticalSection->OwningThread = 0LL;
  LockCount = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
  if ( LockCount == -2 )
    return 0;
  if ( (CriticalSection->LockCount & 1) != 0 )
    RtlpNotOwnerCriticalSection(CriticalSection);
  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore )
    LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(CriticalSection, v1, v2);
  v8 = 0;
  while ( LockCount != _InterlockedCompareExchange(
                         &CriticalSection->LockCount,
                         (LockCount & 2 | 1) + LockCount,
                         LockCount) )
  {
    v9 = v8;
    if ( v8 )
    {
      if ( v8 < 0x1FFF )
        v9 = 2 * v8;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_18;
      v9 = 64;
    }
    v8 = v9;
    v10 = __rdtsc();
    v14 = 0;
    v11 = 10 * (((v9 - 1) & (unsigned int)v10) + v9) / MEMORY[0x7FFE02D6];
    if ( v11 )
    {
      do
      {
        _mm_pause();
        ++v14;
      }
      while ( v14 < v11 );
    }
LABEL_18:
    _m_prefetchw(&CriticalSection->LockCount);
    LockCount = CriticalSection->LockCount;
  }
  if ( (LockCount & 2) != 0 )
  {
    if ( LockSemaphore == (void *)-1LL )
    {
      _InterlockedOr(v13, 0);
      RtlpWakeByAddress(&CriticalSection->LockCount, 0LL);
    }
    else
    {
      v12 = ZwSetEvent(LockSemaphore, 0LL);
      if ( v12 < 0 )
        RtlRaiseStatus(v12);
    }
  }
  return 0;
}
