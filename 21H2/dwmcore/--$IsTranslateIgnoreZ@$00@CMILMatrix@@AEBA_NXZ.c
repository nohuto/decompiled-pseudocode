/*
 * XREFs of ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AA57C
 * Callers:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CMILMatrix::IsTranslateIgnoreZ<1>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  bool result; // al
  char v7; // r11

  v5 = (char)(4 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v5 )
    return v5 == 1;
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1, a2, a3, a4)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211 )
  {
    v7 = 1;
  }
  *(_BYTE *)(a1 + 64) &= 0xCFu;
  result = v7;
  *(_BYTE *)(a1 + 64) |= (-16 - 32 * v7) & 0x30;
  return result;
}
