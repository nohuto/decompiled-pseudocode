/*
 * XREFs of ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x1802373F0
 * Callers:
 *     ?ProcessSetBlurRadiusMultiplier@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER@@@Z @ 0x180237218 (-ProcessSetBlurRadiusMultiplier@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PR.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802375E0 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1802373B0 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::SetBlurRadiusMultiplier(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 30) != v3 )
  {
    *((float *)this + 30) = v3;
    CResource::InvalidateAnimationSources(this, 0);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
