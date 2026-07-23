/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140737ABC
 * Callers:
 *     IopSortRelationListForRemove @ 0x1407373CC (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x14073758C (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x1407379D0 (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x140737A28 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1407383C0 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140738844 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408B2764 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408B286C (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140737AE0 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
