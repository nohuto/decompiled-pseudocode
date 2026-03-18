/*
 * XREFs of ?SetAnimatableProperty@CProjectedShadowApproxBlurEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBXPEA_NPEAI@Z @ 0x180116440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::SetAnimatableProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        _BYTE *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx

  *a5 = 0;
  *a6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0x50u);
      return v6;
    }
    *(_DWORD *)(a1 + 92) = *a4;
  }
  else
  {
    *(_OWORD *)(a1 + 76) = *(_OWORD *)a4;
  }
  ++*(_DWORD *)(a1 + 96);
  return 0;
}
