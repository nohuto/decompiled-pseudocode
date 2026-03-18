/*
 * XREFs of ?Vector2Transform@CExpressionValueStack@@QEAAJXZ @ 0x180203E30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18021FBEC (-D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2Transform(__int64 this)
{
  unsigned int v1; // edx
  __int64 v2; // r11
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // eax
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  float v11; // xmm4_4
  float v12; // xmm3_4
  __int64 v13; // xmm0_8
  unsigned int v15; // [rsp+28h] [rbp-19h]
  __int128 v16; // [rsp+38h] [rbp-9h] BYREF
  float v17[20]; // [rsp+48h] [rbp+7h]
  __int64 v18; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 < 2 )
  {
    v15 = 7284;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v3;
  }
  v4 = *(_QWORD *)(this + 24);
  v5 = v1 - 1;
  v6 = 10LL * (v1 - 2);
  v7 = 10 * v5;
  if ( *(_DWORD *)(v4 + 8 * v6 + 72) != 35 )
  {
    v15 = 7290;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(v4 + 80 * v5 + 72);
  this = 265LL;
  if ( v8 != 71 && v8 != 104 && v8 != 265 )
  {
    v15 = 7299;
    goto LABEL_3;
  }
  v18 = *(_QWORD *)(v4 + 8 * v6);
  if ( v8 == 104 )
  {
    v9 = *(__m128 *)(v4 + 8 * v7);
    *(_QWORD *)v17 = *(_QWORD *)(v4 + 8 * v7 + 16);
    *(float *)&v19 = (float)((float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] * *((float *)&v18 + 1))
                           + (float)(v9.m128_f32[0] * *(float *)&v18))
                   + v17[0];
    *((float *)&v19 + 1) = (float)((float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] * *((float *)&v18 + 1))
                                 + (float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] * *(float *)&v18))
                         + v17[1];
  }
  else if ( v8 == 265 )
  {
    v10 = *(__m128 *)(v4 + 8 * v7 + 48);
    v11 = _mm_shuffle_ps(*(__m128 *)(v4 + 8 * v7 + 16), *(__m128 *)(v4 + 8 * v7 + 16), 85).m128_f32[0];
    v12 = _mm_shuffle_ps(*(__m128 *)(v4 + 8 * v7), *(__m128 *)(v4 + 8 * v7), 85).m128_f32[0] * *(float *)&v18;
    *(float *)&v19 = (float)((float)(COERCE_FLOAT(*(_OWORD *)(v4 + 8 * v7 + 16)) * *((float *)&v18 + 1))
                           + (float)(COERCE_FLOAT(*(_OWORD *)(v4 + 8 * v7)) * *(float *)&v18))
                   + v10.m128_f32[0];
    *((float *)&v19 + 1) = (float)((float)(v11 * *((float *)&v18 + 1)) + v12) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  }
  else
  {
    v16 = *(_OWORD *)(v4 + 8 * v7);
    D3DXVec2Transform((struct D2DVector2 *)&v19, (const struct D2DVector2 *)&v18, (const struct D2DQuaternion *)&v16);
  }
  v13 = v19;
  *(_DWORD *)(v4 + 8 * v6 + 72) = 35;
  *(_QWORD *)(v4 + 8 * v6) = v13;
  *(_BYTE *)(v4 + 8 * v6 + 76) = 1;
  --*(_DWORD *)(v2 + 16);
  return 0;
}
