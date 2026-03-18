/*
 * XREFs of CmpFindNameInList @ 0x140657CD8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x140657CA0 (CmpFindValueByName.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071D9B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x14074D67C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x14074D9D4 (CmpCommitDeleteValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x140874CA0 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1406187D0 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
