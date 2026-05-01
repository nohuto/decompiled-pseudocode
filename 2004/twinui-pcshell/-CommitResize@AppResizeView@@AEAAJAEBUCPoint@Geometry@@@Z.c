/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18041280C
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x180413120 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x180413240 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1804127B4 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1804129F0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1804133A4 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180413A28 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int ResizeApps; // eax
  unsigned int v5; // edi
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-50h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-40h] BYREF
  char v14; // [rsp+48h] [rbp-28h]
  _BYTE v15[24]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v11 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 32LL))(
                       *((_QWORD *)this + 8),
                       v15);
    v13[1] = (__int64)this;
    v13[2] = (__int64)&v11;
    v14 = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    ResizeApps = AppResizeView::QueryResizeApps(this, v11, a2, v13);
    v5 = ResizeApps;
    if ( ResizeApps < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22A,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)ResizeApps);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      v14 = 0;
      AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
      AppResizeView::Cleanup(this, v8);
      TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v11);
      return v5;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &ppvOut);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 557LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 88LL))(ppvOut, v13[0]);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 558LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v14 = 0;
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this, v10);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v11);
  }
  return 0LL;
}
