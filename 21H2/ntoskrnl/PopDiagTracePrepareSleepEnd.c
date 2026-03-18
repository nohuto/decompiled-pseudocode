/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1407FE61C
 * Callers:
 *     PopPrepareSleep @ 0x14038BAA8 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
