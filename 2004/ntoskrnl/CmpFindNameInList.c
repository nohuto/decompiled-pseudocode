/*
 * XREFs of CmpFindNameInList @ 0x140655778
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x140655740 (CmpFindValueByName.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071F638 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x140751D0C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140752064 (CmpCommitDeleteValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086C160 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x140875F90 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1405E31A4 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
