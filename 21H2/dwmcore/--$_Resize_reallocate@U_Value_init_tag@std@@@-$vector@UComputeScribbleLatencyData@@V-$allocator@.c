/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5DD0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5D18 (--$_Resize@U_Value_init_tag@std@@@-$vector@UComputeScribbleLatencyData@@V-$allocator@UComputeScr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall std::vector<ComputeScribbleLatencyData>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  SIZE_T v8; // rcx
  char *v9; // rbp

  if ( a2 > 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v4 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 56LL;
  v5 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 56LL;
  v6 = v5 >> 1;
  if ( v5 <= 0x492492492492492LL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = 56 * v7;
  if ( v7 > 0x492492492492492LL )
    v8 = -1LL;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  if ( a2 != v4 )
    memset_0(&v9[56 * v4], 0, 56 * (a2 - v4));
  memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<CShapeRenderTask>::_Change_array(a1, v9, a2, v7);
}
