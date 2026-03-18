/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180039878
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned int v3; // ebx
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v8 = 5170;
LABEL_9:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8,
      0LL);
    return v3;
  }
  v2 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 2) + 72) != 18
    || (v3 = 0, *(_DWORD *)(v2 + 80LL * (v1 - 1) + 72) != 18) )
  {
    v8 = 5186;
    goto LABEL_9;
  }
  v4 = *(_DWORD *)(v2 + 80LL * (v1 - 1));
  v5 = *(_DWORD *)(v2 + 80LL * (v1 - 2));
  v6 = *(_DWORD *)(v2 + 80LL * (v1 - 3));
  *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72) = 52;
  *(_DWORD *)(v2 + 80LL * (v1 - 3)) = v6;
  *(_DWORD *)(v2 + 80LL * (v1 - 3) + 4) = v5;
  *(_DWORD *)(v2 + 80LL * (v1 - 3) + 8) = v4;
  *(_BYTE *)(v2 + 80LL * (v1 - 3) + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v3;
}
