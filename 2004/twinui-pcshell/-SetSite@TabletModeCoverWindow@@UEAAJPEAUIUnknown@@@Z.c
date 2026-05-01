/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180416470
 * Callers:
 *     <none>
 * Callees:
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180017FDC (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeCoverWindow::SetSite(TabletModeCoverWindow *this, struct IUnknown *a2)
{
  char v4; // cl
  _QWORD *v5; // rax
  bool v6; // di
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  LODWORD(v8) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v5 = CWRLObjectWithGITSite::SiteUnk((__int64)this, &v8);
    v4 = 1;
    if ( *v5 )
      v6 = 1;
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 13),
      0LL);
    DestroyWindow(*((HWND *)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  return CWRLObjectWithGITSite::SetSite((RTL_SRWLOCK *)this, a2);
}
