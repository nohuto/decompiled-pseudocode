/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1407D6CBC
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14025D2C4 (ExCleanTimerResolutionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x140A531E0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x140A6F010 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
