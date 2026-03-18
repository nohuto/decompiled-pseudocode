/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14076761C
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
