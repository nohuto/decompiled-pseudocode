/*
 * XREFs of ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EA1F0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180022410 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007F1B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseRealMatrixEpsilon(float a1, float a2)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - a2) & _xmm) <= 0.000081380211;
}
