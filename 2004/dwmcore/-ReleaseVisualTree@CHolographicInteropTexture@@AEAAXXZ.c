/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x180257C5C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180256E90 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180257C90 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x18002664C (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD9D0 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  CVisualTree **v1; // rbx

  v1 = (CVisualTree **)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
  {
    CVisualTree::RemoveTreeClient(*v1, (CHolographicInteropTexture *)((char *)this + 56));
    ReleaseInterface<CResource>((__int64 *)v1);
  }
}
