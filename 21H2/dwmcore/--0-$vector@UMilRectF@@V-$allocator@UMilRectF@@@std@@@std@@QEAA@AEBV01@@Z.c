/*
 * XREFs of ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AF36C
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Buy_raw@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x1801B45F4 (-_Buy_raw@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<MilRectF>::vector<MilRectF>(__int64 *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  __int64 v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    std::vector<MilRectF>::_Buy_raw(a1, v5 >> 4);
    v6 = *a1;
    memmove_0((void *)*a1, v3, v5);
    a1[1] = v6 + 16 * (v5 >> 4);
  }
  return a1;
}
