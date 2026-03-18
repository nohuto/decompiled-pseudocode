/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1409AE804
 * Callers:
 *     PopZeroHiberFile @ 0x1408E2E30 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
