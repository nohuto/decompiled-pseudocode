/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140774B68
 * Callers:
 *     PopPrepareSleep @ 0x140382F0C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
