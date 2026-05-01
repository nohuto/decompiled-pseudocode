/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::catch$2 @ 0x1802165E4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x6A,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           a4);
  return 0LL;
}
