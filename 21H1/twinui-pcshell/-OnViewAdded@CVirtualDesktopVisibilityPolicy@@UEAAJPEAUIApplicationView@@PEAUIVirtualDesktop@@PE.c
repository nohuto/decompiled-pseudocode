/*
 * XREFs of ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180018C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x180018DF0 (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewAdded(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktopCollection *a4)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rax
  struct IVirtualDesktop *v17; // r8
  __int64 v19; // rax
  int (__fastcall *v20)(struct IVirtualDesktopCollection *, __int64 *, __int64 *); // rbx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]
  _QWORD v25[2]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]

  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 200LL))(a2, &v23);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8,
      v22);
    goto LABEL_16;
  }
  v9 = 0LL;
  v22 = 0LL;
  v10 = v24;
  v11 = v23 - 0x4CF966F2C2DDEA68LL;
  if ( v23 == 0x4CF966F2C2DDEA68LL )
    v11 = v24 + 0x534404FF02E49B7ELL;
  if ( !v11 )
    goto LABEL_32;
  v12 = v23 - 0x4AB24DE3BB64D5B7LL;
  if ( v23 == 0x4AB24DE3BB64D5B7LL )
    v12 = v24 + 0x235851FE89248358LL;
  if ( !v12 )
    goto LABEL_32;
  v13 = v23 - 0x45D551C0B4620C71LL;
  if ( v23 == 0x45D551C0B4620C71LL )
    v13 = v24 + 0xC8183C556F22755LL;
  if ( !v13 )
    goto LABEL_32;
  v14 = v23 - *(_QWORD *)&GUID_NULL.Data1;
  if ( v23 == *(_QWORD *)&GUID_NULL.Data1 )
    v14 = v24 - *(_QWORD *)GUID_NULL.Data4;
  if ( !v14 )
    goto LABEL_14;
  v19 = v23 - 0x4658059A45DB96FFLL;
  if ( v23 == 0x4658059A45DB96FFLL )
    v19 = v24 - 0x1012647F7CCD4687LL;
  if ( !v19 )
    goto LABEL_14;
  v20 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int64 *, __int64 *))(*(_QWORD *)a4 + 88LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v20(a4, &v23, &v22) >= 0 )
  {
LABEL_32:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    return 0LL;
  }
  v9 = v22;
LABEL_14:
  if ( v9 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v10);
  }
LABEL_16:
  v15 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v25);
  if ( v15 < 0 )
  {
    v21 = 167LL;
  }
  else
  {
    v16 = v25[0] - 0x4658059A45DB96FFLL;
    if ( v25[0] == 0x4658059A45DB96FFLL )
      v16 = v25[1] - 0x1012647F7CCD4687LL;
    v17 = 0LL;
    if ( v16 )
      v17 = a3;
    v15 = CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(this, a2, v17, 0LL);
    if ( v15 >= 0 )
      return 0LL;
    v21 = 173LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v15,
    v22);
  return (unsigned int)v15;
}
