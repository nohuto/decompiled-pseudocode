/*
 * XREFs of ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x1801DCCC0
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DCBF0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801DB6D4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetScalarProperty(CNaturalAnimation *this, int a2, float a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  float *v11; // rbx
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v3 = 0;
  v5 = a2 - 38;
  if ( !v5 )
  {
    *((_BYTE *)this + 564) |= 0x20u;
    *((float *)this + 84) = a3;
    return v3;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    *((_BYTE *)this + 564) |= 0x10u;
    *((float *)this + 78) = a3;
    return v3;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    *((float *)this + 87) = a3;
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v11 = (float *)*((_QWORD *)this + 53);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v15 = v11[10];
    v11[9] = a3;
    v13 = v15 * v15;
    v14 = (float)(a3 + a3) * v11[10];
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v11 = (float *)*((_QWORD *)this + 53);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v12 = v11[9];
    v11[10] = 1.0 / a3;
    v13 = (float)(1.0 / a3) * (float)(1.0 / a3);
    v14 = (float)(v12 + v12) * (float)(1.0 / a3);
LABEL_18:
    v11[8] = v14;
    v11[7] = v13;
LABEL_19:
    (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
    return v3;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v11 = (float *)*((_QWORD *)this + 53);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    v11[7] = a3;
    v11[8] = a3 / 0.0099999998;
    goto LABEL_19;
  }
  if ( v10 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v11 = (float *)*((_QWORD *)this + 53);
    if ( v11 )
      (**(void (__fastcall ***)(float *))v11)(v11);
    *((_DWORD *)v11 + 9) = LODWORD(a3) & _xmm;
    v11[10] = (float)((float)(COERCE_FLOAT(LODWORD(a3) & _xmm) + 1.0) * -1.0) / 0.0099999998;
    goto LABEL_19;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x3E2u, 0LL);
  return v3;
}
