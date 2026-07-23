/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408EAA8C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EE04 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140272730 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
