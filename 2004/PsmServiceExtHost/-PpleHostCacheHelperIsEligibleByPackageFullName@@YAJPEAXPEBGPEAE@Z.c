/*
 * XREFs of ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x18003D79C
 * Callers:
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003D518 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?PpleHostCacheHelperIsDisallowListedApp@@YAJPEBGPEAE@Z @ 0x18003D830 (-PpleHostCacheHelperIsDisallowListedApp@@YAJPEBGPEAE@Z.c)
 */

__int64 __fastcall PpleHostCacheHelperIsEligibleByPackageFullName(void *a1, const unsigned __int16 *a2, bool *a3)
{
  bool v5; // bl
  int IsEnabledForPackage3; // eax
  int IsDisallowListedApp; // ecx
  unsigned int v9; // eax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  IsEnabledForPackage3 = QuirkIsEnabledForPackage3(a1, a2, 0LL, 1114113LL, v10);
  if ( IsEnabledForPackage3 < 0 )
  {
    IsDisallowListedApp = (unsigned __int16)IsEnabledForPackage3;
    v9 = (unsigned __int16)IsEnabledForPackage3 | 0xC0070000;
    if ( IsDisallowListedApp )
      IsDisallowListedApp = v9;
LABEL_5:
    if ( IsDisallowListedApp >= 0 )
    {
LABEL_6:
      *a3 = v5;
      return (unsigned int)IsDisallowListedApp;
    }
    return (unsigned int)IsDisallowListedApp;
  }
  if ( v10[0] )
  {
    IsDisallowListedApp = 0;
    v5 = 0;
    goto LABEL_6;
  }
  IsDisallowListedApp = PpleHostCacheHelperIsDisallowListedApp(a2, &v11);
  if ( IsDisallowListedApp >= 0 )
  {
    v5 = v11 == 0;
    goto LABEL_5;
  }
  return (unsigned int)IsDisallowListedApp;
}
