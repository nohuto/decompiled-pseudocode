/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407D11B0
 * Callers:
 *     PfpParametersWatcher @ 0x1408E3440 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x14099DD04 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C4FFA0 = 0LL;
}
