/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::catch$31 @ 0x18024D50D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DC60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::catch_31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xF0,
    (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
    a4);
  return 0LL;
}
