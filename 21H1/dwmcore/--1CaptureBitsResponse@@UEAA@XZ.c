/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x18008C504
 * Callers:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18008C34C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801976E0 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18019EDAC (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180093A80 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
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
  COcclusionContext::~COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 64);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 6);
  v5 = (CDrawListEntry *)*((_QWORD *)this + 5);
  if ( v5 )
    CDrawListEntry::Release(v5);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
