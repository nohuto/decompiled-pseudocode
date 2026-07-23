/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140999FAC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D90C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
