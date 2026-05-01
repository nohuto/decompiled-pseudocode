/*
 * XREFs of _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::catch$33 @ 0x1802DEF91
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 1048),
                            (void *)0x277,
                            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                            a4);
  return 0LL;
}
