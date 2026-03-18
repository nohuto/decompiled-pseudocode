/*
 * XREFs of SepGetCurrentLogLevel @ 0x140590C10
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x140590C3C (SepGetLearningModeObjectInformation.c)
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
