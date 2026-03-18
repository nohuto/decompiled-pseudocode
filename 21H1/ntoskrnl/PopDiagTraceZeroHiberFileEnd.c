/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1409AE820
 * Callers:
 *     PopZeroHiberFile @ 0x1408E2E30 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
