/*
 * XREFs of IopIsRelationInList @ 0x1408B286C
 * Callers:
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140737ABC (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
