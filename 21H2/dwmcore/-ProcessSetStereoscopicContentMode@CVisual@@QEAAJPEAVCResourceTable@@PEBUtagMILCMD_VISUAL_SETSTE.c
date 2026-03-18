/*
 * XREFs of ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801F8018
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007D878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 */

__int64 __fastcall CVisual::ProcessSetStereoscopicContentMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE *a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  return 0LL;
}
