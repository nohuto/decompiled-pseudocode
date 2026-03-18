/*
 * XREFs of ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1802AAB10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC660 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::EmitGeometry(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  unsigned int v5; // ebx
  struct CDrawListPrimitive *Primitive; // rdi
  gsl::details *v7; // rcx
  __int64 v8; // rax
  int appended; // eax
  __int64 v10; // rcx
  float v11; // xmm2_4
  int v12; // ecx
  gsl::details *v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]
  gsl::details *v16; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  Primitive = CRenderingBatchCommand::GetPrimitive(a3);
  v7 = (gsl::details *)*((unsigned int *)Primitive + 5);
  v8 = *((_QWORD *)Primitive + 7);
  v14 = v7;
  v15 = v8;
  if ( v8 )
  {
    if ( v7 )
    {
      appended = CD3DBatchExecutionContext::AppendGeometry(
                   (__int64)a2,
                   *((_DWORD *)Primitive + 2),
                   0,
                   (unsigned int *)&v14,
                   &v16,
                   0LL);
      v5 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, appended, 0x94u);
      }
      else
      {
        v11 = *((float *)a3 + 22);
        v14 = v16;
        v12 = *((_DWORD *)Primitive + 2);
        LODWORD(v15) = (*((_BYTE *)a2 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a2 + 19);
        HIDWORD(v15) = v12;
        TransferVertices2DH_UV2(
          (__int64)Primitive,
          (const struct CRenderingBatchCommand *)((char *)a3 + 16),
          v11,
          (__int64)&v14);
      }
    }
  }
  else if ( v7 )
  {
    gsl::details::terminate(v7);
    __debugbreak();
  }
  return v5;
}
