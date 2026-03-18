/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x180256E4C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180256060 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180256E80 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x18003326C (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD68C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
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
