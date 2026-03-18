/*
 * XREFs of CmpValueToData @ 0x1407A2B1C
 * Callers:
 *     CmpFindControlSet @ 0x1407A2768 (CmpFindControlSet.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A5ED90 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpSortDriverList @ 0x140A5EFE8 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A5F380 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A5F54C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A5FCFC (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x14067B060 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
