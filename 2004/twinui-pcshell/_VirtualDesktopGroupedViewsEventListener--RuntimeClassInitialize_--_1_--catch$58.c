/*
 * XREFs of _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::catch$58 @ 0x18044C07E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::catch_58(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 200) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x71,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
                            a4);
  return 0LL;
}
