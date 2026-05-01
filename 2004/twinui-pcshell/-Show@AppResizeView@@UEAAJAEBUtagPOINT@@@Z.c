/*
 * XREFs of ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1804136C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x180412510 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18041253C (--4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InitAppLayout@AppResizeView@@AEAAJXZ @ 0x180412B20 (-InitAppLayout@AppResizeView@@AEAAJXZ.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180412BE0 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180412CE4 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x18041383C (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180419B70 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::Show(AppResizeView *this, const struct tagPOINT *a2)
{
  AppResizeView *v3; // rsi
  int inited; // eax
  int v5; // ebx
  __int64 v6; // rdx
  const struct _GUID *v8; // rcx
  struct IAppLayout *v9; // rbx
  int v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *(struct tagPOINT *)v10 = *a2;
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)v10;
  *(struct tagPOINT *)v10 = *a2;
  v3 = (AppResizeView *)((char *)this - 24);
  inited = AppResizeView::InitAppLayout((AppResizeView *)((char *)this - 24));
  v5 = inited;
  if ( inited >= 0 )
  {
    inited = AppResizeView::InitDropFeedback(v3, (const struct Geometry::CPoint *)v10);
    v5 = inited;
    if ( inited >= 0 )
    {
      inited = AppResizeView::InitAppResizeData(v3, (const struct Geometry::CPoint *)v10);
      v5 = inited;
      if ( inited >= 0 )
        goto LABEL_8;
      v6 = 327LL;
    }
    else
    {
      v6 = 326LL;
    }
  }
  else
  {
    v6 = 325LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)inited);
LABEL_8:
  if ( v5 >= 0 )
  {
    if ( !*((_QWORD *)this + 7) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
      if ( AppResizeAcc_CreateInstance(v8, (void **)this + 7) >= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7));
    }
    v9 = (struct IAppLayout *)*((_QWORD *)this + 6);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"TMAppResize");
    v11[0] = &TabletModeTelemetry::TMAppResize::`vftable';
    TabletModeTelemetry::TMAppResize::StartActivity((TabletModeTelemetry::TMAppResize *)v11, v9);
    TabletModeTelemetry::TMAppResize::operator=((__int64)this + 128, (__int64)v11);
    TabletModeTelemetry::TMAppResize::~TMAppResize((TabletModeTelemetry::TMAppResize *)v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
