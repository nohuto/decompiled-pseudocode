/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E87F8
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18006982C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x18004F814 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  SIZE_T v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  _QWORD *i; // rbx
  __int128 *v11; // rdx
  _OWORD *v12; // rcx
  __int128 *j; // rax
  __int128 v14; // xmm0

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v4 = (a1[1] - *a1) >> 4;
  v5 = std::vector<tagRECT>::_Calculate_growth(a1, a2);
  v6 = 16 * v5;
  if ( v5 > v7 )
    v6 = -1LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v9 = a2 - v4;
  for ( i = (_QWORD *)(v8 + 16 * v4); v9; --v9 )
  {
    *i = 0LL;
    i[1] = 0LL;
    i += 2;
  }
  v11 = (__int128 *)a1[1];
  v12 = (_OWORD *)v8;
  for ( j = (__int128 *)*a1; j != v11; ++j )
  {
    v14 = *j;
    *v12++ = v14;
  }
  return std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Change_array(
           a1,
           v8,
           a2,
           v5);
}
