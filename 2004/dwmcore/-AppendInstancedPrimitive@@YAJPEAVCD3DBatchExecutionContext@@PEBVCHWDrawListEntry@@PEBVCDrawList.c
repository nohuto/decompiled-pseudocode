/*
 * XREFs of ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801AB314
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180064240 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180065100 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801A8658 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801A8900 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801AB1AC (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 */

__int64 __fastcall AppendInstancedPrimitive(
        CD3DBatchExecutionContext *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  int appended; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rbx
  float v13; // xmm1_4
  int v14; // edi
  float v15; // xmm2_4
  float v16; // xmm3_4
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  int v24; // edx
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // r15
  char *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rax
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  __m128 *v34; // rcx
  __m128 v35; // xmm4
  float v36; // xmm1_4
  float v37; // xmm0_4
  __int64 v39; // [rsp+30h] [rbp-78h] BYREF
  int v40; // [rsp+38h] [rbp-70h]
  int v41; // [rsp+3Ch] [rbp-6Ch]
  void *v42; // [rsp+40h] [rbp-68h] BYREF

  CD3DBatchExecutionContext::SetLocalToWorld(a1, (const struct CMILMatrix *)(*(_QWORD *)(a2 + 64) + 8LL));
  appended = CD3DBatchExecutionContext::AppendGeometry(
               (__int64)a1,
               *(_DWORD *)(a3 + 8),
               *(_DWORD *)(a3 + 24),
               a4,
               &v39,
               &v42);
  v11 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, appended, 0x34u, 0LL);
  }
  else
  {
    v12 = v39;
    v41 = *(_DWORD *)(a3 + 8);
    v13 = *(float *)(*(_QWORD *)(a2 + 64) + 4LL);
    v14 = (*(_BYTE *)a5 != 0 ? 48 : 16) + 8 * *(_DWORD *)(a5 + 4);
    v40 = v14;
    TransferAliasedVertices(a3, v13, (__int64)&v39);
    v15 = 0.0;
    v16 = 0.0;
    if ( *(_DWORD *)(a3 + 8) )
    {
      v17 = *(unsigned int *)(a3 + 8);
      v18 = 0;
      v19 = v17;
      do
      {
        v20 = v18;
        v18 += v14;
        v21 = fmaxf(*(float *)(v20 + v12), v15);
        v22 = fmaxf(*(float *)(v20 + v12 + 4), v16);
        v15 = v21;
        v16 = v22;
        --v19;
      }
      while ( v19 );
      v23 = v21 * 0.5;
      v24 = 0;
      do
      {
        v25 = v24;
        v24 += v14;
        v26 = *(float *)(v25 + v12 + 4) - (float)(v22 * 0.5);
        *(float *)(v25 + v12) = *(float *)(v25 + v12) - v23;
        *(float *)(v25 + v12 + 4) = v26;
        --v17;
      }
      while ( v17 );
    }
    v27 = *(unsigned int *)(a3 + 24);
    v28 = (char *)v42;
    v29 = v27;
    memcpy_0(v42, *(const void **)(a3 + 64), 48 * v27);
    if ( *(_DWORD *)(a3 + 100) == 1 )
    {
      v30 = *(_QWORD *)(a2 + 64);
      v31 = *(float *)(v30 + 56);
      v32 = *(float *)(v30 + 60);
      v33 = *(float *)(v30 + 64);
      if ( (_DWORD)v27 )
      {
        v34 = (__m128 *)v28;
        do
        {
          v35 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 255), *(__m128 *)(v30 + 56)),
                    _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 170), *(__m128 *)(v30 + 40))),
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 85), *(__m128 *)(v30 + 24)),
                    _mm_mul_ps(_mm_shuffle_ps(*v34, *v34, 0), *(__m128 *)(v30 + 8))));
          v36 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
          v37 = v35.m128_f32[0] - v31;
          v35.m128_f32[0] = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
          v34->m128_f32[3] = (float)((float)((float)(v36 - v32) * (float)(v36 - v32)) + (float)(v37 * v37))
                           + (float)((float)(v35.m128_f32[0] - v33) * (float)(v35.m128_f32[0] - v33));
          v34 += 3;
          --v29;
        }
        while ( v29 );
      }
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v28,
        &v28[48 * v27],
        48 * v27 / 48,
        (unsigned __int8 (__fastcall *)(__int128 *, char *))WSortInstances);
    }
  }
  return v11;
}
