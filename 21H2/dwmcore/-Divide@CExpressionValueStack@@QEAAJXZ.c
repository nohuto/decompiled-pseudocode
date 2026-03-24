/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x18005C860
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18021D998 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18021DB48 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edx
  __int64 v5; // rax
  void *v6; // rdi
  CExpressionValue *v7; // rax
  void *v8; // rbx
  __int64 v9; // rcx
  CExpressionValue *v10; // rax
  int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __int32 v18; // eax
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  unsigned int v30; // [rsp+28h] [rbp-39h]
  __m128i v31; // [rsp+38h] [rbp-29h] BYREF
  __m128i v32; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v33[16]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v34[80]; // [rsp+68h] [rbp+7h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = v2 - 2;
    v6 = &CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (void *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
      v2 = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = v2 - 1;
    if ( (unsigned int)v9 < v4 )
    {
      v6 = (void *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
    }
    v11 = *((_DWORD *)v8 + 18);
    v3 = 0;
    if ( v11 != *((_DWORD *)v6 + 18) )
    {
      v30 = 1258;
      goto LABEL_3;
    }
    if ( v11 == 18 )
    {
      if ( *(float *)v6 == 0.0 )
      {
        v30 = 1271;
        goto LABEL_3;
      }
      v28 = *(float *)v8 / *(float *)v6;
      *((_DWORD *)v8 + 18) = 18;
    }
    else
    {
      if ( v11 != 35 )
      {
        if ( v11 == 52 )
        {
          v18 = *((_DWORD *)v8 + 2);
          v31.m128i_i64[0] = *(_QWORD *)v8;
          v32.m128i_i64[0] = *(_QWORD *)v6;
          v19 = *(float *)v32.m128i_i32;
          v31.m128i_i32[2] = v18;
          v32.m128i_i32[2] = *((_DWORD *)v6 + 2);
          if ( *(float *)v32.m128i_i32 == 0.0
            || *(float *)&v32.m128i_i32[1] == 0.0
            || (v20 = *(float *)&v32.m128i_i32[2], *(float *)&v32.m128i_i32[2] == 0.0) )
          {
            v30 = 1311;
            goto LABEL_3;
          }
          v21 = *(float *)v31.m128i_i32;
          v22 = *(float *)&v31.m128i_i32[1] / *(float *)&v32.m128i_i32[1];
          *((_DWORD *)v8 + 18) = 52;
          v23 = *(float *)&v31.m128i_i32[2] / v20;
          *(float *)v8 = v21 / v19;
          *((float *)v8 + 1) = v22;
          *((float *)v8 + 2) = v23;
        }
        else
        {
          if ( v11 == 69 )
          {
            v13 = _mm_loadu_si128((const __m128i *)v6);
            v31 = *(__m128i *)v8;
            v32 = v13;
            if ( *(float *)v13.m128i_i32 == 0.0
              || (v14 = *(float *)&v32.m128i_i32[1], *(float *)&v32.m128i_i32[1] == 0.0)
              || (v15 = *(float *)&v32.m128i_i32[2], *(float *)&v32.m128i_i32[2] == 0.0)
              || (v16 = *(float *)&v32.m128i_i32[3], *(float *)&v32.m128i_i32[3] == 0.0) )
            {
              v30 = 1334;
              goto LABEL_3;
            }
            v17 = *(float *)v31.m128i_i32 / *(float *)v13.m128i_i32;
            *((_DWORD *)v8 + 18) = 69;
            *(float *)v32.m128i_i32 = v17;
            *(float *)&v32.m128i_i32[1] = *(float *)&v31.m128i_i32[1] / v14;
            *(float *)&v32.m128i_i32[2] = *(float *)&v31.m128i_i32[2] / v15;
            *(float *)&v32.m128i_i32[3] = *(float *)&v31.m128i_i32[3] / v16;
            v12 = v32;
          }
          else
          {
            if ( v11 != 71 )
            {
              v30 = 1386;
              goto LABEL_3;
            }
            v32 = *(__m128i *)v8;
            v31 = _mm_loadu_si128((const __m128i *)v6);
            if ( *(float *)v31.m128i_i32 == 0.0
              || *(float *)&v31.m128i_i32[1] == 0.0
              || *(float *)&v31.m128i_i32[2] == 0.0
              || *(float *)&v31.m128i_i32[3] == 0.0 )
            {
              v30 = 1358;
              goto LABEL_3;
            }
            D3DXQuaternionInverse((struct D2DQuaternion *)v33, (const struct D2DQuaternion *)&v31);
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v31,
              (const struct D2DQuaternion *)v33,
              (const struct D2DQuaternion *)&v32);
            v12 = v31;
            *((_DWORD *)v8 + 18) = 71;
          }
          *(__m128i *)v8 = v12;
        }
LABEL_44:
        *((_BYTE *)v8 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v24 = *(float *)v6;
      v25 = *(float *)v8;
      v26 = *((float *)v8 + 1);
      v27 = *((float *)v6 + 1);
      if ( *(float *)v6 == 0.0 || v27 == 0.0 )
      {
        v30 = 1290;
        goto LABEL_3;
      }
      *((_DWORD *)v8 + 18) = 35;
      v28 = v25 / v24;
      *((float *)v8 + 1) = v26 / v27;
    }
    *(float *)v8 = v28;
    goto LABEL_44;
  }
  v30 = 1235;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v30,
    0LL);
  return v3;
}
