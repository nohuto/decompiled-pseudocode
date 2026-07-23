/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x140370540
 * Callers:
 *     VfTargetDriversRemove @ 0x14037040C (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409C6720 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x1409CB3B4 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x1409D333C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D37F4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D46A0 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE6CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEE10 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF47C (VfCheckForResource.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x140370560 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
