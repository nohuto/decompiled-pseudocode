/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405B81F8
 * Callers:
 *     WheapReportBootError @ 0x1405B5908 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405B59DC (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140330B10 (ExInterlockedInsertTailList.c)
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
