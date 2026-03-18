/*
 * XREFs of CmpFindNameInList @ 0x14071F68C
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1406B4108 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
