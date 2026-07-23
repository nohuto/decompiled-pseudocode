/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408E751C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140569784 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
