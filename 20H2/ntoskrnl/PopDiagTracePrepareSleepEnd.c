/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140770AD8
 * Callers:
 *     PopPrepareSleep @ 0x140382774 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
