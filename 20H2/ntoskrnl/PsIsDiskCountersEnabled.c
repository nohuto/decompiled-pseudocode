/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403CA1E0
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C8150 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
