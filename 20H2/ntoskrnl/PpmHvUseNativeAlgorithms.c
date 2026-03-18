/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403A867C
 * Callers:
 *     PpmUpdateIdleStates @ 0x14078C040 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14078C138 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x1409A09C0 (PoInitializePrcb.c)
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
