/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140A6BCCC
 * Callers:
 *     PopZeroHiberFile @ 0x14098FBB0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
