/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x1800D3200
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18006B530 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18006BA10 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004AC18 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this)
{
  struct CVisualTree **v1; // rbx
  unsigned int v2; // ebx
  CVisual *v4; // rdi
  int VisualTree; // eax
  __int64 v6; // rcx

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
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 22);
      VisualTree = CVisual::GetVisualTree(v4, v1);
      v2 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0x27Eu, 0LL);
    }
    else
    {
      v2 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x282u, 0LL);
    }
  }
  return v2;
}
