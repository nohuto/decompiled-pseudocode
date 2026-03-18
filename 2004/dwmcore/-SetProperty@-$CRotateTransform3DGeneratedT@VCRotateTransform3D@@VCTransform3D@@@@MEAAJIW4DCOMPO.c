/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174150
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-18h]

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
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 != 1 )
                {
                  v11 = 5181;
                  goto LABEL_11;
                }
                if ( *a4 != a1[44] )
                {
                  a1[44] = *a4;
LABEL_26:
                  (*(void (__fastcall **)(float *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
                }
              }
              else if ( *a4 != a1[43] )
              {
                a1[43] = *a4;
                goto LABEL_26;
              }
            }
            else if ( *a4 != a1[42] )
            {
              a1[42] = *a4;
              goto LABEL_26;
            }
          }
          else if ( *a4 != a1[41] )
          {
            a1[41] = *a4;
            goto LABEL_26;
          }
        }
        else if ( *a4 != a1[40] )
        {
          a1[40] = *a4;
          goto LABEL_26;
        }
      }
      else if ( *a4 != a1[39] )
      {
        a1[39] = *a4;
        goto LABEL_26;
      }
    }
    else if ( *a4 != a1[38] )
    {
      a1[38] = *a4;
      goto LABEL_26;
    }
    return 0;
  }
  v11 = 5186;
LABEL_11:
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v11, 0LL);
  return v9;
}
