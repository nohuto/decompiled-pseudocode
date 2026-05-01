/*
 * XREFs of _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::catch$15 @ 0x1803EB919
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 248),
                           (void *)0xB94,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                           a4);
  return 0LL;
}
