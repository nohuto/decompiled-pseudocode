/*
 * XREFs of ExRundownCompleted @ 0x1402D44C0
 * Callers:
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D2A40 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404F9F2C (BgkpDisableConsole.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x14065BBF8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1408714D8 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140879434 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x140929508 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A468A4 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
