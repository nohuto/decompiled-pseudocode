/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x1802045CC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v6 = 5227;
LABEL_9:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v6,
      0LL);
    return v4;
  }
  v2 = *((_QWORD *)this + 3);
  v3 = v2 + 80LL * (v1 - 4);
  if ( *(_DWORD *)(v3 + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 2) + 72) != 18
    || (v4 = 0, *(_DWORD *)(v2 + 80LL * (v1 - 1) + 72) != 18) )
  {
    v6 = 5245;
    goto LABEL_9;
  }
  LODWORD(v7) = *(_DWORD *)v3;
  DWORD1(v7) = *(_DWORD *)(v2 + 80LL * (v1 - 3));
  DWORD2(v7) = *(_DWORD *)(v2 + 80LL * (v1 - 2));
  HIDWORD(v7) = *(_DWORD *)(v2 + 80LL * (v1 - 1));
  *(_DWORD *)(v3 + 72) = 69;
  *(_BYTE *)(v3 + 76) = 1;
  *(_OWORD *)v3 = v7;
  *((_DWORD *)this + 4) -= 3;
  return v4;
}
