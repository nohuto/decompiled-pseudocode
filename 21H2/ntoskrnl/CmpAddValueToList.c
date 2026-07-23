/*
 * XREFs of CmpAddValueToList @ 0x14087B518
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140721520 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x14086EB5C (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x14065C284 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
