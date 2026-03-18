/*
 * XREFs of ??0CDrawListBitmap@@QEAA@XZ @ 0x1800D5AB0
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180087CA0 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800AEC60 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 * Callees:
 *     <none>
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  return this;
}
