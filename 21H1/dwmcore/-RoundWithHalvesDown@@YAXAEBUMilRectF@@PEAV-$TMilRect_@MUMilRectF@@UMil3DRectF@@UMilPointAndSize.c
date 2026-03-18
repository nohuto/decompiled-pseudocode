/*
 * XREFs of ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002AECC
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18002B208 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

__int64 __fastcall RoundWithHalvesDown(float *a1, float *a2)
{
  __int64 result; // rax

  *a2 = (float)(int)CFloatFPU::CeilingSat(*a1 - 0.5);
  a2[1] = (float)(int)CFloatFPU::CeilingSat(a1[1] - 0.5);
  a2[2] = (float)(int)CFloatFPU::CeilingSat(a1[2] - 0.5);
  result = CFloatFPU::CeilingSat(a1[3] - 0.5);
  a2[3] = (float)(int)result;
  return result;
}
