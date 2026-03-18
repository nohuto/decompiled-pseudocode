/*
 * XREFs of ?SetProperty@?$CParticleAttractorGeneratedT@VCParticleAttractor@@VCResource@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172080
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleAttractorGeneratedT<CParticleAttractor,CResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        v7 = 270;
        goto LABEL_10;
      }
      if ( *(float *)a4 != *(float *)(a1 + 72) )
      {
        *(_DWORD *)(a1 + 72) = *a4;
LABEL_15:
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
      }
    }
    else if ( *(float *)a4 != *(float *)(a1 + 68) )
    {
      *(_DWORD *)(a1 + 68) = *a4;
      goto LABEL_15;
    }
    return 0;
  }
  if ( a3 == 52 )
  {
    if ( a2 )
    {
      v7 = 280;
      goto LABEL_10;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 64) = a4[2];
    goto LABEL_15;
  }
  v7 = 285;
LABEL_10:
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v7, 0LL);
  return v5;
}
