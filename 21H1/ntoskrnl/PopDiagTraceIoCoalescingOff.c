/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408E629C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140569134 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x14033C680 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
