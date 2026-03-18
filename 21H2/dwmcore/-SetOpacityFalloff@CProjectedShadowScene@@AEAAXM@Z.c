/*
 * XREFs of ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18023759C
 * Callers:
 *     ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x180237390 (-ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802375E0 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1802373B0 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::SetOpacityFalloff(CProjectedShadowScene *this, float a2)
{
  if ( *((float *)this + 33) != a2 )
  {
    *((float *)this + 33) = a2;
    CResource::InvalidateAnimationSources(this, 7);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
