/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x140808C74
 * Callers:
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
