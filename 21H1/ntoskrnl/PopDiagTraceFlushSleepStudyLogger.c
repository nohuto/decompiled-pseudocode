/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14099461C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140389D2C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
