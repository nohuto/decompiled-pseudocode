/*
 * XREFs of IopIsRelationInList @ 0x1408B513C
 * Callers:
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1407407FC (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
