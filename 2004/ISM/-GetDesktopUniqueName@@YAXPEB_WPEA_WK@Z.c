/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1800327D4
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x18002DB8C (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801A1838 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801A3A88 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032878 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1800329BC (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x180032A70 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetSessionID@@YAKXZ @ 0x180032AC4 (-GetSessionID@@YAKXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int SessionID; // esi
  unsigned int v6; // [rsp+28h] [rbp-240h]
  wchar_t v7[264]; // [rsp+30h] [rbp-238h] BYREF

  v7[0] = 0;
  SessionID = GetSessionID();
  if ( SessionID == -1 || !(unsigned int)GetThreadDesktopName(v7, v4) )
  {
    StringCchCopyW(a2, v4, a1);
  }
  else
  {
    v6 = SessionID;
    StringCchPrintfW(a2, 0x104uLL, L"%s%s%d", a1, v7, v6);
  }
}
