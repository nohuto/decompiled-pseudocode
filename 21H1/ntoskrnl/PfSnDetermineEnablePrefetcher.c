/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407BF450
 * Callers:
 *     PfpParametersWatcher @ 0x1408DC290 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x1409968F4 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C50060 = 0LL;
}
