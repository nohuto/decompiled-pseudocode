/*
 * XREFs of ExRundownCompleted @ 0x1402F6750
 * Callers:
 *     CmpTryToRundownHive @ 0x140213B70 (CmpTryToRundownHive.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D8090 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404FF92C (BgkpDisableConsole.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x1406F703C (PspIoRateEntryInitialize.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140875D68 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087DD94 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x14092DF10 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140947628 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A43AE8 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
