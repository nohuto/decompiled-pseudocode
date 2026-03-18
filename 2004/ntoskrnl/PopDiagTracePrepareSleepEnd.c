/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1407624C8
 * Callers:
 *     PopPrepareSleep @ 0x1403809B4 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
