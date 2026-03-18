/*
 * XREFs of CmpFindValueByName @ 0x140657CA0
 * Callers:
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x1407813C0 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078CE7C (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x140793688 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x140874E8C (CmpPreserveSystemHiveData.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A58990 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpSortDriverList @ 0x140A58BE8 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A58F80 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A5914C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A598FC (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A5A000 (CmpGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x140657CD8 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
