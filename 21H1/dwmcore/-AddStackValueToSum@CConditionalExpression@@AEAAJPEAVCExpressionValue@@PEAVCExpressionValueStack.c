/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801C139C
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801C16C0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800993C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18021E134 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  int v7; // eax
  _OWORD *v8; // rax
  __int128 v9; // xmm1
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
  unsigned int v26; // [rsp+20h] [rbp-88h]
  __int128 v27; // [rsp+30h] [rbp-78h]
  _BYTE v28[64]; // [rsp+40h] [rbp-68h] BYREF

  v4 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
  v6 = *((_QWORD *)a3 + 3) + 80 * v4;
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, (const struct CExpressionValue *)(*((_QWORD *)a3 + 3) + 80 * v4));
LABEL_21:
    --*((_DWORD *)a3 + 4);
    return 0;
  }
  v7 = *(_DWORD *)(v6 + 72);
  switch ( v7 )
  {
    case 18:
      v24 = *(float *)v6 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v24;
      goto LABEL_20;
    case 35:
      v22 = *(float *)a2 + *(float *)v6;
      v23 = *(float *)(v6 + 4) + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v22;
      *((float *)a2 + 1) = v23;
      goto LABEL_20;
    case 52:
      v19 = *(float *)v6;
      v20 = *((float *)a2 + 1) + *(float *)(v6 + 4);
      v21 = *((float *)a2 + 2) + *(float *)(v6 + 8);
      *((_DWORD *)a2 + 18) = 52;
      *(float *)a2 = v19 + *(float *)a2;
      *((float *)a2 + 1) = v20;
      *((float *)a2 + 2) = v21;
      goto LABEL_20;
    case 69:
      *(float *)&v27 = *(float *)a2 + *(float *)v6;
      *(float *)&v17 = *((float *)a2 + 2) + *(float *)(v6 + 8);
      *((float *)&v27 + 1) = *((float *)a2 + 1) + *(float *)(v6 + 4);
      *(float *)&v18 = *((float *)a2 + 3) + *(float *)(v6 + 12);
      *((_DWORD *)a2 + 18) = 69;
      *((_QWORD *)&v27 + 1) = __PAIR64__(v18, v17);
      *(_OWORD *)a2 = v27;
      goto LABEL_20;
  }
  if ( v7 <= 69 )
  {
LABEL_15:
    v26 = 430;
    goto LABEL_14;
  }
  if ( v7 > 71 )
  {
    if ( v7 != 104 )
    {
      if ( v7 == 265 )
      {
        v8 = (_OWORD *)D2DMatrix::operator+(a2, v28, v6);
        *((_DWORD *)a2 + 18) = 265;
        *(_OWORD *)a2 = *v8;
        *((_OWORD *)a2 + 1) = v8[1];
        *((_OWORD *)a2 + 2) = v8[2];
        v9 = v8[3];
        *((_BYTE *)a2 + 76) = 1;
        *((_OWORD *)a2 + 3) = v9;
        goto LABEL_21;
      }
      goto LABEL_15;
    }
    v10 = *(float *)a2 + *(float *)v6;
    v11 = *((float *)a2 + 1) + *(float *)(v6 + 4);
    v12 = *((float *)a2 + 2) + *(float *)(v6 + 8);
    v13 = *((float *)a2 + 3) + *(float *)(v6 + 12);
    v14 = *((float *)a2 + 4) + *(float *)(v6 + 16);
    v15 = *((float *)a2 + 5) + *(float *)(v6 + 20);
    *((_DWORD *)a2 + 18) = 104;
    *(float *)a2 = v10;
    *((float *)a2 + 1) = v11;
    *((float *)a2 + 2) = v12;
    *((float *)a2 + 3) = v13;
    *((float *)a2 + 4) = v14;
    *((float *)a2 + 5) = v15;
LABEL_20:
    *((_BYTE *)a2 + 76) = 1;
    goto LABEL_21;
  }
  v26 = 411;
LABEL_14:
  v16 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, v26, 0LL);
  return v16;
}
