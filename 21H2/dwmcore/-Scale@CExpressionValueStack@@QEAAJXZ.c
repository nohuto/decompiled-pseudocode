/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180200E58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18005C4A4 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x18021C0D8 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  float *v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rdi
  CExpressionValue *v7; // rax
  float *v8; // rbx
  __int64 v9; // rcx
  float *v10; // r14
  float *v11; // r15
  CExpressionValue *v12; // rax
  float *v13; // rsi
  float *v14; // rax
  int v15; // eax
  _OWORD *v16; // rax
  float v17; // xmm6_4
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  unsigned int v32; // [rsp+20h] [rbp-A8h]
  __int128 v33; // [rsp+30h] [rbp-98h]
  _BYTE v34[80]; // [rsp+40h] [rbp-88h] BYREF

  v2 = (float *)*((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)((_DWORD)v2 - 2);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = (unsigned int)((_DWORD)v2 - 1);
    v10 = v8;
    v11 = v8;
    if ( (unsigned int)v9 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
    }
    v13 = v8;
    v2 = v8;
    if ( *((_DWORD *)v6 + 18) != 18 )
    {
      if ( *((_DWORD *)v8 + 18) != 18 )
      {
        v32 = 2688;
        goto LABEL_3;
      }
      v14 = v8;
      v8 = v6;
      v6 = v14;
    }
    v15 = *((_DWORD *)v8 + 18);
    switch ( v15 )
    {
      case 18:
        v30 = *v6 * *v8;
        *((_DWORD *)v13 + 18) = 18;
        *v13 = v30;
        break;
      case 35:
        v28 = *v6 * v8[1];
        v29 = *v6 * *v8;
        *((_DWORD *)v13 + 18) = 35;
        v13[1] = v28;
        *v10 = v29;
        break;
      case 52:
        v24 = *v6;
        v25 = *v8;
        v26 = *v6 * v8[1];
        v27 = *v6 * v8[2];
        *((_DWORD *)v13 + 18) = 52;
        *v11 = v25 * v24;
        v2[1] = v26;
        v2[2] = v27;
        break;
      case 69:
        v21 = *v6 * v8[1];
        *(float *)&v33 = *v6 * *v8;
        *(float *)&v22 = *v6 * v8[2];
        *(float *)&v23 = *v6 * v8[3];
        *((_DWORD *)v13 + 18) = 69;
        *((_QWORD *)&v33 + 1) = __PAIR64__(v23, v22);
        *((float *)&v33 + 1) = v21;
        *(_OWORD *)v13 = v33;
        break;
      case 104:
        v17 = *v8;
        v18 = _mm_shuffle_ps((__m128)*(unsigned int *)v6, (__m128)*(unsigned int *)v6, 0);
        v19 = _mm_mul_ps(*(__m128 *)(v8 + 1), v18);
        v20 = v18.m128_f32[0] * v8[5];
        *((_DWORD *)v13 + 18) = 104;
        *v11 = v17 * v18.m128_f32[0];
        *(__m128 *)(v2 + 1) = v19;
        v2[5] = v20;
        break;
      case 265:
        v16 = (_OWORD *)D2DMatrix::operator*(v8, v34);
        *((_DWORD *)v13 + 18) = 265;
        *(_OWORD *)v13 = *v16;
        *((_OWORD *)v13 + 1) = v16[1];
        *((_OWORD *)v13 + 2) = v16[2];
        *((_OWORD *)v13 + 3) = v16[3];
        break;
      default:
        v32 = 2751;
        goto LABEL_3;
    }
    *((_BYTE *)v13 + 76) = 1;
    --*((_DWORD *)this + 4);
    return 0;
  }
  v32 = 2654;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v32,
    0LL);
  return v3;
}
