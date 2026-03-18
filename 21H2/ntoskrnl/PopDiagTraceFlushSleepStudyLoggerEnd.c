/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140A52F10
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
