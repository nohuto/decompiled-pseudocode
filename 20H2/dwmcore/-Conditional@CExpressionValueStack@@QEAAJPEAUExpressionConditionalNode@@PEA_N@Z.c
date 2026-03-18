/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x1801FAF58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        struct ExpressionConditionalNode *a2,
        bool *a3)
{
  int v3; // eax
  CExpressionValueStack *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 4);
  v5 = this;
  if ( v3 )
  {
    v7 = (unsigned int)(v3 - 1);
    v6 = 0;
    this = (CExpressionValueStack *)(*((_QWORD *)this + 3) + 80 * v7);
    if ( *((_DWORD *)this + 18) == 17 )
    {
      *a3 = *(_BYTE *)this;
      *((_DWORD *)v5 + 4) = v7;
      return v6;
    }
    v9 = 8003;
  }
  else
  {
    v9 = 7984;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9,
    0LL);
  return v6;
}
