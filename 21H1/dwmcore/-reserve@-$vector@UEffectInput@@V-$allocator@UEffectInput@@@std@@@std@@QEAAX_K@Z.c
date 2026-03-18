/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18006EA80
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x18006EB28 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 7;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    return std::vector<EffectInput>::_Reallocate_exactly();
  }
  return result;
}
