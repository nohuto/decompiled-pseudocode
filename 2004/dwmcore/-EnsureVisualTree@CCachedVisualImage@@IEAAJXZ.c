/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x180035904
 * Callers:
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180046730 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180046890 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this)
{
  struct CVisualTree **v1; // rbx
  unsigned int v2; // ebx
  CVisual *v4; // rdi
  bool v5; // r8
  int VisualTree; // eax
  unsigned int v7; // ecx

  v1 = (struct CVisualTree **)((char *)this + 176);
  if ( *((_QWORD *)this + 22) )
  {
    return 0;
  }
  else
  {
    v4 = (CVisual *)*((_QWORD *)this + 17);
    if ( v4 )
    {
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 176);
      VisualTree = CVisual::GetVisualTree(v4, v1, v5);
      v2 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, VisualTree, 0x27Eu, 0LL);
    }
    else
    {
      v2 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x282u, 0LL);
    }
  }
  return v2;
}
