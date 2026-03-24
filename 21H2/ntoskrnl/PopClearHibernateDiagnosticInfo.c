/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406C3F6C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140994FE0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
