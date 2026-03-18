/*
 * XREFs of ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACB5C
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::IsPure2DUniformZ<1>(__int64 a1)
{
  char v2; // al
  char v3; // di
  bool v4; // dl
  char v5; // al
  bool v6; // cl
  int v8; // xmm5_4
  int v9; // xmm5_4

  v2 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v2 )
  {
    v3 = 1;
    v4 = v2 == 1;
  }
  else
  {
    v3 = 1;
    v4 = CMILMatrix::IsAffine<1>(a1, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v8) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v8) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v4) & 0xC;
  }
  if ( !v4 )
    return 0;
  v5 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v5 )
  {
    v6 = v5 == 1;
  }
  else
  {
    v6 = CMILMatrix::IsAffine<1>(a1, 1)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v9) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v9) < 0.000081380211;
    *(_BYTE *)(a1 + 64) &= 0xF3u;
    *(_BYTE *)(a1 + 64) |= (-4 - 8 * v6) & 0xC;
  }
  if ( !v6 )
    return 0;
  return v3;
}
