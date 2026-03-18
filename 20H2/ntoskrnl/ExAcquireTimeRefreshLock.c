/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406F5A38
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C7B4 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PspSetProcessPpmPolicy @ 0x1406D4950 (PspSetProcessPpmPolicy.c)
 *     ExTraceTimerResolution @ 0x1406E3474 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x1406F3D70 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     PopPolicyTimeChange @ 0x140776340 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x14079F0F8 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x14094DBAC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x140992AF0 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409BBFB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
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
