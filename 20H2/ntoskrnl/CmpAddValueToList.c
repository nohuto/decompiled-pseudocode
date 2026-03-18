/*
 * XREFs of CmpAddValueToList @ 0x14087DA44
 * Callers:
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyNew @ 0x1407063C8 (CmpSetValueKeyNew.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x1408711F4 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x14087C4AC (CmpSyncKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x14066BE98 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
