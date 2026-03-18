/*
 * XREFs of ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18008CAB0
 * Callers:
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180018770 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021864 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800619C4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800857D4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6928 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 * Callees:
 *     ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x180018190 (--$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z.c)
 */

__int64 __fastcall CMILMatrix::Is2DAffine<0>(__int64 a1)
{
  unsigned __int8 v1; // dl
  float v2; // xmm4_4
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  __int64 v12; // rcx

  v1 = 0;
  v2 = FLOAT_0_000081380211;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & _xmm) < 0.000081380211
    || CMILMatrix::IsEqual<1,0>(*(float *)(a1 + 8), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v4 + 24), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v5 + 32), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v6 + 36), 0.0, 0.000081380211)
    && (CMILMatrix::IsEqual<1,0>(*(float *)(v7 + 40), 0.0, 0.000081380211)
     || CMILMatrix::IsEqual<1,0>(v10, 1.0, 0.000081380211))
    && (v11 = v9, CMILMatrix::IsEqual<1,0>(*(float *)(v8 + 44), 0.0, v9))
    && CMILMatrix::IsEqual<1,0>(*(float *)(v12 + 56), 0.0, v11) )
  {
    if ( v2 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                           - 1.0) & _xmm) )
      return 1;
  }
  return v1;
}
