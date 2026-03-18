/*
 * XREFs of ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x180020D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008F5A8 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E08 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawVisual(CRenderDataBounds *this, struct CVisual *a2)
{
  bool v4; // r8
  struct CVisualTree *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v6);
    if ( (int)CVisual::GetVisualTree(a2, &v6, v4) < 0
      || (*(int (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v6 + 208LL))(v6) < 0 )
    {
      *((_BYTE *)this + 96) = 1;
      *(_OWORD *)((char *)this + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      CRenderDataBounds::AddBounds(this, (char *)a2 + 140);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v6);
  }
  return 0LL;
}
