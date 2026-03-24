/*
 * XREFs of ExRundownCompleted @ 0x140251F40
 * Callers:
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x140361574 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D7E50 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404FF9AC (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x140720854 (PspIoRateEntryInitialize.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140875C08 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087DC34 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x14092DDB0 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140947458 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A42AE8 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
