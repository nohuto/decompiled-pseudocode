/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x14086538C
 * Callers:
 *     PfpParametersWatcher @ 0x140989150 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( (_DWORD)InitSafeBootMode )
    qword_140C54360 = 0LL;
}
