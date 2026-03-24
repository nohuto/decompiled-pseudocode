/*
 * XREFs of ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F6370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float *v4; // rax
  float v5; // xmm1_4
  unsigned int v6; // ebx

  if ( a3 != 18 || a2 || (v4 = (float *)(a1 + 152), v5 = fmaxf(0.0, *a4), a1 == -152) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x4Eu, 0LL);
  }
  else
  {
    if ( *v4 != v5 )
    {
      *v4 = v5;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    }
    return 0;
  }
  return v6;
}
