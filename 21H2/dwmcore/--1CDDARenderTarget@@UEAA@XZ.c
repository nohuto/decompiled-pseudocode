/*
 * XREFs of ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E0E94
 * Callers:
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x1801E0F00 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CDDARenderTarget::~CDDARenderTarget(CDDARenderTarget *this)
{
  CResource *v2; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 251);
  COcclusionContext::~COcclusionContext((void **)this + 57);
  v2 = (CResource *)*((_QWORD *)this + 21);
  if ( v2 )
    CResource::InternalRelease(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 160);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 19);
  CRenderTarget::~CRenderTarget(this);
}
