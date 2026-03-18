/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1801FE1F0
 * Callers:
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801D8104 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180200EA0 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x180027794 (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v3 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v4,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x1C1u,
      0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
    *(float *)v6 = a2;
    *(_DWORD *)(v6 + 72) = 18;
    *(_BYTE *)(v6 + 76) = 1;
  }
  return v5;
}
