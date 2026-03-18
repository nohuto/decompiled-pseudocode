/*
 * XREFs of ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetProperty(
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
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
          {
            v8 = 6263;
            goto LABEL_8;
          }
          if ( *a4 != a1[41] )
          {
            a1[41] = *a4;
LABEL_17:
            (*(void (__fastcall **)(float *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
          }
        }
        else if ( *a4 != a1[40] )
        {
          a1[40] = *a4;
          goto LABEL_17;
        }
      }
      else if ( *a4 != a1[39] )
      {
        a1[39] = *a4;
        goto LABEL_17;
      }
    }
    else if ( *a4 != a1[38] )
    {
      a1[38] = *a4;
      goto LABEL_17;
    }
    return 0;
  }
  v8 = 6268;
LABEL_8:
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v8, 0LL);
  return v6;
}
