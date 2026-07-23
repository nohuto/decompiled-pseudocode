/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406B2FF4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CF94 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     PspSetProcessPpmPolicy @ 0x1406114D0 (PspSetProcessPpmPolicy.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     ExTraceTimerResolution @ 0x140672724 (ExTraceTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1406B3A00 (NtSetTimerResolution.c)
 *     PopPolicyTimeChange @ 0x14077A4B0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x14094B54C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140990840 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B9FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
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
