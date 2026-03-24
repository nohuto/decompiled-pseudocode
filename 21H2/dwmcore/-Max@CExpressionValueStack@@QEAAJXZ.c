/*
 * XREFs of ?Max@CExpressionValueStack@@QEAAJXZ @ 0x1800DD0F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Max(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rdi
  CExpressionValue *v7; // rax
  _QWORD *v8; // rbx
  CExpressionValue *v9; // rax
  int v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+48h] [rbp-9h]
  _BYTE v22[80]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (_QWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    }
    v10 = *((_DWORD *)v8 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v6 + 18) )
    {
      switch ( v10 )
      {
        case 18:
          v18 = fmaxf(*(float *)v8, *v6);
          *((_DWORD *)v8 + 18) = 18;
          *(float *)v8 = v18;
          break;
        case 35:
          v16 = fmaxf(*(float *)v8, *v6);
          v17 = fmaxf(*((float *)v8 + 1), v6[1]);
          *((_DWORD *)v8 + 18) = 35;
          *(float *)v8 = v16;
          *((float *)v8 + 1) = v17;
          break;
        case 52:
          v13 = fmaxf(COERCE_FLOAT(*v8), COERCE_FLOAT(*(_QWORD *)v6));
          v14 = fmaxf(COERCE_FLOAT(HIDWORD(*v8)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v6)));
          v15 = fmaxf(*((float *)v8 + 2), v6[2]);
          *((_DWORD *)v8 + 18) = 52;
          *(float *)v8 = v13;
          *((float *)v8 + 1) = v14;
          *((float *)v8 + 2) = v15;
          break;
        case 69:
          v11 = (__m128)_mm_loadu_si128((const __m128i *)v6);
          *((_DWORD *)v8 + 18) = 69;
          v12 = (__m128)_mm_loadu_si128((const __m128i *)v8);
          *(_QWORD *)&v21 = __PAIR64__(
                              COERCE_UNSIGNED_INT(
                                fmaxf(
                                  _mm_shuffle_ps(v12, v12, 85).m128_f32[0],
                                  _mm_shuffle_ps(v11, v11, 85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fmaxf(v12.m128_f32[0], v11.m128_f32[0])));
          *((_QWORD *)&v21 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fmaxf(
                                        _mm_shuffle_ps(v12, v12, 255).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fmaxf(
                                        _mm_shuffle_ps(v12, v12, 170).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 170).m128_f32[0])));
          *(_OWORD *)v8 = v21;
          break;
        default:
          v20 = 2499;
          goto LABEL_3;
      }
      *((_BYTE *)v8 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v3;
    }
    v20 = 2443;
  }
  else
  {
    v20 = 2420;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v20,
    0LL);
  return v3;
}
