/*
 * XREFs of CmpFindNameInList @ 0x1406A54F8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1406A54C0 (CmpFindValueByName.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x14087BB00 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x14066FDFC (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
