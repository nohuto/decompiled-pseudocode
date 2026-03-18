/*
 * XREFs of ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x18019CE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180093A80 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800D784C (--1CRenderTarget@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::`vector deleting destructor'(CDDARenderTarget *this, char a2)
{
  CRenderTargetBitmap *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx

  COcclusionContext::~COcclusionContext((void **)this + 38);
  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 20);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 18);
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x7A8);
    else
      operator delete(this);
  }
  return this;
}
