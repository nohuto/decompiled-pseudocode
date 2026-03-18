/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r11
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_14;
  v5 = *a4;
  v6 = a2 - 1;
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
LABEL_14:
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024809, 0x46u);
          return v11;
        }
        v9 = 76LL;
      }
      else
      {
        v9 = 72LL;
      }
    }
    else
    {
      v9 = 68LL;
    }
  }
  else
  {
    v9 = 64LL;
  }
  a1 = (float *)((char *)a1 + v9);
  if ( !a1 )
    goto LABEL_14;
  if ( *a1 != v5 )
  {
    v10 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v10 + 72))(v4, 0LL, 0LL);
  }
  return 0;
}
