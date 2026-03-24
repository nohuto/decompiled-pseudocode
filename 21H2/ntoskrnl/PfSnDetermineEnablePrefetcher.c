/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407D5630
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0C00 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x14099B284 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( (_DWORD)InitSafeBootMode )
    qword_140C50120 = 0LL;
}
