/*
 * XREFs of IopIsRelationInList @ 0x1408AE2EC
 * Callers:
 *     PnpProcessRelation @ 0x140731FE4 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140732434 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
