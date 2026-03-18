/*
 * XREFs of IopIsRelationInList @ 0x1409582A8
 * Callers:
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140767E88 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
