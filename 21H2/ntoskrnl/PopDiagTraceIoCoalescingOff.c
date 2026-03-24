/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408EA92C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EBC4 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14028411C (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3LL, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
