/*
 * XREFs of CmpValueToData @ 0x14082F8AC
 * Callers:
 *     CmpFindControlSet @ 0x14082F3C4 (CmpFindControlSet.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B132D0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpSortDriverList @ 0x140B13578 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140B13964 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B13B7C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B143B0 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, ULONG_PTR a3, unsigned int *a4, _DWORD *a5)
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
