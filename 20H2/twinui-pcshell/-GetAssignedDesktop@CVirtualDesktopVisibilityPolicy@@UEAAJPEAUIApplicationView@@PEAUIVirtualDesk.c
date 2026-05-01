/*
 * XREFs of ?GetAssignedDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@PEAPEAUIVirtualDesktop@@@Z @ 0x1804338B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::GetAssignedDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktop **a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v12);
  if ( v6 < 0 )
  {
    v7 = 217LL;
    goto LABEL_3;
  }
  v9 = v12 - *(_QWORD *)&GUID_NULL.Data1;
  if ( v12 == *(_QWORD *)&GUID_NULL.Data1 )
    v9 = v13 - *(_QWORD *)GUID_NULL.Data4;
  if ( v9 )
  {
    v10 = v12 - 0x4CF966F2C2DDEA68LL;
    if ( v12 == 0x4CF966F2C2DDEA68LL )
      v10 = v13 + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = v12 - 0x4AB24DE3BB64D5B7LL;
      if ( v12 == 0x4AB24DE3BB64D5B7LL )
        v11 = v13 + 0x235851FE89248358LL;
      if ( v11 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, __int64 *, struct IVirtualDesktop **))(*(_QWORD *)a3 + 88LL))(
               a3,
               &v12,
               a4);
        if ( v6 >= 0 )
          return (unsigned int)v6;
        v7 = 219LL;
LABEL_3:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
  }
  return 2147943568LL;
}
