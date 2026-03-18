/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1406F73F0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C7B4 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     ExpReadLeapSecondData @ 0x14079F0F8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140992AF0 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409BBFB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
