/*
 * XREFs of PopDiagTracePrepareSleep @ 0x1407624AC
 * Callers:
 *     PopPrepareSleep @ 0x1403809B4 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
