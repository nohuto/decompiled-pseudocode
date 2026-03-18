/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1409AF664
 * Callers:
 *     PopZeroHiberFile @ 0x1408E40B0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
