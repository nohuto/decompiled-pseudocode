/*
 * XREFs of ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1802A94B8
 * Callers:
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802A9598 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A96DC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802BA880 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BA9B8 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel(unsigned int *a1)
{
  __int64 v1; // r8
  signed int v2; // edx
  int v3; // edx
  _OWORD v5[3]; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  v2 = a1[1];
  v5[0] = _mm_load_si128((const __m128i *)&_xmm);
  v5[2] = _mm_load_si128((const __m128i *)&_xmm);
  v5[1] = _mm_load_si128((const __m128i *)&_xmm);
  if ( v2 > *((_DWORD *)v5 + 2 * v1 + 1) )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return 3LL;
    if ( v3 == 1 )
      return 4LL;
  }
  return (unsigned int)v1;
}
