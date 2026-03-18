/*
 * XREFs of ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18000AFE8
 * Callers:
 *     ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x1801E8AD0 (-ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E8AF0 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000B1A4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadowScene::SetOpacityFalloff(CProjectedShadowScene *this, float a2)
{
  if ( *((float *)this + 31) != a2 )
  {
    *((float *)this + 31) = a2;
    CResource::InvalidateAnimationSources(this, 7u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
