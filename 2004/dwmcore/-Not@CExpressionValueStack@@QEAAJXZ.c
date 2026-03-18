/*
 * XREFs of ?Not@CExpressionValueStack@@QEAAJXZ @ 0x1801FF918
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Not(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  bool v4; // zf
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 72) == 17 )
    {
      v4 = *(_BYTE *)v3 == 0;
      *(_DWORD *)(v3 + 72) = 17;
      *(_BYTE *)(v3 + 76) = 1;
      *(_BYTE *)v3 = v4;
      return 0;
    }
    v6 = 2261;
  }
  else
  {
    v6 = 2230;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v6,
    0LL);
  return v2;
}
