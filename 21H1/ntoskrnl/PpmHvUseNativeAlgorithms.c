/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403A9DCC
 * Callers:
 *     PpmUpdateIdleStates @ 0x14077F2B0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14077F3A8 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x140999854 (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
