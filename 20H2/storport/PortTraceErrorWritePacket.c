/*
 * XREFs of PortTraceErrorWritePacket @ 0x1C005A544
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C00435D8 (RaidHandleTraceNotifyType.c)
 * Callees:
 *     PortTraceErrorDrainList @ 0x1C005A4B4 (PortTraceErrorDrainList.c)
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
