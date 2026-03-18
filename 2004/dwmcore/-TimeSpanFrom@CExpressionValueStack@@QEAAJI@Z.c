/*
 * XREFs of ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x180201098
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180038060 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v2 - 1);
    if ( *(_DWORD *)(v5 + 72) == 18 )
    {
      *(_DWORD *)(v5 + 72) = 42;
      *(_BYTE *)(v5 + 76) = 1;
      v4 = 0;
      *(float *)v5 = (float)a2 * *(float *)v5;
      return v4;
    }
    v7 = 7202;
  }
  else
  {
    v7 = 7190;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v7,
    0LL);
  return v4;
}
