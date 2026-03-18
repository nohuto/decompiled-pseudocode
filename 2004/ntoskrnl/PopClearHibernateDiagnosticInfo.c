/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140711744
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
