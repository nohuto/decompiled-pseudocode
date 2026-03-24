/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x1801FE074
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A2E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18021D0E8 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  CExpressionValue *v8; // rax
  unsigned int v9; // r14d
  int v10; // eax
  float v11; // xmm2_4
  unsigned int v13; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+38h] [rbp-9h] BYREF
  int v15; // [rsp+40h] [rbp-1h]
  _OWORD v16[5]; // [rsp+48h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v13 = 6134;
LABEL_13:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13,
      0LL);
    return v9;
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
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
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
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
  }
  if ( v7[18] != 52 || (v9 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v13 = 6148;
    goto LABEL_13;
  }
  v10 = v7[2];
  v11 = *v5;
  v14 = *(_QWORD *)v7;
  v15 = v10;
  D2DMatrixRotationAxis((struct D2DMatrix *)v16, (const struct D2DVector3 *)&v14, v11);
  v7[18] = 265;
  *(_OWORD *)v7 = v16[0];
  *((_OWORD *)v7 + 1) = v16[1];
  *((_OWORD *)v7 + 2) = v16[2];
  *((_OWORD *)v7 + 3) = v16[3];
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v9;
}
