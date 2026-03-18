/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1800C96E8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // ebx
  char v3; // di
  CExpressionValueStack *v5; // r11
  float v6; // xmm2_4
  float v7; // xmm3_4
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  __m128 v15; // xmm3
  __m128 v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v23; // [rsp+20h] [rbp-38h]
  __int128 v24; // [rsp+30h] [rbp-28h]
  __int128 v25; // [rsp+30h] [rbp-28h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v5 = this;
  if ( v2 < a2 )
  {
    v23 = 5819;
LABEL_12:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v8;
  }
  if ( a2 == 1 )
  {
    this = (CExpressionValueStack *)*((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 20 * v2 - 2) == 18 )
    {
      DWORD2(v24) = 0;
      *(_QWORD *)&v24 = *((unsigned int *)this + 20 * v2 - 20);
      HIDWORD(v24) = *((_DWORD *)this + 20 * v2 - 20);
      *((_DWORD *)this + 20 * v2 - 2) = 104;
      *((_OWORD *)this + 5 * v2 - 5) = v24;
      *((_BYTE *)this + 80 * v2 - 4) = 1;
      *((_QWORD *)this + 10 * v2 - 8) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      goto LABEL_8;
    }
    if ( *((_DWORD *)this + 20 * v2 - 2) == 35 )
    {
      v6 = *((float *)this + 20 * v2 - 20);
      v7 = *((float *)this + 20 * v2 - 19);
      *((_DWORD *)this + 20 * v2 - 2) = 104;
      *((float *)this + 20 * v2 - 20) = v6;
      *((_DWORD *)this + 20 * v2 - 19) = 0;
      *((_DWORD *)this + 20 * v2 - 18) = 0;
      *((float *)this + 20 * v2 - 17) = v7;
      *((float *)this + 20 * v2 - 16) = 0.0 - (float)(v6 * 0.0);
      *((float *)this + 20 * v2 - 15) = 0.0 - (float)(v7 * 0.0);
      *((_BYTE *)this + 80 * v2 - 4) = 1;
LABEL_6:
      v3 = 1;
      goto LABEL_7;
    }
    goto LABEL_7;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_7;
    v10 = *((_QWORD *)this + 3);
    v11 = 10LL * (v2 - 3);
    if ( *(_DWORD *)(v10 + 80LL * (v2 - 3) + 72) != 18
      || *(_DWORD *)(v10 + 80LL * (v2 - 2) + 72) != 18
      || *(_DWORD *)(v10 + 80LL * (v2 - 1) + 72) != 35 )
    {
      goto LABEL_7;
    }
    v19 = *(float *)(v10 + 80LL * (v2 - 1));
    v20 = *(float *)(v10 + 80LL * (v2 - 1) + 4);
    v17 = *(float *)(v10 + 80LL * (v2 - 3));
    v18 = *(float *)(v10 + 80LL * (v2 - 2));
    v21 = v19 * v17;
    v22 = v20 * v18;
LABEL_29:
    *(_DWORD *)(v10 + 8 * v11 + 72) = 104;
    *(float *)(v10 + 8 * v11) = v17;
    *(_DWORD *)(v10 + 8 * v11 + 4) = 0;
    *(_DWORD *)(v10 + 8 * v11 + 8) = 0;
    *(float *)(v10 + 8 * v11 + 12) = v18;
    *(float *)(v10 + 8 * v11 + 16) = v19 - v21;
    *(float *)(v10 + 8 * v11 + 20) = v20 - v22;
    *(_BYTE *)(v10 + 8 * v11 + 76) = 1;
    goto LABEL_6;
  }
  v10 = *((_QWORD *)this + 3);
  v11 = 10LL * (v2 - 2);
  if ( *(_DWORD *)(v10 + 80LL * (v2 - 2) + 72) == 18 )
  {
    if ( *(_DWORD *)(v10 + 80LL * (v2 - 1) + 72) == 18 )
    {
      v12 = *(float *)(v10 + 80LL * (v2 - 2));
      v13 = *(float *)(v10 + 80LL * (v2 - 1));
      *(_DWORD *)(v10 + 80LL * (v2 - 2) + 72) = 104;
      *(float *)(v10 + 80LL * (v2 - 2)) = v12;
      *(_DWORD *)(v10 + 80LL * (v2 - 2) + 4) = 0;
      *(_DWORD *)(v10 + 80LL * (v2 - 2) + 8) = 0;
      *(float *)(v10 + 80LL * (v2 - 2) + 12) = v13;
      *(float *)(v10 + 80LL * (v2 - 2) + 16) = 0.0 - (float)(v12 * 0.0);
      *(float *)(v10 + 80LL * (v2 - 2) + 20) = 0.0 - (float)(v13 * 0.0);
    }
    else
    {
      if ( *(_DWORD *)(v10 + 80LL * (v2 - 1) + 72) != 35 )
        goto LABEL_7;
      v14 = *(float *)(v10 + 80LL * (v2 - 2));
      v15 = (__m128)(unsigned int)FLOAT_1_0;
      v15.m128_f32[0] = 1.0 - v14;
      DWORD2(v25) = 0;
      *(_QWORD *)&v25 = LODWORD(v14);
      *((float *)&v25 + 3) = v14;
      v16 = v15;
      v15.m128_f32[0] = v15.m128_f32[0] * *(float *)(v10 + 80LL * (v2 - 1) + 4);
      v16.m128_f32[0] = v16.m128_f32[0] * *(float *)(v10 + 80LL * (v2 - 1));
      *(_DWORD *)(v10 + 80LL * (v2 - 2) + 72) = 104;
      *(_OWORD *)(v10 + 80LL * (v2 - 2)) = v25;
      *(_QWORD *)(v10 + 80LL * (v2 - 2) + 16) = _mm_unpacklo_ps(v16, v15).m128_u64[0];
    }
    *(_BYTE *)(v10 + 80LL * (v2 - 2) + 76) = 1;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v10 + 80LL * (v2 - 2) + 72) == 35 && *(_DWORD *)(v10 + 80LL * (v2 - 1) + 72) == 35 )
  {
    v17 = *(float *)(v10 + 80LL * (v2 - 2));
    v18 = *(float *)(v10 + 80LL * (v2 - 2) + 4);
    v19 = *(float *)(v10 + 80LL * (v2 - 1));
    v20 = *(float *)(v10 + 80LL * (v2 - 1) + 4);
    v21 = v17 * v19;
    v22 = v18 * v20;
    goto LABEL_29;
  }
LABEL_7:
  if ( !v3 )
  {
    v23 = 5916;
    goto LABEL_12;
  }
LABEL_8:
  *((_DWORD *)v5 + 4) += 1 - a2;
  return 0;
}
