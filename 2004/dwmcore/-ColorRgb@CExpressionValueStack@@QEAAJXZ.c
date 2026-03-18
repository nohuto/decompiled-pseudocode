/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x18001D35C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v2; // r11
  unsigned int v3; // ebx
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v9 = 5287;
LABEL_10:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v9,
      0LL);
    return v3;
  }
  v2 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v2 + 80LL * (v1 - 4) + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 2) + 72) != 18
    || (v3 = 0, *(_DWORD *)(v2 + 80LL * (v1 - 1) + 72) != 18) )
  {
    v9 = 5305;
    goto LABEL_10;
  }
  v4 = fminf(*(float *)(v2 + 80LL * (v1 - 3)), 255.0);
  v5 = fminf(*(float *)(v2 + 80LL * (v1 - 2)), 255.0);
  v6 = *(float *)(v2 + 80LL * (v1 - 4));
  v7 = fminf(*(float *)(v2 + 80LL * (v1 - 1)), 255.0);
  *(_DWORD *)(v2 + 80LL * (v1 - 4) + 72) = 70;
  *(float *)(v2 + 80LL * (v1 - 4)) = fmaxf(v4, 0.0) / 255.0;
  *(float *)(v2 + 80LL * (v1 - 4) + 4) = fmaxf(v5, 0.0) / 255.0;
  *(float *)(v2 + 80LL * (v1 - 4) + 8) = fmaxf(v7, 0.0) / 255.0;
  *(float *)(v2 + 80LL * (v1 - 4) + 12) = fmaxf(fminf(v6, 255.0), 0.0) / 255.0;
  *(_BYTE *)(v2 + 80LL * (v1 - 4) + 76) = 1;
  *((_DWORD *)this + 4) -= 3;
  return v3;
}
