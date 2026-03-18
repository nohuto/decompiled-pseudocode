/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180245E50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r11
  float v5; // xmm1_4
  __int64 v6; // rax
  unsigned int v7; // ebx

  v4 = a1;
  if ( a3 == 18 && (v5 = *a4, (unsigned int)(a2 - 3) <= 0x13) && (a1 += (unsigned int)(a2 - 3) + 40) != 0LL )
  {
    if ( *a1 != v5 )
    {
      v6 = *(_QWORD *)v4;
      *a1 = v5;
      (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v6 + 72))(v4, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024809, 0x34u);
  }
  return v7;
}
