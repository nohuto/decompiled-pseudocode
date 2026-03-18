/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1405D0D58
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140369E14 (ExCleanTimerResolutionRequest.c)
 *     ExTraceTimerResolution @ 0x1405CECD8 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x1405CF160 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PspSetProcessPpmPolicy @ 0x1406DE590 (PspSetProcessPpmPolicy.c)
 *     PopPolicyTimeChange @ 0x140765950 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x140946B4C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExpTimeRefreshWork @ 0x14098B3D0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
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
