/*
 * XREFs of KeFreeInterrupt @ 0x140373ADC
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[776], ListEntry);
}
