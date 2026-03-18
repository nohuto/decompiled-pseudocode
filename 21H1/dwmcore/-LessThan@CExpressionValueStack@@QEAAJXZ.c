/*
 * XREFs of ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x180200B4C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThan(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  CExpressionValueStack *v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // cf
  bool v7; // zf
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
    if ( (_DWORD)this == *(_DWORD *)(v5 + 72) )
    {
      if ( (_DWORD)this == 18 )
      {
        v6 = *(float *)v5 < *(float *)v4;
        v7 = *(float *)v5 == *(float *)v4;
        *(_DWORD *)(v4 + 72) = 17;
        *(_BYTE *)(v4 + 76) = 1;
        *(_BYTE *)v4 = !v6 && !v7;
        --*((_DWORD *)v2 + 4);
        return v3;
      }
      v9 = 1789;
    }
    else
    {
      v9 = 1769;
    }
  }
  else
  {
    v9 = 1741;
  }
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
