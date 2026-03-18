/*
 * XREFs of ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x180202AF8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Quaternion(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned int v3; // ebx
  int v4; // xmm2_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v9 = 5455;
LABEL_9:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
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
    v9 = 5473;
    goto LABEL_9;
  }
  v4 = *(_DWORD *)(v2 + 80LL * (v1 - 1));
  v5 = *(_DWORD *)(v2 + 80LL * (v1 - 3));
  v6 = *(_DWORD *)(v2 + 80LL * (v1 - 2));
  v7 = *(_DWORD *)(v2 + 80LL * (v1 - 4));
  *(_DWORD *)(v2 + 80LL * (v1 - 4) + 72) = 71;
  *(_DWORD *)(v2 + 80LL * (v1 - 4)) = v7;
  *(_DWORD *)(v2 + 80LL * (v1 - 4) + 4) = v5;
  *(_DWORD *)(v2 + 80LL * (v1 - 4) + 8) = v6;
  *(_DWORD *)(v2 + 80LL * (v1 - 4) + 12) = v4;
  *(_BYTE *)(v2 + 80LL * (v1 - 4) + 76) = 1;
  *((_DWORD *)this + 4) -= 3;
  return v3;
}
