/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x180203158
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D560 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1800EBCE7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EBCFF (floorf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  unsigned int v10; // [rsp+20h] [rbp-28h]
  float Y; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v10 = 4584;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v10,
      0LL);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = (unsigned int)(v1 - 1);
  v5 = 10 * v4;
  if ( *(_DWORD *)(v3 + 80 * v4 + 72) != 18 )
  {
    v10 = 4629;
    goto LABEL_3;
  }
  v6 = *(float *)(v3 + 80 * v4);
  v7 = modff(v6, &Y);
  if ( ((int)COERCE_FLOAT(LODWORD(Y) & _xmm) & 1) != 0 || COERCE_FLOAT(LODWORD(v7) & _xmm) != 0.5 )
  {
    if ( v6 < 0.0 )
      v8 = ceilf_0(v6 - 0.5);
    else
      v8 = floorf_0(v6 + 0.5);
  }
  else if ( v6 < 0.0 )
  {
    v8 = ceilf_0(v6 - 0.5) + 1.0;
  }
  else
  {
    v8 = floorf_0(v6 + 0.5) - 1.0;
  }
  *(_DWORD *)(v3 + 8 * v5 + 72) = 18;
  *(float *)(v3 + 8 * v5) = v8;
  *(_BYTE *)(v3 + 8 * v5 + 76) = 1;
  return 0;
}
