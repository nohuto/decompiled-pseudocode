/*
 * XREFs of ?ProcessSetBlurRadiusMultiplier@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER@@@Z @ 0x1801E8A30
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x18000AF54 (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetBlurRadiusMultiplier(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER *a3)
{
  CProjectedShadowScene::SetBlurRadiusMultiplier(this, *((float *)a3 + 2));
  return 0LL;
}
