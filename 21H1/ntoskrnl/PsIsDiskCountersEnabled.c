/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403C6790
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B6750 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
