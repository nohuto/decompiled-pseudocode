/*
 * XREFs of ?Ln@CExpressionValueStack@@QEAAJXZ @ 0x1801FE2FC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     logf_0 @ 0x1800EECD3 (logf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Ln(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  float v3; // xmm6_4
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v6 = 4939;
LABEL_8:
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
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v2 + 72) != 18 )
  {
    v6 = 4980;
    goto LABEL_8;
  }
  v3 = logf_0(*(float *)v2);
  if ( _isnan(v3) )
  {
    v6 = 4965;
    goto LABEL_8;
  }
  *(float *)v2 = v3;
  *(_DWORD *)(v2 + 72) = 18;
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
