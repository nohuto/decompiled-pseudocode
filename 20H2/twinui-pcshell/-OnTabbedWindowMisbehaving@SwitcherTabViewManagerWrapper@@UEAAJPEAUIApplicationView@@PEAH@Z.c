/*
 * XREFs of ?OnTabbedWindowMisbehaving@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180304F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139588 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::OnTabbedWindowMisbehaving(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        int *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    72LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x180304FAALL);
}
