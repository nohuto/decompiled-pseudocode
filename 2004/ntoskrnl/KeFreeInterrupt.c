/*
 * XREFs of KeFreeInterrupt @ 0x1403748EC
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074E640 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[18].Next[776], ListEntry);
}
