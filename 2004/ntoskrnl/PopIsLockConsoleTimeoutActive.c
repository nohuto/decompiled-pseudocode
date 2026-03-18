/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408F1D9C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x140711F10 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = BYTE6(xmmword_140C20350);
  PopReleaseAdaptiveLock();
  return v0;
}
