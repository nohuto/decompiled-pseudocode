/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801FABD0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180005EE4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     fmodf_0 @ 0x1800EE96B (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // ebx
  float v7; // xmm8_4
  float v8; // xmm6_4
  ColorSpaceHelpers *v9; // rcx
  __int128 v10; // xmm0
  unsigned int v12; // [rsp+20h] [rbp-58h]
  float v13[8]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v12 = 5372;
LABEL_8:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v6;
  }
  v3 = *((_QWORD *)this + 3) + 80LL * (v1 - 3);
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  if ( *(_DWORD *)(v3 + 72) != 18 || *(_DWORD *)(v4 + 72) != 18 || (v6 = 0, *(_DWORD *)(v5 + 72) != 18) )
  {
    v12 = 5388;
    goto LABEL_8;
  }
  v7 = fmaxf(fminf(*(float *)v5, 1.0), 0.0);
  v8 = fmaxf(fminf(*(float *)v4, 1.0), 0.0);
  fmodf_0(*(float *)v3, 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(v9, v8, v7, 1.0, v13, &v13[1], &v13[2], &v13[3]);
  v10 = *(_OWORD *)v13;
  *(_DWORD *)(v3 + 72) = 70;
  *(_BYTE *)(v3 + 76) = 1;
  *(_OWORD *)v3 = v10;
  *((_DWORD *)this + 4) -= 2;
  return v6;
}
