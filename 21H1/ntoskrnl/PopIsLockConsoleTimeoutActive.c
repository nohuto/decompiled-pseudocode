/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408F0AAC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1406FE6C4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = BYTE6(xmmword_140C205F0);
  PopReleaseAdaptiveLock();
  return v0;
}
