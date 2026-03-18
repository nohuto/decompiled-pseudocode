/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x18008E28C
 * Callers:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18008DF30 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x1800D37C8 (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x18006F61C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x18008E37C (--0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x18008E4E8 (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 7,
    (__int64)a3);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  CPreComputeContext::CPreComputeContext((CVisualTree *)((char *)this + 96), this);
  CDirtyRegion::CDirtyRegion((CVisualTree *)((char *)this + 1264), this);
  *((_QWORD *)this + 716) = (char *)this + 5752;
  *((_QWORD *)this + 717) = (char *)this + 5752;
  *((_QWORD *)this + 718) = (char *)this + 5784;
  *((_QWORD *)this + 723) = 0LL;
  *((_QWORD *)this + 724) = 0LL;
  *((_QWORD *)this + 725) = (char *)this + 5808;
  *((_DWORD *)this + 1452) = 0;
  *((_DWORD *)this + 1472) = 0;
  *((_WORD *)this + 2946) = 257;
  *((_BYTE *)this + 5894) = 0;
  *(_OWORD *)((char *)this + 5784) = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite;
  *((_QWORD *)this + 735) = (char *)this + 5872;
  *((_QWORD *)this + 734) = (char *)this + 5872;
  return this;
}
