/*
 * XREFs of ?_Buy_raw@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x1801B45F4
 * Callers:
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AF36C (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800B6FA0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<MilRectF>::_Buy_raw(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  size_of = std::_Get_size_of_n<16>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
