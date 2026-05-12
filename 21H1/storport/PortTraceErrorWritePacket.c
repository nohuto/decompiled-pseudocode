/*
 * XREFs of PortTraceErrorWritePacket @ 0x1C0058ED4
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C004209C (RaidHandleTraceNotifyType.c)
 * Callees:
 *     PortTraceErrorDrainList @ 0x1C0058E44 (PortTraceErrorDrainList.c)
 */

BOOLEAN __fastcall PortTraceErrorWritePacket(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *v1; // rbx

  v1 = *a1;
  ExpInterlockedPushEntrySList(*a1 + 4, (PSLIST_ENTRY)&a1[1][-2]);
  if ( KeGetCurrentIrql() <= 2u )
    return (unsigned __int8)PortTraceErrorDrainList((PVOID)v1->Region, v1 + 4);
  _InterlockedIncrement((volatile signed __int32 *)&v1[5].HeaderX64 + 1);
  return KeInsertQueueDpc((PRKDPC)((char *)&v1[5].HeaderX64 + 8), 0LL, 0LL);
}
