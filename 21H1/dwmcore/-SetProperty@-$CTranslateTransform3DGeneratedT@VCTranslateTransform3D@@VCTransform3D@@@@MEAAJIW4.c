/*
 * XREFs of ?SetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801773E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTranslateTransform3DGeneratedT<CTranslateTransform3D,CTransform3D>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
        {
          v7 = 6788;
          goto LABEL_7;
        }
        if ( *a4 != a1[40] )
        {
          a1[40] = *a4;
LABEL_14:
          (*(void (__fastcall **)(float *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
        }
      }
      else if ( *a4 != a1[39] )
      {
        a1[39] = *a4;
        goto LABEL_14;
      }
    }
    else if ( *a4 != a1[38] )
    {
      a1[38] = *a4;
      goto LABEL_14;
    }
    return 0;
  }
  v7 = 6793;
LABEL_7:
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v7, 0LL);
  return v5;
}
