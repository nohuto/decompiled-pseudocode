/*
 * XREFs of SepGetCurrentLogLevel @ 0x140591300
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x14059132C (SepGetLearningModeObjectInformation.c)
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
