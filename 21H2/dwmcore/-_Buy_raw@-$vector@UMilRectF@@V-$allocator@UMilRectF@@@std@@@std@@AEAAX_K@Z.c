/*
 * XREFs of ?_Buy_raw@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x180178B0C
 * Callers:
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180174664 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801AD254 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<MilRectF>::_Buy_raw(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  SIZE_T v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax

  v3 = 16 * a2;
  v4 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v4 = -1LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *a1 = v5;
  a1[1] = v5;
  result = v3 + v5;
  a1[2] = result;
  return result;
}
