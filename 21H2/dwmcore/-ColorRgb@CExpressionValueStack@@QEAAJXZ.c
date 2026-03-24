/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x18001C0B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(unsigned __int64 this)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  float *v6; // rsi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  float *v9; // r14
  __int64 v10; // rax
  CExpressionValue *v11; // rax
  float *v12; // rbp
  CExpressionValue *v13; // rax
  unsigned int v14; // r15d
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  unsigned int v20; // [rsp+20h] [rbp-78h]
  _BYTE v21[80]; // [rsp+30h] [rbp-68h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 4 )
  {
    v20 = 5297;
LABEL_21:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v20,
      0LL);
    return v14;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 4);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v7 = (unsigned int)(this - 3);
  if ( (unsigned int)v7 < v2 )
  {
    v9 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v9 = (float *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v10 = (unsigned int)(this - 2);
  if ( (unsigned int)v10 < v2 )
  {
    v12 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v10);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v12 = (float *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
  }
  if ( *((_DWORD *)v6 + 18) != 18
    || *((_DWORD *)v9 + 18) != 18
    || *((_DWORD *)v12 + 18) != 18
    || (v14 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v20 = 5315;
    goto LABEL_21;
  }
  v15 = fminf(*v9, 255.0);
  v16 = fminf(*v12, 255.0);
  v17 = *v6;
  v18 = fminf(*v4, 255.0);
  *((_DWORD *)v6 + 18) = 70;
  *v6 = fmaxf(v15, 0.0) / 255.0;
  v6[1] = fmaxf(v16, 0.0) / 255.0;
  v6[2] = fmaxf(v18, 0.0) / 255.0;
  v6[3] = fmaxf(fminf(v17, 255.0), 0.0) / 255.0;
  *((_BYTE *)v6 + 76) = 1;
  *(_DWORD *)(v1 + 16) -= 3;
  return v14;
}
