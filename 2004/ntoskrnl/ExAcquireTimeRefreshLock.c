/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406AA348
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036A7D4 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     ExTraceTimerResolution @ 0x14064F7B4 (ExTraceTimerResolution.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x1406A96F0 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     PspSetProcessPpmPolicy @ 0x140701220 (PspSetProcessPpmPolicy.c)
 *     PopPolicyTimeChange @ 0x140767310 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x140792748 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x140947DEC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x14098CD60 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
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
