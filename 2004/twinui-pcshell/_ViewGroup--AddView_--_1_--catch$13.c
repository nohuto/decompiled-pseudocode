/*
 * XREFs of _ViewGroup::AddView_::_1_::catch$13 @ 0x180296A27
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewGroup::AddView_::_1_::catch_13(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 192) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0xF7,
                            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                            a4);
  return 0LL;
}
