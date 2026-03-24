/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1407378FC
 * Callers:
 *     IopSortRelationListForRemove @ 0x14073720C (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407373CC (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x140737810 (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x140737868 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140738200 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140738684 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408B2604 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408B270C (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140737920 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
