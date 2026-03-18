/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140995C40
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038AD9C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
