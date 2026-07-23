/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140622B2C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140995FE0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
