/*
 * XREFs of CmpFindValueByName @ 0x140655740
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x140786A4C (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x14078B248 (CmpFindControlSet.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078ED4C (CmpMarkCurrentProfileDirty.c)
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A49A40 (CmpGetSystemControlValues.c)
 *     CmpSortDriverList @ 0x140A4A24C (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A4A5E4 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A4A7B0 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A4AF60 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A4B1C4 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
