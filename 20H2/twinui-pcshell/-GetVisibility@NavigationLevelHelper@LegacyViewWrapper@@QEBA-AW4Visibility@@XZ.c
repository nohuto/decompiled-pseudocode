/*
 * XREFs of ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802CA7E4
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802C95E0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CA98C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 *     ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1802DA420 (-v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802DA480 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DBC68 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

_BOOL8 __fastcall LegacyViewWrapper::NavigationLevelHelper::GetVisibility(unsigned int *a1)
{
  __int64 v1; // rcx
  _OWORD v3[3]; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  v3[0] = _mm_load_si128((const __m128i *)&_xmm);
  v3[2] = _mm_load_si128((const __m128i *)&_xmm);
  v3[1] = _mm_load_si128((const __m128i *)&_xmm);
  return *((_DWORD *)v3 + 2 * v1 + 1) >= 2;
}
