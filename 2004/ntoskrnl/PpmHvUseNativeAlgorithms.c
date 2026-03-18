/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403A60FC
 * Callers:
 *     PpmUpdateIdleStates @ 0x14077EAA0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14077EB98 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x14099A8B4 (PoInitializePrcb.c)
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
