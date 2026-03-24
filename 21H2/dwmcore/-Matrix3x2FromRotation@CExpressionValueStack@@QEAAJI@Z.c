/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x1801FDB9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this, unsigned int a2)
{
  char v3; // r12
  __int64 v4; // rcx
  unsigned int v6; // ebx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // rbx
  CExpressionValue *v14; // rax
  _DWORD *v15; // r14
  CExpressionValue *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  unsigned int v20; // [rsp+20h] [rbp-49h]
  _BYTE v21[80]; // [rsp+30h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+17h] BYREF

  v3 = 0;
  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 >= a2 )
  {
    if ( a2 == 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
      {
        v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
      }
      else
      {
        v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
        v8 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      }
      if ( v8[18] == 18 )
      {
        v3 = 1;
        D2D1MakeRotateMatrix(
          *(float *)v8 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
          &matrix);
        v9 = *(_OWORD *)&matrix.m11;
        v8[18] = 104;
        v10 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v8 = v9;
        *((_BYTE *)v8 + 76) = 1;
        *((_QWORD *)v8 + 2) = v10;
      }
    }
    else if ( a2 == 2 )
    {
      v11 = *((_DWORD *)this + 12);
      v12 = (unsigned int)(v4 - 2);
      v13 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v12 < v11 )
      {
        v15 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v12);
      }
      else
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
        LODWORD(v4) = *((_DWORD *)this + 4);
        v15 = &CExpressionValueStack::s_emptyValue;
        v11 = *((_DWORD *)this + 12);
      }
      v4 = (unsigned int)(v4 - 1);
      if ( (unsigned int)v4 < v11 )
      {
        v13 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
      }
      else
      {
        v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      }
      if ( v15[18] == 18 && v13[18] == 35 )
      {
        v3 = 1;
        D2D1MakeRotateMatrix(
          *(float *)v15 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)*v13, (__m128)v13[1]),
          &matrix);
        v17 = *(_OWORD *)&matrix.m11;
        v15[18] = 104;
        v18 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v15 = v17;
        *((_BYTE *)v15 + 76) = 1;
        *((_QWORD *)v15 + 2) = v18;
      }
    }
    v6 = 0;
    if ( v3 )
    {
      *((_DWORD *)this + 4) += 1 - a2;
      return v6;
    }
    v20 = 6097;
  }
  else
  {
    v20 = 6055;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v4,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v20,
    0LL);
  return v6;
}
