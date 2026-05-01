/*
 * XREFs of ?GetTabDragType@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z @ 0x1802E0840
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::GetTabDragType(
        SwitcherTabViewManagerWrapper *this,
        struct IInspectable *a2,
        enum TAB_DRAG_TYPE *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    73LL,
    (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
  JUMPOUT(0x1802E085ALL);
}
