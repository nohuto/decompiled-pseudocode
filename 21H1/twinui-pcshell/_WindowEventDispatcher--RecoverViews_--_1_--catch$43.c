/*
 * XREFs of _WindowEventDispatcher::RecoverViews_::_1_::catch$43 @ 0x180296226
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::RecoverViews_::_1_::catch_43(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 304) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 296),
                            (void *)0x80E,
                            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                            a4);
  return 0LL;
}
