/*
 * XREFs of PopDiagTracePrepareSleep @ 0x1407FE600
 * Callers:
 *     PopPrepareSleep @ 0x14038BAA8 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
