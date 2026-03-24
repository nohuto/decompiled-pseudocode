/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406DBD14
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CDE4 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     ExTraceTimerResolution @ 0x14067E874 (ExTraceTimerResolution.c)
 *     PspSetProcessPpmPolicy @ 0x1406B2490 (PspSetProcessPpmPolicy.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1406DC720 (NtSetTimerResolution.c)
 *     PopPolicyTimeChange @ 0x14077A2F0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A91B8 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x14094B37C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x14098FD60 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
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
