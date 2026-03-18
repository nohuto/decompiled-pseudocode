/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1409DA7D8
 * Callers:
 *     ViTargetAddToCounter @ 0x1409DA2C0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409DA3F4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409DA6C0 (ViTargetTrackContiguousMemory.c)
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
