/*
 * XREFs of CmpValueToData @ 0x1407AD0F4
 * Callers:
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpSortDriverList @ 0x140A61418 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A617B0 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A6197C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A6212C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A62390 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int *a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v8[0] = 0;
  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
