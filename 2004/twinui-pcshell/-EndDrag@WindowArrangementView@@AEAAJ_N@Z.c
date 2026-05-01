/*
 * XREFs of ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18040DE14
 * Callers:
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator() @ 0x18040D1C4 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--operator().c)
 *     ?OnCaptureChanged@WindowArrangementView@@UEAAJXZ @ 0x18040F320 (-OnCaptureChanged@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnKeyDown@WindowArrangementView@@UEAAJK@Z @ 0x18040F3D0 (-OnKeyDown@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnKeyUp@WindowArrangementView@@UEAAJK@Z @ 0x18040F420 (-OnKeyUp@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@WindowArrangementView@@UEAAJXZ @ 0x18040F470 (-OnPointerCancel@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18040F4C0 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18040D9A0 (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18040E5D0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040F6C8 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180410880 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::EndDrag(WindowArrangementView *this, char a2)
{
  int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( !*((_BYTE *)this + 314) )
  {
    *((_BYTE *)this + 314) = 1;
    if ( a2 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 12) + 32LL))(
                        *((_QWORD *)this + 12),
                        v13);
    else
      v4 = -1;
    v11 = v4;
    v13[0] = this;
    v13[1] = &v11;
    v14 = 1;
    v12 = 0LL;
    v5 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 152LL))(
           v5,
           &GUID_959cb746_add4_483a_8acd_059d06f3798a,
           &v12) >= 0 )
    {
      LOBYTE(v6) = a2 ^ 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, v6);
    }
    if ( a2 )
    {
      v8 = WindowArrangementView::ProcessDrop(this, v11, v7);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
        WindowArrangementView::Cleanup(this);
        TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v11);
        return v9;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
    WindowArrangementView::Cleanup(this);
    TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v11);
  }
  return 0LL;
}
