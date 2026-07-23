/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1406B2FD0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CF94 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1406B3A00 (NtSetTimerResolution.c)
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140990840 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B9FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
