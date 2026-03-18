/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x1801FD8F0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     fmodf_0 @ 0x1800EE96B (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  CExpressionValueStack *v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  float *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
    this = (CExpressionValueStack *)*(unsigned int *)(v4 + 72);
    if ( (_DWORD)this == *((_DWORD *)v5 + 18) )
    {
      if ( (_DWORD)this == 18 )
      {
        v6 = *v5;
        if ( *v5 > 0.0 )
        {
          v7 = *(float *)v4;
          *(_DWORD *)(v4 + 72) = 18;
          *(float *)v4 = fmodf_0(v7, v6);
          *(_BYTE *)(v4 + 76) = 1;
          --*((_DWORD *)v2 + 4);
          return v3;
        }
        v9 = 1447;
      }
      else
      {
        v9 = 1463;
      }
    }
    else
    {
      v9 = 1432;
    }
  }
  else
  {
    v9 = 1409;
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
