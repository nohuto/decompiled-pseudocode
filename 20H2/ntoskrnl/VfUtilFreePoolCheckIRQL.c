/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x140372490
 * Callers:
 *     VfTargetDriversRemove @ 0x14037235C (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409CC740 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x1409D13D4 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x1409D935C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D9814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x1409DA6C0 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x1409E45C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E46EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E4E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E5210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E549C (VfCheckForResource.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403724B0 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
