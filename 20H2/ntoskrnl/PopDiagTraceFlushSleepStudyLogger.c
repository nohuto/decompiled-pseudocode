/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14099BDBC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D09C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
