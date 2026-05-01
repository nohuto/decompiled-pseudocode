/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803F2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18011D168 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::SetSite(TabletModeCoverWindow *this, struct IUnknown *a2)
{
  char v2; // al
  bool v5; // zf
  bool v6; // di
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v8) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v5 = *CWRLObjectWithGITSite::SiteUnk((__int64)this, &v8) == 0;
    v2 = 1;
    if ( !v5 )
      v6 = 1;
  }
  if ( (v2 & 1) != 0 )
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
