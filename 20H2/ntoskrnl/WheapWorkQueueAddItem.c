/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405BBD58
 * Callers:
 *     WheapReportBootError @ 0x1405B9468 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405B953C (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1403039C0 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
