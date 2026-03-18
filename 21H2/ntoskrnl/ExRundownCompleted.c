/*
 * XREFs of ExRundownCompleted @ 0x1402095E0
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1405254E0 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x14055161C (BgkpDisableConsole.c)
 *     PsUnregisterSyscallProvider @ 0x140659570 (PsUnregisterSyscallProvider.c)
 *     PspIoRateEntryInitialize @ 0x140681FE4 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140910120 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitForHiveLoadUnloadRundownRelease @ 0x14091CA34 (CmpWaitForHiveLoadUnloadRundownRelease.c)
 *     CmpWaitForShutdownRundownRelease @ 0x14091CA5C (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140922CE4 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x1409D82D4 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409F39DC (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x140B2FABC (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
