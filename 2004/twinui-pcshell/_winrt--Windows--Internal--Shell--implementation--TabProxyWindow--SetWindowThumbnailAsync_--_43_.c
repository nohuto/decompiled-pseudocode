/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync_::_43_::_parameters_::_parameters_ @ 0x1800D35BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800D865C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync_::_43_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) = a5;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  return result;
}
