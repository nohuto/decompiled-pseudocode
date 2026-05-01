/*
 * XREFs of ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1803EB250
 * Callers:
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::operator() @ 0x1803EA6E0 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--operator().c)
 *     ?OnCaptureChanged@WindowArrangementView@@UEAAJXZ @ 0x1803EC4F0 (-OnCaptureChanged@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnKeyDown@WindowArrangementView@@UEAAJK@Z @ 0x1803EC5A0 (-OnKeyDown@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnKeyUp@WindowArrangementView@@UEAAJK@Z @ 0x1803EC5F0 (-OnKeyUp@WindowArrangementView@@UEAAJK@Z.c)
 *     ?OnPointerCancel@WindowArrangementView@@UEAAJXZ @ 0x1803EC640 (-OnPointerCancel@WindowArrangementView@@UEAAJXZ.c)
 *     ?OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1803EC690 (-OnPointerUp@WindowArrangementView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x1803EAE30 (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1803EB890 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803EC898 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803ED990 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::EndDrag(WindowArrangementView *this, char a2)
{
  int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*((_BYTE *)this + 314) )
  {
    *((_BYTE *)this + 314) = 1;
    if ( a2 )
      v4 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                        *((_QWORD *)this + 12),
                        v12);
    else
      v4 = -1;
    v11 = 0LL;
    v5 = *((_QWORD *)this + 10);
    v10 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 152LL))(
           v5,
           &GUID_959cb746_add4_483a_8acd_059d06f3798a,
           &v11) >= 0 )
    {
      LOBYTE(v6) = a2 ^ 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, v6);
    }
    if ( a2 )
    {
      v7 = WindowArrangementView::ProcessDrop(this, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
        WindowArrangementView::Cleanup(this);
        TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v10);
        return v8;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    WindowArrangementView::Hide((WindowArrangementView *)((char *)this + 24), 1);
    WindowArrangementView::Cleanup(this);
    TabletModeTelemetry::TMAppArrange::Stop((char *)this + 328, v10);
  }
  return 0LL;
}
