/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::dtor$6 @ 0x1800D9CDB
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x18009AE54 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_2_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1680) = *(_QWORD *)(a2 + 1744) + 64LL;
  winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(winrt::Windows::Internal::UI::Shell::WindowTabView **)(a2 + 1680));
}
