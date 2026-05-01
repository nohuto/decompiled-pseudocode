/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor$3 @ 0x1800C1F5D
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x18018AA40 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    winrt::hstring::~hstring((winrt::hstring *)(a2 + 128));
  }
}
