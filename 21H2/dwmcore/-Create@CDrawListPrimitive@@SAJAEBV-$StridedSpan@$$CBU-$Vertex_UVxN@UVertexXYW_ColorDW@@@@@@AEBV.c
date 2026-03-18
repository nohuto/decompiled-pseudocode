/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1800B3CC4
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800B34D8 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18020E868 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x1800B4300 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x1800B4768 (PrimitiveStorage--Alloc_16_.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x1800B4A78 (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, char a6, __int64 *a7)
{
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // edi
  __int64 v13; // rcx
  __int64 v14; // rbx
  _DWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-2Ch]
  int v18; // [rsp+50h] [rbp-28h]

  v7 = a1;
  v8 = *(_DWORD *)a4;
  v16[0] = *(_DWORD *)(a1 + 12);
  v9 = 0;
  v16[1] = v16[0];
  v16[2] = a3;
  v17 = v8;
  v18 = 0;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)v16);
  if ( v16[0] > 0x10000u || v17 > 0x1FFFE )
  {
    v16[0] = 0;
    v17 = 0;
  }
  v14 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v16);
  if ( v14 )
  {
    CDrawListPrimitive::Initialize(v14, v7, a2, a3, *(void **)(a4 + 8), v8, a5, a6);
    *a7 = v14;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x55u);
  }
  return v9;
}
