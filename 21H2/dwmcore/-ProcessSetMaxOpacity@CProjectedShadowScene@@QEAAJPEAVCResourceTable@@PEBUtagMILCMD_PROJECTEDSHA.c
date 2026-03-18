/*
 * XREFs of ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x180237330
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180237484 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMaxOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY *a3)
{
  CProjectedShadowScene::SetMaxOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
