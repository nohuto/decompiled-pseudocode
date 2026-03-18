/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1405A1740
 * Callers:
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY v0; // rax

  v0 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
  if ( v0 )
    return v0 + 1;
  else
    return 0LL;
}
