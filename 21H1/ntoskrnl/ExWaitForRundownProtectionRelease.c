/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x1403560A0
 * Callers:
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     PfSnDeactivateTrace @ 0x1402C2BC8 (PfSnDeactivateTrace.c)
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402DB598 (IoStopDiskIoAttributionForContext.c)
 *     NtShutdownWorkerFactory @ 0x14031A910 (NtShutdownWorkerFactory.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     IommuDevicePowerChange @ 0x1404D2A40 (IommuDevicePowerChange.c)
 *     VslpSkStopProfiling @ 0x1404F866C (VslpSkStopProfiling.c)
 *     BgkpDisableConsole @ 0x1404F9F2C (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x14055F438 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14057FCDC (DbgpRemoveDebugPrintCallback.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405930E4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     PspIoRateEntryDeactivate @ 0x1405CDAB8 (PspIoRateEntryDeactivate.c)
 *     SmKmStoreAdd @ 0x140654D0C (SmKmStoreAdd.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x14065BBF8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     ExpWnfDeleteSubscription @ 0x140665BD0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x1406664CC (ExpWnfDeleteNameInstance.c)
 *     IoDiskIoAttributionAllocate @ 0x140675F3C (IoDiskIoAttributionAllocate.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     PfSnPrefetchSections @ 0x1406C3500 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406C37AC (PfSnPrefetchSectionsCleanup.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D2B64 (ObDestroyHandleRevocationBlock.c)
 *     PfSnPrefetchScenario @ 0x1406DF290 (PfSnPrefetchScenario.c)
 *     SmKmStoreDelete @ 0x1406E79E0 (SmKmStoreDelete.c)
 *     PfSnPowerBoost @ 0x1406E8F88 (PfSnPowerBoost.c)
 *     ExpWnfFreeScopeInstance @ 0x1406E9350 (ExpWnfFreeScopeInstance.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140788188 (PspSetCreateProcessNotifyRoutine.c)
 *     ExRegisterHost @ 0x1407A6C20 (ExRegisterHost.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1408714D8 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140879434 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     DbgkLkmdUnregisterCallback @ 0x140883D60 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x1408D92D0 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1408DBD28 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x1408E1E50 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140907D30 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140907E20 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmKmCleanup @ 0x1409266AC (SmKmCleanup.c)
 *     SmcCacheInitialize @ 0x140928C1C (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x140928ED0 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x140929508 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 *     ExWaitForCallBacks @ 0x14094A6DC (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x140952020 (ExUnregisterExtension.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 *     EtwpInitializeCoverageSampler @ 0x140A468A4 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A66BB4 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A678C8 (SmcCacheManagerInitialize.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1402F60B0 (ExfWaitForRundownProtectionRelease.c)
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 v3; // rax

  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v3 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v3, v1, v2);
}
