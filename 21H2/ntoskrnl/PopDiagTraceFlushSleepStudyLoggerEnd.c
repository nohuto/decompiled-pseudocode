/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140998F90
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D7BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
