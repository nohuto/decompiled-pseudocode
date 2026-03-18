/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140760BE8
 * Callers:
 *     PopPrepareSleep @ 0x140380174 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
