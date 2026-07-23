/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140774B4C
 * Callers:
 *     PopPrepareSleep @ 0x140382F0C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
