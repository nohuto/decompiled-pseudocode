/*
 * XREFs of EtwpReleaseStackLookasideListEntry @ 0x1406317F4
 * Callers:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(__int64 a1)
{
  return RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)(a1 - 16));
}
