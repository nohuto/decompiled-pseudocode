/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18006E8D0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18006E808 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18006E940 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  CDrawListBitmap::operator=(a1, a2);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 68) = *(_BYTE *)(a2 + 68);
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a2 + 69);
  result = a1;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  return result;
}
