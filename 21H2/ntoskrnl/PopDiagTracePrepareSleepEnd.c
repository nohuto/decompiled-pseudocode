/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1407749A8
 * Callers:
 *     PopPrepareSleep @ 0x140382D5C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
