/*
 * XREFs of _FullScreenPositioner::EraseAllViews_::_1_::catch$20 @ 0x1801A5DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall FullScreenPositioner::EraseAllViews_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x595,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           a4);
  return 0LL;
}
