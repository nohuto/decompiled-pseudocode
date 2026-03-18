/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14021EB40
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x14029748C (MiSelectSessionAttachProcess.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140324E20 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PsGetNextPartitionUnsafe @ 0x14033B998 (PsGetNextPartitionUnsafe.c)
 *     MiViewMayContainPage @ 0x14035484C (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14035BC20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiCapturePfnVm @ 0x140367E50 (MiCapturePfnVm.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14037976C (HalpDmaFindAdapterByDeviceObject.c)
 *     KiMonitorCacheErrata @ 0x1405207B0 (KiMonitorCacheErrata.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PspGetNextJobProcess @ 0x14062C0F0 (PspGetNextJobProcess.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x14065EA14 (PopEtGetNextEnergyTracker.c)
 *     PspEnforceLimitsProcessCallback @ 0x140664FF0 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1406651C0 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1406652DC (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140665570 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspGetPreviousProcessThread @ 0x14069A4D0 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x14069A900 (PsGetNextProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x140768F90 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14090B210 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x14090B980 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x140910FB4 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
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
