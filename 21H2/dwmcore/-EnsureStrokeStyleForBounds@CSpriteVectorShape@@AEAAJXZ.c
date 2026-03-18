/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x18023F378
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180065138 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  __int64 *v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  float v5; // xmm0_4
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rcx
  _DWORD v10[8]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (__int64 *)((char *)this + 128);
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fmaxf(0.0, *((float *)this + 52))) & _xmm) >= 0.0000011920929 )
  {
    if ( !*v1 )
    {
      v4 = *((_DWORD *)this + 47);
      v10[5] = 0;
      v10[6] = 0;
      v5 = fmaxf(1.0, *((float *)this + 51));
      v10[0] = v4;
      v10[1] = *((_DWORD *)this + 48);
      v10[2] = *((_DWORD *)this + 46);
      v10[3] = *((_DWORD *)this + 49);
      v6 = *((_BYTE *)this + 212) == 0;
      *(float *)&v10[4] = v5;
      v10[7] = !v6;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(*g_DeviceManager + 144LL))(
             g_DeviceManager,
             v10,
             0LL,
             0LL,
             v1);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1D6u);
    }
  }
  else
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    return (unsigned int)-2003304438;
  }
  return v2;
}
