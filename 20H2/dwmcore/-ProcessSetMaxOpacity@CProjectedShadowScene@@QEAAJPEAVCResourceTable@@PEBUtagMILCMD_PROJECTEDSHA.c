/*
 * XREFs of ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x1801E4270
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x18000E32C (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMaxOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY *a3)
{
  CProjectedShadowScene::SetMaxOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
