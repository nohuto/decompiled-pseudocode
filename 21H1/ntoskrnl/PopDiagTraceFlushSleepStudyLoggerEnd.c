/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140994600
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140389D2C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
