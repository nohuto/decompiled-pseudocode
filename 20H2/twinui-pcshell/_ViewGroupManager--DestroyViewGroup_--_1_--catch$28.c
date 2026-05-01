/*
 * XREFs of _ViewGroupManager::DestroyViewGroup_::_1_::catch$28 @ 0x18028B5C1
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewGroupManager::DestroyViewGroup_::_1_::catch_28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xB1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           a4);
  return 0LL;
}
