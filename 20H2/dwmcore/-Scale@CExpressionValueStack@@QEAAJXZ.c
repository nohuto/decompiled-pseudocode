/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801FEA90
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180068048 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x180219428 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  float *v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  float v12; // xmm6_4
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  float v15; // xmm0_4
  float v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  unsigned int v27; // [rsp+20h] [rbp-88h]
  __int128 v28; // [rsp+30h] [rbp-78h]
  _BYTE v29[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 1;
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v6 = v5;
    v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    v8 = v5;
    if ( *((_DWORD *)v7 + 18) != 18 )
    {
      if ( *(_DWORD *)(v5 + 72) != 18 )
      {
        v27 = 2678;
        goto LABEL_3;
      }
      v6 = *((_QWORD *)this + 3) + 80 * v4;
      v7 = (float *)v5;
    }
    v9 = *(_DWORD *)(v6 + 72);
    switch ( v9 )
    {
      case 18:
        v25 = *v7 * *(float *)v6;
        *(_DWORD *)(v5 + 72) = 18;
        *(float *)v5 = v25;
        break;
      case 35:
        v23 = *v7 * *(float *)(v6 + 4);
        v24 = *v7 * *(float *)v6;
        *(_DWORD *)(v5 + 72) = 35;
        *(float *)(v5 + 4) = v23;
        *(float *)v5 = v24;
        break;
      case 52:
        v19 = *v7;
        v20 = *(float *)v6;
        v21 = *v7 * *(float *)(v6 + 4);
        v22 = *v7 * *(float *)(v6 + 8);
        *(_DWORD *)(v5 + 72) = 52;
        *(float *)v5 = v20 * v19;
        *(float *)(v5 + 4) = v21;
        *(float *)(v5 + 8) = v22;
        break;
      case 69:
        v16 = *v7 * *(float *)(v6 + 4);
        *(float *)&v28 = *v7 * *(float *)v6;
        *(float *)&v17 = *v7 * *(float *)(v6 + 8);
        *(float *)&v18 = *v7 * *(float *)(v6 + 12);
        *(_DWORD *)(v5 + 72) = 69;
        *((_QWORD *)&v28 + 1) = __PAIR64__(v18, v17);
        *((float *)&v28 + 1) = v16;
        *(_OWORD *)v5 = v28;
        break;
      case 104:
        v12 = *(float *)v6;
        v13 = _mm_shuffle_ps((__m128)*(unsigned int *)v7, (__m128)*(unsigned int *)v7, 0);
        v14 = _mm_mul_ps(*(__m128 *)(v6 + 4), v13);
        v15 = v13.m128_f32[0] * *(float *)(v6 + 20);
        *(_DWORD *)(v5 + 72) = 104;
        *(float *)v5 = v12 * v13.m128_f32[0];
        *(__m128 *)(v5 + 4) = v14;
        *(float *)(v5 + 20) = v15;
        break;
      case 265:
        v10 = (_OWORD *)D2DMatrix::operator*(v6, v29);
        *(_DWORD *)(v8 + 72) = 265;
        *(_OWORD *)v8 = *v10;
        *(_OWORD *)(v8 + 16) = v10[1];
        *(_OWORD *)(v8 + 32) = v10[2];
        v11 = v10[3];
        *(_BYTE *)(v8 + 76) = 1;
        *(_OWORD *)(v8 + 48) = v11;
LABEL_22:
        --*((_DWORD *)this + 4);
        return 0;
      default:
        v27 = 2741;
        goto LABEL_3;
    }
    *(_BYTE *)(v5 + 76) = 1;
    goto LABEL_22;
  }
  v27 = 2644;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v27,
    0LL);
  return v3;
}
