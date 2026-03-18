/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406EBBF0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
