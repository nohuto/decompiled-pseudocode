/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140767E88
 * Callers:
 *     IopIsDescendantNode @ 0x1407668C8 (IopIsDescendantNode.c)
 *     IopAddRelationToList @ 0x140767DF8 (IopAddRelationToList.c)
 *     IopSortRelationListForRemove @ 0x140768080 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407682A8 (PipVisitDeviceObjectListEntry.c)
 *     IopSetRelationsTag @ 0x14080EB6C (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x1409581A0 (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1409582A8 (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140767EAC (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
