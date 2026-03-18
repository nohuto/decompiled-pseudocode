/*
 * XREFs of ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x1800CCED8
 * Callers:
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800CCEB0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000D1D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800A3520 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC5B4 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801F05F0 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 */

__int64 __fastcall CRenderingEffect::EmitGeometryImpl(
        struct CD3DBatchExecutionContext *a1,
        const struct CRenderingBatchCommand *a2,
        char a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v8; // edx
  __int64 v9; // rax
  gsl::details *v10; // rcx
  int v11; // r15d
  int appended; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  char *v17; // rdx
  float v18; // xmm3_4
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  gsl::details *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v21 = EmitInstancedGeometry(a1, a2);
      v4 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xB9u);
    }
    else
    {
      v9 = *(_QWORD *)(v3 + 56);
      v10 = (gsl::details *)*(unsigned int *)(v3 + 20);
      v23 = v10;
      v24 = v9;
      if ( !v9 && v10 )
      {
        gsl::details::terminate(v10);
        __debugbreak();
      }
      v11 = (*((_BYTE *)a1 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a1 + 19);
      appended = CD3DBatchExecutionContext::AppendGeometry((__int64)a1, v8, 0, (unsigned int *)&v23, &v25, 0LL);
      v4 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, appended, 0x8Au);
      }
      else
      {
        v16 = *(_DWORD *)(v3 + 12) == 0;
        LODWORD(v24) = v11;
        if ( v16 )
        {
          v23 = (gsl::details *)v25;
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          TransferAliasedVertices(v3, v13, &v23);
        }
        else
        {
          v16 = *((_BYTE *)a1 + 72) == 0;
          v17 = (char *)a2 + 16;
          v18 = *((float *)a2 + 22);
          HIDWORD(v24) = *(_DWORD *)(v3 + 8);
          if ( v16 )
          {
            v23 = (gsl::details *)v25;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (__int64)v17, v15, v18, (__int64 *)&v23);
          }
          else
          {
            v20 = v25;
            v23 = (gsl::details *)v25;
            LOBYTE(v20) = a3;
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              v3,
              (__int64)v17,
              v20,
              v18,
              (__int64 *)&v23);
          }
        }
      }
    }
  }
  return v4;
}
