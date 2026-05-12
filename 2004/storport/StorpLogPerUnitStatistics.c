/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C000CD98
 * Callers:
 *     StorpLogStatistics @ 0x1C000CBD0 (StorpLogStatistics.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072C94 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000232C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003FE0 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0004340 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000C384 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000D040 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1C000D0F4 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendUnitQos @ 0x1C00569C8 (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData(a1);
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorDataSummary(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3216) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( a2 < 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)WorkItem, 0LL) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2136) = 0;
    *(_DWORD *)(a1 + 1272) = 0;
  }
}
