/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18029C0C4
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18029B260 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18029C0F8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x180024AD0 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x180208A84 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  CVisualTree **v1; // rbx

  v1 = (CVisualTree **)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    CVisualTree::RemoveTreeClient(*v1, (CHolographicInteropTexture *)((char *)this + 64));
    ReleaseInterface<CVisualTree>((__int64 *)v1);
  }
}
