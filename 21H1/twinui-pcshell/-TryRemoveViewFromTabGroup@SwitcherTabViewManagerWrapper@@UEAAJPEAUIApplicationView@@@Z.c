/*
 * XREFs of ?TryRemoveViewFromTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@@Z @ 0x1802E6B40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryRemoveViewFromTabGroup(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    67LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x1802E6B5ALL);
}
