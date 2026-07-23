/*
 * XREFs of CmpFindValueByName @ 0x14065E45C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x14065E494 (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x14079EE80 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A59BC (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 *     CmpSortDriverList @ 0x140A61418 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A617B0 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A6197C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A6212C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A62390 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x14065E418 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, (unsigned int *)(a2 + 36), a3, 0, 0LL, (__int64)&v4);
  return v4;
}
