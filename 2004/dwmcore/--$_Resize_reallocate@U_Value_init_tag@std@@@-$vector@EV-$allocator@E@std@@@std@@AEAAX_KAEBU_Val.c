/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180082FB8
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800807F4 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180083290 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800879A8 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18023791C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEA_K00@Z @ 0x180267250 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEA_K00@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1800830C4 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E5CF0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rsi
  char *v6; // rdi

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = std::vector<unsigned char>::_Calculate_growth();
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memset_0(&v6[v4], 0, a2 - v4);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, v6, a2, v5);
}
