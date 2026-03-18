/*
 * XREFs of ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x18000E2A4
 * Callers:
 *     ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z @ 0x1801E4250 (-ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTED.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E42F0 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000E4A4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadowScene::SetMaxBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 26) != v3 )
  {
    *((float *)this + 26) = v3;
    CResource::InvalidateAnimationSources(this, 3u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
