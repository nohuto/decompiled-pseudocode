/*
 * XREFs of ?UnpinView@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180434060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::UnpinView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v9);
  if ( v5 < 0 )
  {
    v6 = 297LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v7 = v9[0] - 0x4658059A45DB96FFLL;
  if ( v9[0] == 0x4658059A45DB96FFLL )
    v7 = v9[1] - 0x1012647F7CCD4687LL;
  if ( !v7 )
  {
    v5 = -2147024809;
    v6 = 301LL;
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 208LL))(a2, v9);
  if ( v5 < 0 )
  {
    v6 = 304LL;
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v5 < 0 )
  {
    v6 = 305LL;
    goto LABEL_11;
  }
  return (unsigned int)v5;
}
