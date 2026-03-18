/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140770ABC
 * Callers:
 *     PopPrepareSleep @ 0x140382774 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
