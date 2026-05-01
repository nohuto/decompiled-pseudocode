/*
 * XREFs of _ViewGroupManager::OnTitleBarsLost_::_1_::catch$14 @ 0x18028C75B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewGroupManager::OnTitleBarsLost_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xC0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           a4);
  return 0LL;
}
