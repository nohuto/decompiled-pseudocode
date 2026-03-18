/*
 * XREFs of ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x1800E0250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800D784C (--1CRenderTarget@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::`scalar deleting destructor'(CRemoteRenderTarget *this, char a2)
{
  CRenderTargetBitmap *v4; // rcx
  CRenderTargetBitmap *v5; // rcx

  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 22);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 21);
  if ( v5 )
    CRenderTargetBitmap::Release(v5);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 160);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 19);
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x178);
    else
      operator delete(this);
  }
  return this;
}
