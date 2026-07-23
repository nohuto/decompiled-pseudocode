/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407D57A0
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0D60 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x14099C284 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C50160 = 0LL;
}
