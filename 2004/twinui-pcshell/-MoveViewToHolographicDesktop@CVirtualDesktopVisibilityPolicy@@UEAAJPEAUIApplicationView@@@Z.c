/*
 * XREFs of ?MoveViewToHolographicDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x1804344E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::MoveViewToHolographicDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 208LL))(a2, &qword_1804E34A8);
  if ( v4 < 0 )
  {
    v5 = 310LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v4 < 0 )
  {
    v5 = 311LL;
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
