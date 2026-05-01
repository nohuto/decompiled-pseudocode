/*
 * XREFs of _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::catch$4 @ 0x1800DC672
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3F,
                           (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
                           a4);
  return 0LL;
}
