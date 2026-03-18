/*
 * XREFs of ?SetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180171FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v4 = a2 - 3;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v8 = 4771;
          goto LABEL_7;
        }
        if ( *a4 != a1[24] )
        {
          a1[24] = *a4;
LABEL_14:
          (*(void (__fastcall **)(float *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
        }
      }
      else if ( *a4 != a1[23] )
      {
        a1[23] = *a4;
        goto LABEL_14;
      }
    }
    else if ( *a4 != a1[22] )
    {
      a1[22] = *a4;
      goto LABEL_14;
    }
    return 0;
  }
  v8 = 4776;
LABEL_7:
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v8, 0LL);
  return v6;
}
