/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14020AF40
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140278E20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiSelectSessionAttachProcess @ 0x1402BE93C (MiSelectSessionAttachProcess.c)
 *     MiViewMayContainPage @ 0x14031E9CC (MiViewMayContainPage.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x140343E98 (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140345F70 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiCapturePfnVm @ 0x140365E70 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403777DC (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x14051CDE0 (KiMonitorCacheErrata.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PspGetNextJob @ 0x140657860 (PspGetNextJob.c)
 *     PspGetNextJobProcess @ 0x140657B30 (PspGetNextJobProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x140657E80 (PopEtGetNextEnergyTracker.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x14068B098 (PspGetNextChildJob.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x14069B550 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcessThread @ 0x1406A0120 (PsGetNextProcessThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspGetPreviousProcessThread @ 0x1406B38D0 (PspGetPreviousProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x14075A7D0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409055F0 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140905D60 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14090B378 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
