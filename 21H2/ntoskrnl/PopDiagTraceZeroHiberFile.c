/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1409B3404
 * Callers:
 *     PopZeroHiberFile @ 0x1408E7624 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
