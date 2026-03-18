/*
 * XREFs of ?Acos@CExpressionValueStack@@QEAAJXZ @ 0x1801FA8AC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     acosf_0 @ 0x1800EE917 (acosf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Acos(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  float v3; // xmm0_4
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v6 = 4245;
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
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v2 + 72) != 18 )
  {
    v6 = 4287;
    goto LABEL_9;
  }
  v3 = *(float *)v2;
  if ( *(float *)v2 < -1.0 || v3 > 1.0 )
  {
    v6 = 4272;
    goto LABEL_9;
  }
  *(_DWORD *)(v2 + 72) = 18;
  *(float *)v2 = acosf_0(v3);
  *(_BYTE *)(v2 + 76) = 1;
  return 0;
}
