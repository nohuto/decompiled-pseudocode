/*
 * XREFs of ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180083090
 * Callers:
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005E560 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180083070 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001BE0C (--$move@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iterator@PEAUFrame.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180021864 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180083F50 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800845B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801A6838 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801A9410 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 */

__int64 __fastcall CRenderingEffect::EmitGeometryImpl(
        struct CD3DBatchExecutionContext *a1,
        const struct CHWDrawListEntry *a2,
        char a3)
{
  __int64 v3; // rbx
  int v6; // r10d
  unsigned int v7; // r14d
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  char *v12; // rsi
  int v13; // ecx
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // r8
  struct CMILMatrix *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  int appended; // eax
  __int64 v25; // rcx
  __int64 v26[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+A8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 23);
  v6 = (int)a1;
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v3 + 56);
    v10 = *(unsigned int *)(v3 + 20);
    v26[0] = v10;
    v26[1] = v9;
    if ( !v9 && v10 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *((_BYTE *)a1 + 72) == 0;
    v12 = (char *)a1 + 72;
    v13 = 48;
    if ( v11 )
      v13 = 16;
    v14 = v13 + 8 * *((_DWORD *)v12 + 1);
    if ( *(_DWORD *)(v3 + 24) )
    {
      appended = AppendInstancedPrimitive(v6, (_DWORD)a2, v3, (unsigned int)v26, (__int64)v12);
      v7 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, appended, 0xBDu, 0LL);
    }
    else
    {
      v15 = CD3DBatchExecutionContext::AppendGeometry(v6, v8, 0, (unsigned int)v26, (__int64)&v30, 0LL);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v15, 0x8Au, 0LL);
      }
      else
      {
        v26[0] = v30;
        LODWORD(v26[1]) = v14;
        if ( *(_DWORD *)(v3 + 12) )
        {
          v19 = *((_QWORD *)a2 + 8);
          HIDWORD(v26[1]) = *(_DWORD *)(v3 + 8);
          v20 = (struct CMILMatrix *)(v19 + 8);
          if ( *v12 )
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              (CDrawListPrimitive *)v3,
              v20,
              a3,
              *(float *)(v19 + 4),
              v26);
          else
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v3, (_DWORD)v20, v19, v18, (__int64)v26);
        }
        else
        {
          HIDWORD(v26[1]) = *(_DWORD *)(v3 + 8);
          TransferAliasedVertices(v3, v16, v26);
        }
      }
    }
  }
  v21 = *((_QWORD *)a2 + 8);
  v22 = (*((_QWORD *)a2 + 9) - v21) / 76;
  if ( !v22 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x180124658LL);
  }
  if ( v22 != 1 )
  {
    v26[0] = *((_QWORD *)a2 + 8);
    v26[1] = v22;
    v27 = 0LL;
    v28 = *(_OWORD *)v26;
    v29 = 0LL;
    std::move<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
      (__int64)v26,
      (const void *)(v21 + 76),
      v21 + 76 * v22,
      &v28);
  }
  *((_QWORD *)a2 + 9) -= 76LL;
  return v7;
}
