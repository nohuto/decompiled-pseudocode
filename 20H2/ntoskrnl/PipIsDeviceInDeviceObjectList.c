/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1407407FC
 * Callers:
 *     IopSortRelationListForRemove @ 0x14074010C (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407402CC (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x140740710 (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x140740768 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140741100 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140741584 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408B5034 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408B513C (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140740820 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
