/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1804443D8
 * Callers:
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18033F670 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x180341774 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x180455EE0 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1802CA760 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x18035B8BC (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetSessionID@@YAKXZ @ 0x18044447C (-GetSessionID@@YAKXZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1804444C8 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edx
  unsigned int SessionID; // ebp
  unsigned int v8; // [rsp+28h] [rbp-250h]
  wchar_t v9[264]; // [rsp+30h] [rbp-248h] BYREF

  v3 = a3;
  v9[0] = 0;
  SessionID = GetSessionID();
  if ( SessionID == -1 || !(unsigned int)GetThreadDesktopName(v9, v6) )
  {
    StringCchCopyW(a2, v3, a1);
  }
  else
  {
    v8 = SessionID;
    StringCchPrintfW(a2, (unsigned int)v3, L"%s%s%d", a1, v9, v8);
  }
}
