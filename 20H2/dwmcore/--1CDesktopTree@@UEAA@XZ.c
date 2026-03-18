/*
 * XREFs of ??1CDesktopTree@@UEAA@XZ @ 0x1801B1714
 * Callers:
 *     ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x18016CBA0 (--_GCDesktopTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180008B94 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800630A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C21DC (-clear@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_e.c)
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C9918 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800DAF24 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CDesktopTree::~CDesktopTree(CComposition ***this)
{
  CDesktopTree *v2; // rcx
  void **v3; // rcx
  void *v4; // r8
  bool v5; // zf
  __int64 v6; // rcx
  CComposition **v7; // rbx
  CComposition *v8; // rdx
  CComposition *v9; // rdx

  *this = (CComposition **)&CDesktopTree::`vftable';
  CDesktopTree::SetRootVisual(this, 0LL);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(this + 747);
  v2 = (CDesktopTree *)this[747];
  this[747] = 0LL;
  if ( v2 == (CDesktopTree *)(this + 750) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::clear(this + 740);
  v4 = *v3;
  v5 = *v3 == v3 + 3;
  *v3 = 0LL;
  if ( v5 )
    v4 = 0LL;
  operator delete(v4);
  v7 = this[739];
  if ( v7 )
  {
    v8 = v7[20];
    if ( v8 )
      std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))v8);
    v9 = v7[2];
    if ( v9 )
      std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))v9);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)(v7 + 1));
    operator delete(v7);
  }
  CVisualTree::~CVisualTree((CVisualTree *)this);
}
