/*
 * XREFs of _Windows::Internal::ComposableShell::Tabs::TabSetMediator::RuntimeClassInitialize_::_1_::catch$0 @ 0x18029CA7F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::RuntimeClassInitialize_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x21,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           a4);
  return 0LL;
}
