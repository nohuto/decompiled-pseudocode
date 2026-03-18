/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140263E60
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     PsGetNextPartitionUnsafe @ 0x140202E28 (PsGetNextPartitionUnsafe.c)
 *     MiSelectSessionAttachProcess @ 0x14022BCBC (MiSelectSessionAttachProcess.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1402CE59C (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402D9B50 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140308170 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiCapturePfnVm @ 0x1403654B0 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403769CC (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x14051C790 (KiMonitorCacheErrata.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextChildJob @ 0x140612F18 (PspGetNextChildJob.c)
 *     PspGetNextJob @ 0x140615A40 (PspGetNextJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x140616530 (PspEnforceLimitsProcessCallback.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PopEtGetNextEnergyTracker @ 0x14065E79C (PopEtGetNextEnergyTracker.c)
 *     PspGetNextJobProcess @ 0x140675270 (PspGetNextJobProcess.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspGetPreviousProcessThread @ 0x140709720 (PspGetPreviousProcessThread.c)
 *     ExpGetNextCallback @ 0x140758950 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140904310 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140904A80 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14090A0C8 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
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
