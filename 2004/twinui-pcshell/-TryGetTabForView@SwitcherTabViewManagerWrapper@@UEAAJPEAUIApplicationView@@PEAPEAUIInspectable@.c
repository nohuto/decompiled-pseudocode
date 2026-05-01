/*
 * XREFs of ?TryGetTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x180308610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsViewTabbed@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180304DE0 (-IsViewTabbed@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 */

__int64 __fastcall SwitcherTabViewManagerWrapper::TryGetTabForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IInspectable **a3)
{
  int IsViewTabbed; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  IsViewTabbed = SwitcherTabViewManagerWrapper::IsViewTabbed(this, a2, &v10);
  if ( IsViewTabbed < 0 )
  {
    v7 = 32LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
      (const char *)(unsigned int)IsViewTabbed);
    return (unsigned int)IsViewTabbed;
  }
  if ( v10 )
  {
    IsViewTabbed = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IInspectable **))(**((_QWORD **)this + 4) + 32LL))(
                     *((_QWORD *)this + 4),
                     a2,
                     a3);
    if ( IsViewTabbed < 0 )
    {
      v7 = 35LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
