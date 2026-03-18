/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1409927E0
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1405CFB5C (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3LL, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
