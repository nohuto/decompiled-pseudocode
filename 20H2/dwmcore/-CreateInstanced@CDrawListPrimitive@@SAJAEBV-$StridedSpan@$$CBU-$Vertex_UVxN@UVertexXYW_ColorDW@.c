/*
 * XREFs of ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801A2D88
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801DEDCC (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x180062A40 (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x180072278 (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@@Z @ 0x1801A2E80 (-InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_Co.c)
 */

__int64 __fastcall CDrawListPrimitive::CreateInstanced(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        int a6,
        int a7,
        PrimitiveStorage::CInlineStorageBase **a8)
{
  int v8; // ebp
  unsigned int v9; // edi
  __int64 v12; // rcx
  PrimitiveStorage::CInlineStorageBase *v13; // rbx
  int v14; // r8d
  __int128 v15; // xmm1
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  int v19; // [rsp+60h] [rbp-18h]

  v8 = a1;
  *(_QWORD *)&v18 = *(unsigned int *)(a1 + 12);
  v9 = 0;
  HIDWORD(v18) = *a3;
  v19 = *a4;
  DWORD2(v18) = 2;
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)&v18);
  v13 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v18);
  if ( v13 )
  {
    v15 = *(_OWORD *)a3;
    v17 = *(_OWORD *)a4;
    v18 = v15;
    CDrawListPrimitive::InitializeInstanced((_DWORD)v13, v8, v14, (unsigned int)&v18, (__int64)&v17, a5);
    *a8 = v13;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x84u, 0LL);
  }
  return v9;
}
