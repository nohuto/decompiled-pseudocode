/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405B7AD8
 * Callers:
 *     WheapReportBootError @ 0x1405B51E8 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405B52BC (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x1402F3F10 (ExInterlockedInsertTailList.c)
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
