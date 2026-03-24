/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140998FAC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D7BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
