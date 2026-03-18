/*
 * XREFs of IopIsRelationInList @ 0x1408AF60C
 * Callers:
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140731458 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
