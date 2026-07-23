/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407C29B0
 * Callers:
 *     PfpParametersWatcher @ 0x1408DD600 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140997CC4 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C4FF20 = 0LL;
}
