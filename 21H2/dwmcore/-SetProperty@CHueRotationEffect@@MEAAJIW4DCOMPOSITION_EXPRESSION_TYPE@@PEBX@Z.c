/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180246290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  float *v5; // rax
  unsigned int v6; // ebx

  if ( a3 != 18 )
    goto LABEL_8;
  v4 = *a4;
  v5 = (float *)(a1 + 160);
  if ( a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( *v5 != v4 )
    {
      *v5 = v4;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
LABEL_8:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0x2Fu);
  }
  return v6;
}
