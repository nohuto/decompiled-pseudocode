/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x1801FE474
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this, unsigned int a2)
{
  char v3; // r14
  unsigned int v4; // edx
  unsigned int v6; // edi
  __int64 v7; // rdi
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  unsigned int *v10; // rax
  __int64 v11; // xmm1_8
  unsigned int v13; // [rsp+20h] [rbp-48h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 4);
  if ( v4 < a2 )
  {
    v13 = 6045;
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      goto LABEL_12;
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v10 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (v4 - 1));
    if ( *(_DWORD *)(v7 + 72) != 18 || v10[18] != 35 )
      goto LABEL_12;
    v8 = (__m128)v10[1];
    v9 = (__m128)*v10;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
  if ( *(_DWORD *)(v7 + 72) == 18 )
  {
    v8 = 0LL;
    v9 = 0LL;
LABEL_11:
    v3 = 1;
    D2D1MakeRotateMatrix(*(float *)v7 * 57.295776, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v9, v8), &matrix);
    v11 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v7 = *(_OWORD *)&matrix.m11;
    *(_BYTE *)(v7 + 76) = 1;
    *(_QWORD *)(v7 + 16) = v11;
    *(_DWORD *)(v7 + 72) = 104;
  }
LABEL_12:
  v6 = 0;
  if ( v3 )
  {
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v13 = 6087;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v6;
}
