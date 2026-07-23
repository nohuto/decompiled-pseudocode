/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408ED12C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056D1B4 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
