/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406E428C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
