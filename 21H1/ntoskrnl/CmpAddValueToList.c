/*
 * XREFs of CmpAddValueToList @ 0x140876BD8
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyNew @ 0x140697F98 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x14086A450 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x14087564C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1406974B8 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
