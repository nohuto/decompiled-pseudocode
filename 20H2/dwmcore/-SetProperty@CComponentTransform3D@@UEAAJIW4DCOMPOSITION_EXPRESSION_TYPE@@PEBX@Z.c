/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B9EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  int *v5; // rax
  void **v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  float v11; // xmm0_4
  float v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 16 && a3 == 18 )
  {
    v5 = (int *)&CComponentTransform3D::sc_RotationAngle;
    v11 = *a4 * 0.017453292;
    a4 = &v12;
    v12 = v11;
  }
  else
  {
    v5 = 0LL;
    v6 = (void **)&CComponentTransform3D::k_rgAnimDef;
    while ( a2 != *(_DWORD *)*v6 || a3 != *((_DWORD *)*v6 + 1) && a3 )
    {
      if ( ++v6 == &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'} )
        goto LABEL_8;
    }
    v5 = (int *)*v6;
LABEL_8:
    if ( !v5 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x54u, 0LL);
      return v9;
    }
  }
  v7 = (*((__int64 (__fastcall **)(__int64, int *, float *))v5 + 3))(a1 + v5[8], v5, a4);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x50u, 0LL);
  return v9;
}
