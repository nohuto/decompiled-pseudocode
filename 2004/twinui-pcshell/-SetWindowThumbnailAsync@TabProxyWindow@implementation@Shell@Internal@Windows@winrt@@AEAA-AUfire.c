/*
 * XREFs of ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@II_N@Z @ 0x1800DABBC
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DBAA0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800D865C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 */

_BYTE *winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(
        __int64 a1,
        _BYTE *a2,
        int a3,
        int a4,
        ...)
{
  void *v6; // rax
  int v8; // [rsp+8D8h] [rbp+10h] BYREF
  int v9; // [rsp+8E0h] [rbp+18h] BYREF
  int v10; // [rsp+8E8h] [rbp+20h] BYREF
  va_list va; // [rsp+8F0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v9 = a3;
  v6 = operator new(0x868uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__InitCoro_1(
    &v8,
    (__int64)v6,
    a2,
    &v9,
    &v10,
    va,
    a1);
  return a2;
}
