/*
 * XREFs of _CFrameApplicationPresentation::SetTitlebarConfiguration_::_1_::catch$3 @ 0x180104C0A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x5DC,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           a4);
  return 0LL;
}
