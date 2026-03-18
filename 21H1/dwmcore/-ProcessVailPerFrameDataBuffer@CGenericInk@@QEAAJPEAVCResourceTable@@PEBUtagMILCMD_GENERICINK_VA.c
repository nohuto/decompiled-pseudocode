/*
 * XREFs of ?ProcessVailPerFrameDataBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER@@@Z @ 0x1801C7458
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801999E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4R.c)
 */

__int64 __fastcall CGenericInk::ProcessVailPerFrameDataBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER *a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetImpl'::`2'::impl,
    0,
    (__int64)a3);
  return 0LL;
}
