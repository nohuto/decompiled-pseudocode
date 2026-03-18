/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140732434
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x140731F04 (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x140732348 (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x1407323A0 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140733A40 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140733EC4 (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x140734850 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1408AE1E4 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408AE2EC (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140732458 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
