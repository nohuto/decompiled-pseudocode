/*
 * XREFs of ?DragEnterForApplicationManagedTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1802DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::DragEnterForApplicationManagedTab(
        SwitcherTabViewManagerWrapper *this,
        struct IInspectable *a2,
        struct IApplicationView *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    71LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x1802DFDCALL);
}
