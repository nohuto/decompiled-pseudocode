/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001A074
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180011ED4 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x1800147A0 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180016B98 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEBA?AV?$shared_ptr@VDuckingDescriptor@@@std@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180024FD8 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$shared_pt.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180025BB0 (--1TSSession@@QEAA@XZ.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026030 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180036660 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException()
{
  RaiseException(0xC000008C, 1u, 0, 0LL);
}
