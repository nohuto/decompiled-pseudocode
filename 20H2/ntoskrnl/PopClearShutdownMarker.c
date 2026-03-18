/*
 * XREFs of PopClearShutdownMarker @ 0x1406E431C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}
