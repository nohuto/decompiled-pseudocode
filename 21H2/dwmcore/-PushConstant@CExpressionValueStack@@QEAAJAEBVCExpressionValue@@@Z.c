/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180070568
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180210CA0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x180071D2C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct CExpressionValue *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // r9

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v5,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x280u,
      0LL);
  }
  else
  {
    v7 = *((unsigned int *)this + 4);
    *((_DWORD *)this + 4) = v7 + 1;
    CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v7), a2);
  }
  return v6;
}
