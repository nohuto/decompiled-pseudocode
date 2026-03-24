/*
 * XREFs of ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x180200404
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Quaternion(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  int *v5; // rdi
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int *v10; // r15
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  int *v13; // r14
  CExpressionValue *v14; // rax
  unsigned int v15; // ebp
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm2_4
  unsigned int v20; // [rsp+20h] [rbp-78h]
  _BYTE v21[80]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 4 )
  {
    v20 = 5465;
LABEL_21:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v20,
      0LL);
    return v15;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 4);
  v5 = (int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 3);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (int *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = (int *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v11 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v11 < v3 )
  {
    v13 = (int *)(*((_QWORD *)this + 3) + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v13 = (int *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (int *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
  }
  if ( v7[18] != 18 || v10[18] != 18 || v13[18] != 18 || (v15 = 0, v5[18] != 18) )
  {
    v20 = 5483;
    goto LABEL_21;
  }
  v16 = *v10;
  v17 = *v13;
  v18 = *v5;
  v7[18] = 71;
  v7[1] = v16;
  v7[2] = v17;
  v7[3] = v18;
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 3;
  return v15;
}
