/*
 * XREFs of ?get_ViewAnchor@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18028C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewAnchor(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))this
          + 5))(
         *((_QWORD *)this + 5),
         &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
      (const char *)(unsigned int)v2);
  return v3;
}
