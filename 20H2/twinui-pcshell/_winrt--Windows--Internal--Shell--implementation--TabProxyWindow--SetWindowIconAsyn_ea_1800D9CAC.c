/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::dtor$5 @ 0x1800D9CAC
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x18009AE54 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_2_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1672) = *(_QWORD *)(a2 + 1744) + 56LL;
  winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(winrt::Windows::Internal::UI::Shell::WindowTabView **)(a2 + 1672));
}
