/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038AD9C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140995C40 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140995C5C (PopDiagTraceFlushSleepStudyLogger.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C23338 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140C23340 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
