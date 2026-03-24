/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18001B698
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(unsigned __int64 this)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // edx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  CExpressionValue *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  _QWORD *v9; // r14
  CExpressionValue *v10; // rax
  int v11; // eax
  unsigned int v12; // r15d
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __m128 v15; // xmm6
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v24; // [rsp+28h] [rbp-59h]
  __int128 v25; // [rsp+38h] [rbp-49h]
  float v26; // [rsp+40h] [rbp-41h]
  _BYTE v27[96]; // [rsp+68h] [rbp-19h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 3 )
  {
    v24 = 2533;
LABEL_26:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v24,
      0LL);
    return v12;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 3);
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (_QWORD *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = &CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v7 = (unsigned int)(this - 2);
  if ( (unsigned int)v7 < v2 )
  {
    v9 = (_QWORD *)(*(_QWORD *)(v1 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v9 = &CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
  }
  v11 = *((_DWORD *)v6 + 18);
  if ( v11 != *((_DWORD *)v9 + 18) || (v12 = 0, v11 != *((_DWORD *)v4 + 18)) )
  {
    v24 = 2558;
    goto LABEL_26;
  }
  switch ( v11 )
  {
    case 18:
      v21 = *(float *)v4;
      v22 = fmaxf(*(float *)v6, *(float *)v9);
      *((_DWORD *)v6 + 18) = 18;
      v20 = fminf(v22, v21);
      goto LABEL_23;
    case 35:
      v19 = fminf(fmaxf(*((float *)v6 + 1), *((float *)v9 + 1)), *((float *)v4 + 1));
      v20 = fminf(fmaxf(*(float *)v6, *(float *)v9), *(float *)v4);
      *((_DWORD *)v6 + 18) = 35;
      *((float *)v6 + 1) = v19;
LABEL_23:
      *(float *)v6 = v20;
      break;
    case 52:
      v16 = fminf(fmaxf(COERCE_FLOAT(HIDWORD(*v6)), COERCE_FLOAT(HIDWORD(*v9))), COERCE_FLOAT(HIDWORD(*v4)));
      v17 = fminf(fmaxf(COERCE_FLOAT(*v6), COERCE_FLOAT(*v9)), COERCE_FLOAT(*v4));
      v18 = fmaxf(*((float *)v6 + 2), *((float *)v9 + 2));
      v26 = *((float *)v4 + 2);
      *((_DWORD *)v6 + 18) = 52;
      *(float *)v6 = v17;
      *((float *)v6 + 1) = v16;
      *((float *)v6 + 2) = fminf(v18, v26);
      break;
    case 69:
      v13 = (__m128)_mm_loadu_si128((const __m128i *)v9);
      v14 = (__m128)_mm_loadu_si128((const __m128i *)v4);
      *((_DWORD *)v6 + 18) = 69;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)v6);
      *(_QWORD *)&v25 = __PAIR64__(
                          COERCE_UNSIGNED_INT(
                            fminf(
                              fmaxf(_mm_shuffle_ps(v15, v15, 85).m128_f32[0], _mm_shuffle_ps(v13, v13, 85).m128_f32[0]),
                              _mm_shuffle_ps(v14, v14, 85).m128_f32[0])),
                          COERCE_UNSIGNED_INT(fminf(fmaxf(v15.m128_f32[0], v13.m128_f32[0]), v14.m128_f32[0])));
      *((_QWORD *)&v25 + 1) = __PAIR64__(
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v15, v15, 255).m128_f32[0],
                                      _mm_shuffle_ps(v13, v13, 255).m128_f32[0]),
                                    _mm_shuffle_ps(v14, v14, 255).m128_f32[0])),
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v15, v15, 170).m128_f32[0],
                                      _mm_shuffle_ps(v13, v13, 170).m128_f32[0]),
                                    _mm_shuffle_ps(v14, v14, 170).m128_f32[0])));
      *(_OWORD *)v6 = v25;
      break;
    default:
      v24 = 2621;
      goto LABEL_26;
  }
  *((_BYTE *)v6 + 76) = 1;
  *(_DWORD *)(v1 + 16) -= 2;
  return v12;
}
