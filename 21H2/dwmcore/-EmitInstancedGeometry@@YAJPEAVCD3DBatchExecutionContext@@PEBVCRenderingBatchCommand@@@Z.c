/*
 * XREFs of ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801F05F0
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800A6FB0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCom.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x1800CCED8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800A70B0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801EC5B4 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801ED424 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801F04D4 (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 */

__int64 __fastcall EmitInstancedGeometry(
        struct CD3DBatchExecutionContext *this,
        const struct CRenderingBatchCommand *a2)
{
  __m128 *v4; // rdx
  struct CDrawListPrimitive *Primitive; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128 *v8; // rbp
  int appended; // eax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rdi
  float v13; // xmm1_4
  int v14; // esi
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
  __int64 v27; // r12
  char *v28; // rsi
  __int64 v29; // r14
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  __m128 *v33; // rax
  __m128 v34; // xmm4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v38; // [rsp+30h] [rbp-78h] BYREF
  int v39; // [rsp+38h] [rbp-70h]
  int v40; // [rsp+3Ch] [rbp-6Ch]
  void *v41; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v42[3]; // [rsp+48h] [rbp-60h] BYREF

  Primitive = CRenderingBatchCommand::GetPrimitive(a2);
  v6 = *((unsigned int *)Primitive + 5);
  v7 = *((_QWORD *)Primitive + 7);
  v42[0] = v6;
  v42[1] = v7;
  if ( !v7 && v6 )
  {
    gsl::details::terminate(0LL);
    __debugbreak();
  }
  v8 = v4 + 1;
  CD3DBatchExecutionContext::SetLocalToWorld(this, v4 + 1);
  appended = CD3DBatchExecutionContext::AppendGeometry(
               (__int64)this,
               *((_DWORD *)Primitive + 2),
               *((_DWORD *)Primitive + 6),
               (unsigned int *)v42,
               &v38,
               &v41);
  v11 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, appended, 0x37u);
  }
  else
  {
    v12 = v38;
    v13 = *((float *)a2 + 22);
    v14 = (*((_BYTE *)this + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)this + 19);
    v40 = *((_DWORD *)Primitive + 2);
    v39 = v14;
    TransferAliasedVertices((__int64)Primitive, v13, (__int64)&v38);
    v15 = 0.0;
    v16 = 0.0;
    if ( *((_DWORD *)Primitive + 2) )
    {
      v17 = *((unsigned int *)Primitive + 2);
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
    v27 = *((unsigned int *)Primitive + 6);
    v28 = (char *)v41;
    v29 = v27;
    memcpy_0(v41, *((const void **)Primitive + 8), 48 * v27);
    if ( *((_DWORD *)Primitive + 25) == 1 )
    {
      v30 = v8[3].m128_f32[0];
      v31 = v8[3].m128_f32[1];
      v32 = v8[3].m128_f32[2];
      if ( (_DWORD)v27 )
      {
        v33 = (__m128 *)v28;
        do
        {
          v34 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 170), v8[2]),
                      _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 255), v8[3])),
                    _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 85), v8[1])),
                  _mm_mul_ps(_mm_shuffle_ps(*v33, *v33, 0), *v8));
          v35 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
          v36 = v34.m128_f32[0] - v30;
          v34.m128_f32[0] = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
          v33->m128_f32[3] = (float)((float)((float)(v35 - v31) * (float)(v35 - v31)) + (float)(v36 * v36))
                           + (float)((float)(v34.m128_f32[0] - v32) * (float)(v34.m128_f32[0] - v32));
          v33 += 3;
          --v29;
        }
        while ( v29 );
      }
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v28,
        &v28[48 * v27],
        0xAAAAAAAAAAAAAAABuLL * ((48 * v27) >> 4),
        (unsigned __int8 (__fastcall *)(__int128 *, char *))WSortInstances);
    }
  }
  return v11;
}
