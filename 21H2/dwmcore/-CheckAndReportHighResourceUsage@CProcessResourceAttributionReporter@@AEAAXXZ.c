/*
 * XREFs of ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x18007886C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800245C0 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180078A60 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 */

void __fastcall CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(union _SLIST_HEADER *this)
{
  ULONGLONG Region; // rcx
  struct _TP_WORK *v4; // rcx
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp+8h] BYREF

  ListEntry = 0LL;
  v5[0] = off_1802C1740;
  v5[1] = &ListEntry;
  Region = this[3].Region;
  v5[7] = v5;
  CProcessAttributionObserver::ForEachChangedProcessAttribution(Region, this, v5);
  if ( ListEntry )
  {
    InterlockedPushEntrySList(this + 1, ListEntry);
    v4 = (struct _TP_WORK *)this->Region;
    ListEntry = 0LL;
    SubmitThreadpoolWork(v4);
    if ( ListEntry )
      CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'((CProcessResourceAttributionReporter::HighResourceUsageReport *)ListEntry);
  }
}
