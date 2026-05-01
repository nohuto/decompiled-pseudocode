/*
 * XREFs of _ViewGroup::OnTitleBarsLost_::_1_::catch$12 @ 0x180298184
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewGroup::OnTitleBarsLost_::_1_::catch_12(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x2AF,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           a4);
  return 0LL;
}
