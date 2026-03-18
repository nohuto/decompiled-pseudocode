/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403C75A0
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B98C0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
