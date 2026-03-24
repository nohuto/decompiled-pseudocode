/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140348AA0
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     MiSelectSessionAttachProcess @ 0x14020657C (MiSelectSessionAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140285900 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1402C5650 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiViewMayContainPage @ 0x1402EF97C (MiViewMayContainPage.c)
 *     KiAbProcessThreadLocks @ 0x1402F10C4 (KiAbProcessThreadLocks.c)
 *     PsGetNextPartitionUnsafe @ 0x1402F8D08 (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     MiCapturePfnVm @ 0x140368100 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14037996C (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x140522290 (KiMonitorCacheErrata.c)
 *     PspEnforceLimitsProcessCallback @ 0x140617A70 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x140617C40 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x140617D5C (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140617FF0 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopEtGetNextEnergyTracker @ 0x1406A7538 (PopEtGetNextEnergyTracker.c)
 *     PspGetNextJobProcess @ 0x1406ABE00 (PspGetNextJobProcess.c)
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x1406DA084 (PspGetPreviousProcessThread.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     PsGetNextProcessThread @ 0x14070A2F0 (PsGetNextProcessThread.c)
 *     ExpGetNextCallback @ 0x14076CED0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409089C0 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909130 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14090E764 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
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
