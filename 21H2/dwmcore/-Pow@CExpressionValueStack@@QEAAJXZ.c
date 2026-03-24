/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801FFEE0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     powf @ 0x1800E81C8 (powf.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  CExpressionValue *v8; // rax
  int v9; // eax
  unsigned int v10; // ebp
  float v11; // xmm6_4
  unsigned int v13; // [rsp+20h] [rbp-78h]
  _BYTE v14[96]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v13 = 4741;
LABEL_16:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13,
      0LL);
    return v10;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 2);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
  }
  v9 = v7[18];
  v10 = 0;
  if ( v9 != *((_DWORD *)v5 + 18) )
  {
    v13 = 4764;
    goto LABEL_16;
  }
  if ( v9 != 18 )
  {
    v13 = 4798;
    goto LABEL_16;
  }
  v11 = powf(*(float *)v7, *v5);
  if ( _isnan(v11) )
  {
    v13 = 4784;
    goto LABEL_16;
  }
  *(float *)v7 = v11;
  v7[18] = 18;
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v10;
}
