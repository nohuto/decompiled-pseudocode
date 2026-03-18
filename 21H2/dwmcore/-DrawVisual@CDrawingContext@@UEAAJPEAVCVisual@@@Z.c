/*
 * XREFs of ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180004650
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180004DB0 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v7; // r8
  int v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct CVisualTree *v13; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v13 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v13);
  v4 = CSubVisualTree::Create(a2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FC,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v4,
      v9);
  }
  else
  {
    v11 = 0;
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v10, 0, 0);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 352));
    CMILMatrix::Multiply((CMILMatrix *)v10, TopByReference);
    v7 = (__int128 *)((char *)v13 + 72);
    if ( !*((_QWORD *)v13 + 8) )
      v7 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v5 = CDrawingContext::DrawSubVisualTree((char *)this - 16, v13, v7, v10);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return v5;
}
