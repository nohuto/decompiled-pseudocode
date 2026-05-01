/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab_::_1_::catch$1 @ 0x1800DCB48
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1800D66E8 (-IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139588 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  const char *v4; // r9

  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL);
  if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x2E0,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v4);
    __debugbreak();
  }
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x2E4,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
