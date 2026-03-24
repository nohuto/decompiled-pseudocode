/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1409B24F0
 * Callers:
 *     PopZeroHiberFile @ 0x1408E74C4 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
