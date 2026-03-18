/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140760BCC
 * Callers:
 *     PopPrepareSleep @ 0x140380174 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
