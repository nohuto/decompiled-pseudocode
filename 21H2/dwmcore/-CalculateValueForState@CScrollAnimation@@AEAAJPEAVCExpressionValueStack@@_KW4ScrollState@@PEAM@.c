/*
 * XREFs of ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1802541C8
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180254250 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180253F88 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18025404C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueForState(
        CScrollAnimation *a1,
        struct CExpressionValueStack *a2,
        __int64 a3,
        int a4,
        float *a5)
{
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v5 = a4 - 1;
  if ( !v5 )
  {
    v9 = CScrollAnimation::CalculateInContactValue(a1, a2, a3, a5);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x13Cu);
      return v8;
    }
    return 0;
  }
  if ( v5 != 1 )
  {
    *a5 = 0.0;
    return 0;
  }
  v6 = CScrollAnimation::CalculateInertiaValue(a1, a2, a3, a5);
  v8 = v6;
  if ( v6 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x145u);
  return v8;
}
