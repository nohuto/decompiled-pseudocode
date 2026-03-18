/*
 * XREFs of ExRundownCompleted @ 0x14027BE20
 * Callers:
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D2EF0 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404FA57C (BgkpDisableConsole.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x140657408 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1408727CC (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087A724 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x14092A7B8 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140943EC8 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A62024 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
