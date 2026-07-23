/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140999F90
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D90C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
