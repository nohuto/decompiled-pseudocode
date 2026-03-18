/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x1800508F0
 * Callers:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18005061C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180192E90 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18019A57C (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18004BAF8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  __int64 *v2; // rdi
  const void *v3; // rcx
  void *v4; // rcx
  CDrawListEntry *v5; // rcx

  v2 = (__int64 *)((char *)this + 1712);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 1712);
  v3 = (const void *)*((_QWORD *)this + 212);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 211);
  if ( v4 )
    CloseHandle(v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  COcclusionContext::~COcclusionContext((void **)this + 9);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 64);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 6);
  v5 = (CDrawListEntry *)*((_QWORD *)this + 5);
  if ( v5 )
    CDrawListEntry::Release(v5);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
