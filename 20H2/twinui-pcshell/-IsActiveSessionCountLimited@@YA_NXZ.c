/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800B41D8
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006A2D0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rbx
  bool v2; // di
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}
