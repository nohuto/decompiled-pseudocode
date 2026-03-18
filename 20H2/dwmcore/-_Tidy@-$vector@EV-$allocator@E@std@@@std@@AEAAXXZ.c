/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800CFC0C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800585C4 (_anonymous_namespace_--SendFramesReport.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180059210 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180072350 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B54FC (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EE82C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x18020D608 (DebugInspectSysMemSurface_NoOpt.c)
 *     ??1CPathData@@MEAA@XZ @ 0x18021DB10 (--1CPathData@@MEAA@XZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18023FA3C (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025BC60 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEA_K00@Z @ 0x180266470 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEA_K00@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
