/*
 * XREFs of KeFreeInterrupt @ 0x1403AEB30
 * Callers:
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[816], ListEntry);
}
