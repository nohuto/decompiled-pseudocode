/*
 * XREFs of PopDiagTracePrepareSleep @ 0x14077498C
 * Callers:
 *     PopPrepareSleep @ 0x140382D5C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
