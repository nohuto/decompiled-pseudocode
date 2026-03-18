/*
 * XREFs of SepGetCurrentLogLevel @ 0x140594DA0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402111B0 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x140594DCC (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
