/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1409B55D4
 * Callers:
 *     PopZeroHiberFile @ 0x1408E9CC4 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
