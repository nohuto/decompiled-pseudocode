/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140A6BCB0
 * Callers:
 *     PopZeroHiberFile @ 0x14098FBB0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
