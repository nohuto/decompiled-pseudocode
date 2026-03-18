/*
 * XREFs of ?Or@CExpressionValueStack@@QEAAJXZ @ 0x1801FDD84
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Or(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // r9
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v8 = 2145;
LABEL_3:
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
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = 0;
  v6 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  v3 = 0;
  this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
  if ( (_DWORD)this != *(_DWORD *)(v6 + 72) )
  {
    v8 = 2173;
    goto LABEL_3;
  }
  if ( (_DWORD)this != 17 )
  {
    v8 = 2192;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v4 || *(_BYTE *)v6 )
    v5 = 1;
  *(_DWORD *)(v4 + 72) = 17;
  *(_BYTE *)v4 = v5;
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
