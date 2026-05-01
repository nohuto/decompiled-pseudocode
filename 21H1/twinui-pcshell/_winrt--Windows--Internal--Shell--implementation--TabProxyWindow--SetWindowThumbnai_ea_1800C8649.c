/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$132 @ 0x1800C8649
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180129720 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2_::_1_::catch_132(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 2296),
    (void *)0x289,
    (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
    a4);
  return &loc_1800C7E63;
}
