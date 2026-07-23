/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1403537F0
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140202AA0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140243EB0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiSelectSessionAttachProcess @ 0x1402AAEAC (MiSelectSessionAttachProcess.c)
 *     MiViewMayContainPage @ 0x1402FA6CC (MiViewMayContainPage.c)
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403794BC (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405224D0 (KiMonitorCacheErrata.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406816D0 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406818A0 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406819BC (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x1406B1364 (PspGetPreviousProcessThread.c)
 *     PopEtGetNextEnergyTracker @ 0x1406F6F94 (PopEtGetNextEnergyTracker.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     PsGetNextProcessThread @ 0x1407216D0 (PsGetNextProcessThread.c)
 *     ExpGetNextCallback @ 0x14076D090 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908B20 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909290 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14090E8C4 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
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
