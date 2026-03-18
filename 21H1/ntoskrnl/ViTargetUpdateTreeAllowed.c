/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1409D4758
 * Callers:
 *     ViTargetAddToCounter @ 0x1409D4240 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D4374 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D4640 (ViTargetTrackContiguousMemory.c)
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
