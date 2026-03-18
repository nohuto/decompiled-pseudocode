/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B6A5C
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180084B28 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800B34D8 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B69E4 (--$_Resize@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800F28AC (_anonymous_namespace_--Compressor--Compress.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1802AB140 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800B6FF8 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rbp
  char *v6; // r14
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<KernelTap>::_Xlength();
  v4 = a1[1] - *a1;
  v5 = std::vector<char>::_Calculate_growth();
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memset_0(&v6[v4], 0, a2 - v4);
  memmove_0(v6, (const void *)*a1, a1[1] - *a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, a1[2] - *a1);
  *a1 = v6;
  a1[1] = &v6[a2];
  result = &v6[v5];
  a1[2] = &v6[v5];
  return result;
}
