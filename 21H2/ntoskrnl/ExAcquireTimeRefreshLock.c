/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1407D6F54
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14025D2C4 (ExCleanTimerResolutionRequest.c)
 *     PspSetProcessTimerResolutionPolicy @ 0x1406D8260 (PspSetProcessTimerResolutionPolicy.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1407D6CE0 (NtSetTimerResolution.c)
 *     PopPolicyTimeChange @ 0x1408088B0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140857F38 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76FC (ExpSetTimeZoneInformation.c)
 *     ExTraceTimerResolution @ 0x1409F7C6C (ExTraceTimerResolution.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8178 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x140A531E0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x140A6F010 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
