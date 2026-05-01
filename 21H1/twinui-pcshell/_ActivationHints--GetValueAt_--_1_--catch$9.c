/*
 * XREFs of _ActivationHints::GetValueAt_::_1_::catch$9 @ 0x1803A9BDD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ActivationHints::GetValueAt_::_1_::catch_9(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3C,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           a4);
  return 0LL;
}
