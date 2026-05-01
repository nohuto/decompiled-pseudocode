/*
 * XREFs of _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::CreateInstance_::_1_::catch$8 @ 0x1800B57DA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::CreateInstance_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3F,
                           (unsigned int)"internal\\shellcommonshell\\inc\\winrt/wrl_class_factory.h",
                           a4);
  return 0LL;
}
