/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$23 @ 0x1800C2DC7
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x18018AA40 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~0x40u;
    winrt::hstring::~hstring((winrt::hstring *)(a2 + 32));
  }
}
