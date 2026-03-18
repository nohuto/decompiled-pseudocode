/*
 * XREFs of CmpFindValueByName @ 0x1406A54C0
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x14079475C (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14079B704 (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x1407A2768 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x14087BCEC (CmpPreserveSystemHiveData.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A5ED90 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpSortDriverList @ 0x140A5EFE8 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A5F380 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A5F54C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A5FCFC (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A60400 (CmpGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x1406A54F8 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
