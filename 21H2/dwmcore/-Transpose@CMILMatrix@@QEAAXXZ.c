/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18000DE4C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180010D04 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9358 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180236744 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x18000DE90 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

void __fastcall CMILMatrix::Transpose(CMILMatrix *this)
{
  _OWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // xmm1
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = (_OWORD *)Windows::Foundation::Numerics::transpose(v4, this);
  *(_OWORD *)v2 = *v1;
  *(_OWORD *)(v2 + 16) = v1[1];
  *(_OWORD *)(v2 + 32) = v1[2];
  v3 = v1[3];
  *(_BYTE *)(v2 + 64) &= 3u;
  *(_BYTE *)(v2 + 65) &= 0xC0u;
  *(_OWORD *)(v2 + 48) = v3;
}
