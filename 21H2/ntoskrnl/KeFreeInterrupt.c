/*
 * XREFs of KeFreeInterrupt @ 0x14037685C
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[776], ListEntry);
}
