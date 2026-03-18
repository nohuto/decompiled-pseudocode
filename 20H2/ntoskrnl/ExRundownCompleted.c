/*
 * XREFs of ExRundownCompleted @ 0x14023D900
 * Callers:
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D6480 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404FDE0C (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x140710E78 (PspIoRateEntryInitialize.c)
 *     CmpWaitForShutdownRundownRelease @ 0x14087831C (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140880294 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x1409305E0 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140949C88 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A693E4 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
