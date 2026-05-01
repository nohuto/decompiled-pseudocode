/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::get_Children_::_1_::catch$27 @ 0x180255A53
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::get_Children_::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xBB,
                           (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
                           a4);
  return 0LL;
}
