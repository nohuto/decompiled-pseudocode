/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F9D10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  __int64 v6; // rax
  unsigned int v7; // ebx

  v4 = a1;
  if ( a3 == 18
    && (v5 = *a4, (unsigned int)(a2 - 3) <= 0x13)
    && (a1 += 4 * ((unsigned __int64)(unsigned int)(a2 - 3) >> 2) + ((a2 - 3) & 3) + 38) != 0LL )
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x34u, 0LL);
  }
  return v7;
}
