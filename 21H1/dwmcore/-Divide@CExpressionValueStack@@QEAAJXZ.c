/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x18002E404
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18021F518 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18021F6C8 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4
  __m128i v11; // xmm0
  float v12; // xmm0_4
  __m128i v13; // xmm1
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  __int32 v17; // eax
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  unsigned int v27; // [rsp+20h] [rbp-40h]
  __m128i v28; // [rsp+30h] [rbp-30h] BYREF
  __m128i v29; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v27 = 1225;
    goto LABEL_11;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 10LL * (v1 - 2);
  v5 = 0;
  v6 = 10LL * (v1 - 1);
  v7 = *(_DWORD *)(v3 + 8 * v4 + 72);
  if ( v7 != *(_DWORD *)(v3 + 8 * v6 + 72) )
  {
    v27 = 1248;
    goto LABEL_11;
  }
  if ( v7 != 18 )
  {
    if ( v7 == 35 )
    {
      v23 = *(float *)(v3 + 8 * v6);
      v24 = *(float *)(v3 + 8 * v4);
      v25 = *(float *)(v3 + 8 * v4 + 4);
      v26 = *(float *)(v3 + 8 * v6 + 4);
      if ( v23 != 0.0 && v26 != 0.0 )
      {
        *(_DWORD *)(v3 + 8 * v4 + 72) = 35;
        v9 = v24 / v23;
        *(float *)(v3 + 8 * v4 + 4) = v25 / v26;
        goto LABEL_6;
      }
      v27 = 1280;
    }
    else
    {
      if ( v7 != 52 )
      {
        if ( v7 == 69 )
        {
          v13 = _mm_loadu_si128((const __m128i *)(v3 + 8 * v6));
          v29 = *(__m128i *)(v3 + 8 * v4);
          v28 = v13;
          if ( *(float *)v13.m128i_i32 == 0.0
            || (v14 = *(float *)&v28.m128i_i32[1], *(float *)&v28.m128i_i32[1] == 0.0)
            || (v15 = *(float *)&v28.m128i_i32[2], *(float *)&v28.m128i_i32[2] == 0.0)
            || (v16 = *(float *)&v28.m128i_i32[3], *(float *)&v28.m128i_i32[3] == 0.0) )
          {
            v27 = 1324;
            goto LABEL_11;
          }
          v12 = *(float *)v29.m128i_i32 / *(float *)v13.m128i_i32;
          *(_DWORD *)(v3 + 8 * v4 + 72) = 69;
          *(float *)v28.m128i_i32 = v12;
          *(float *)&v28.m128i_i32[1] = *(float *)&v29.m128i_i32[1] / v14;
          *(float *)&v28.m128i_i32[2] = *(float *)&v29.m128i_i32[2] / v15;
          *(float *)&v28.m128i_i32[3] = *(float *)&v29.m128i_i32[3] / v16;
          v11 = v28;
        }
        else
        {
          if ( v7 != 71 )
          {
            v27 = 1376;
            goto LABEL_11;
          }
          v28 = *(__m128i *)(v3 + 8 * v4);
          v29 = _mm_loadu_si128((const __m128i *)(v3 + 8 * v6));
          if ( *(float *)v29.m128i_i32 == 0.0
            || *(float *)&v29.m128i_i32[1] == 0.0
            || *(float *)&v29.m128i_i32[2] == 0.0
            || *(float *)&v29.m128i_i32[3] == 0.0 )
          {
            v27 = 1348;
            goto LABEL_11;
          }
          D3DXQuaternionInverse((struct D2DQuaternion *)v30, (const struct D2DQuaternion *)&v29);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v29,
            (const struct D2DQuaternion *)v30,
            (const struct D2DQuaternion *)&v28);
          v11 = v29;
          *(_DWORD *)(v3 + 8 * v4 + 72) = 71;
        }
        *(__m128i *)(v3 + 8 * v4) = v11;
        goto LABEL_7;
      }
      v17 = *(_DWORD *)(v3 + 8 * v4 + 8);
      v29.m128i_i64[0] = *(_QWORD *)(v3 + 8 * v4);
      v28.m128i_i64[0] = *(_QWORD *)(v3 + 8 * v6);
      v18 = *(float *)v28.m128i_i32;
      v29.m128i_i32[2] = v17;
      v28.m128i_i32[2] = *(_DWORD *)(v3 + 8 * v6 + 8);
      if ( *(float *)v28.m128i_i32 != 0.0 && *(float *)&v28.m128i_i32[1] != 0.0 )
      {
        v19 = *(float *)&v28.m128i_i32[2];
        if ( *(float *)&v28.m128i_i32[2] != 0.0 )
        {
          v20 = *(float *)v29.m128i_i32;
          v21 = *(float *)&v29.m128i_i32[1] / *(float *)&v28.m128i_i32[1];
          *(_DWORD *)(v3 + 8 * v4 + 72) = 52;
          v22 = *(float *)&v29.m128i_i32[2] / v19;
          *(float *)(v3 + 8 * v4) = v20 / v18;
          *(float *)(v3 + 8 * v4 + 4) = v21;
          *(float *)(v3 + 8 * v4 + 8) = v22;
          goto LABEL_7;
        }
      }
      v27 = 1301;
    }
LABEL_11:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v27,
      0LL);
    return v5;
  }
  v8 = *(float *)(v3 + 8 * v6);
  if ( v8 == 0.0 )
  {
    v27 = 1261;
    goto LABEL_11;
  }
  v9 = *(float *)(v3 + 8 * v4) / v8;
  *(_DWORD *)(v3 + 8 * v4 + 72) = 18;
LABEL_6:
  *(float *)(v3 + 8 * v4) = v9;
LABEL_7:
  *(_BYTE *)(v3 + 8 * v4 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v5;
}
