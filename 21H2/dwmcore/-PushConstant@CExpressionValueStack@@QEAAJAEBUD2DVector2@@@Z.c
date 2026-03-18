/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18024F4C4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180227470 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x180071D2C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector2 *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x1E2u);
  }
  else
  {
    v7 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
    *(_DWORD *)(v7 + 72) = 35;
    *(_QWORD *)v7 = *(_QWORD *)a2;
    *(_BYTE *)(v7 + 76) = 1;
  }
  return v6;
}
