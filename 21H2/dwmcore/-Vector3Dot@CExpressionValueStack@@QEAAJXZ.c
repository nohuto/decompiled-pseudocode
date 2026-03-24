/*
 * XREFs of ?Vector3Dot@CExpressionValueStack@@QEAAJXZ @ 0x1802022B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Dot(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rbx
  CExpressionValue *v7; // rax
  float *v8; // rsi
  CExpressionValue *v9; // rax
  float v10; // xmm2_4
  float v11; // eax
  float v12; // xmm0_4
  unsigned int v14; // [rsp+28h] [rbp-29h]
  float v15; // [rsp+50h] [rbp-1h]
  _BYTE v16[80]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    if ( *((_DWORD *)v8 + 18) == 52 )
    {
      if ( *((_DWORD *)v6 + 18) == 52 )
      {
        v10 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v8)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v6));
        v15 = v8[2];
        v11 = v6[2];
        v12 = COERCE_FLOAT(*(_QWORD *)v6) * COERCE_FLOAT(*(_QWORD *)v8);
        *((_DWORD *)v8 + 18) = 18;
        *((_BYTE *)v8 + 76) = 1;
        *v8 = (float)(v10 + v12) + (float)(v11 * v15);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v14 = 7500;
    }
    else
    {
      v14 = 7499;
    }
  }
  else
  {
    v14 = 7493;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v14,
    0LL);
  return v3;
}
