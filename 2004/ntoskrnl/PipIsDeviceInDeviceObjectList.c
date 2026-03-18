/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140731458
 * Callers:
 *     IopSortRelationListForRemove @ 0x140730D68 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140730F28 (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x14073136C (IopSetRelationsTag.c)
 *     IopAddRelationToList @ 0x1407313C4 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140731D5C (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1407321E0 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408AF504 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408AF60C (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14073147C (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
