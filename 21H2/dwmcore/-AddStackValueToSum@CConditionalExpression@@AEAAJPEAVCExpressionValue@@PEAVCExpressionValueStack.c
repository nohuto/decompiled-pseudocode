/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801BD55C
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BD8E0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800ABEB8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18021C5B4 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  __int64 v4; // rax
  CExpressionValue *v6; // rax
  int *v7; // rdi
  int v8; // eax
  _OWORD *v9; // rax
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  unsigned int v16; // ebx
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  unsigned int v26; // [rsp+20h] [rbp-98h]
  __int128 v27; // [rsp+30h] [rbp-88h]
  _BYTE v28[80]; // [rsp+40h] [rbp-78h] BYREF

  v4 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
  if ( (unsigned int)v4 < *((_DWORD *)a3 + 12) )
  {
    v7 = (int *)(*((_QWORD *)a3 + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
    v7 = (int *)&CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
  }
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, (const struct CExpressionValue *)v7);
LABEL_24:
    --*((_DWORD *)a3 + 4);
    return 0;
  }
  v8 = v7[18];
  switch ( v8 )
  {
    case 18:
      v24 = *(float *)v7 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v24;
      goto LABEL_23;
    case 35:
      v22 = *(float *)v7 + *(float *)a2;
      v23 = *((float *)v7 + 1) + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v22;
      *((float *)a2 + 1) = v23;
      goto LABEL_23;
    case 52:
      v19 = *(float *)v7;
      v20 = *((float *)a2 + 1) + *((float *)v7 + 1);
      v21 = *((float *)a2 + 2) + *((float *)v7 + 2);
      *((_DWORD *)a2 + 18) = 52;
      *(float *)a2 = v19 + *(float *)a2;
      *((float *)a2 + 1) = v20;
      *((float *)a2 + 2) = v21;
      goto LABEL_23;
    case 69:
      *(float *)&v27 = *(float *)v7 + *(float *)a2;
      *(float *)&v17 = *((float *)a2 + 2) + *((float *)v7 + 2);
      *((float *)&v27 + 1) = *((float *)a2 + 1) + *((float *)v7 + 1);
      *(float *)&v18 = *((float *)a2 + 3) + *((float *)v7 + 3);
      *((_DWORD *)a2 + 18) = 69;
      *((_QWORD *)&v27 + 1) = __PAIR64__(v18, v17);
      *(_OWORD *)a2 = v27;
      goto LABEL_23;
  }
  if ( v8 <= 69 )
  {
LABEL_18:
    v26 = 468;
    goto LABEL_17;
  }
  if ( v8 > 71 )
  {
    if ( v8 == 104 )
    {
      v10 = *(float *)a2 + *(float *)v7;
      v11 = *((float *)a2 + 1) + *((float *)v7 + 1);
      v12 = *((float *)a2 + 2) + *((float *)v7 + 2);
      v13 = *((float *)a2 + 3) + *((float *)v7 + 3);
      v14 = *((float *)a2 + 4) + *((float *)v7 + 4);
      v15 = *((float *)a2 + 5) + *((float *)v7 + 5);
      *((_DWORD *)a2 + 18) = 104;
      *(float *)a2 = v10;
      *((float *)a2 + 1) = v11;
      *((float *)a2 + 2) = v12;
      *((float *)a2 + 3) = v13;
      *((float *)a2 + 4) = v14;
      *((float *)a2 + 5) = v15;
      goto LABEL_23;
    }
    if ( v8 == 265 )
    {
      v9 = (_OWORD *)D2DMatrix::operator+(a2, v28, v7);
      *((_DWORD *)a2 + 18) = 265;
      *(_OWORD *)a2 = *v9;
      *((_OWORD *)a2 + 1) = v9[1];
      *((_OWORD *)a2 + 2) = v9[2];
      *((_OWORD *)a2 + 3) = v9[3];
LABEL_23:
      *((_BYTE *)a2 + 76) = 1;
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  v26 = 449;
LABEL_17:
  v16 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v26, 0LL);
  return v16;
}
