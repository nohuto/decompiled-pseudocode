/*
 * XREFs of ?ProcessSetMinBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS@@@Z @ 0x1801E4290
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180020BDC (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMinBlurRadius(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS *a3)
{
  CProjectedShadowScene::SetMinBlurRadius(this, *((float *)a3 + 2));
  return 0LL;
}
