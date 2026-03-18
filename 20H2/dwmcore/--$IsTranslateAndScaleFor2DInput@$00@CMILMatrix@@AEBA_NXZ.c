/*
 * XREFs of ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B29F4
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B1FB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800B2740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslateAndScaleFor2DInput<1>(__int64 a1)
{
  bool v1; // r8
  char v2; // al
  bool result; // al

  v1 = 0;
  v2 = (char)(*(_BYTE *)(a1 + 65) << 6) >> 6;
  if ( v2 )
    return v2 == 1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 12) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 28) - 0.0) & _xmm) < 0.000081380211 )
  {
    v1 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 60) - 1.0) & _xmm) < 0.000081380211;
  }
  result = v1;
  *(_BYTE *)(a1 + 65) ^= (*(_BYTE *)(a1 + 65) ^ (-1 - 2 * v1)) & 3;
  return result;
}
