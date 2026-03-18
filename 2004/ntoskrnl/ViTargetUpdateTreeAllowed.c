/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1409D47B8
 * Callers:
 *     ViTargetAddToCounter @ 0x1409D42A0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D43D4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D46A0 (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
