/*
 * XREFs of CmpAddValueToList @ 0x140877EC8
 * Callers:
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyNew @ 0x14069E068 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x14086B7A0 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x14069D9F8 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
