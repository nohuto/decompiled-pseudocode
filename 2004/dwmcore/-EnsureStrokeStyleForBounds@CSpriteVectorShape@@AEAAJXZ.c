/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801EE5F8
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801EE188 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  float v4; // xmm0_4
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[8]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_QWORD *)((char *)this + 120);
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fmaxf(0.0, *((float *)this + 50))) & _xmm) >= 0.0000011920929 )
  {
    if ( !*v1 )
    {
      v3 = *((_DWORD *)this + 45);
      v4 = fmaxf(1.0, *((float *)this + 49));
      v9[5] = 0;
      v9[6] = 0;
      v9[0] = v3;
      v9[1] = *((_DWORD *)this + 46);
      v9[2] = *((_DWORD *)this + 44);
      v9[3] = *((_DWORD *)this + 47);
      v5 = *((_BYTE *)this + 204) == 0;
      *(float *)&v9[4] = v4;
      v9[7] = !v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
      v6 = (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)g_DeviceManager + 144LL))(
             g_DeviceManager,
             v9,
             0LL,
             0LL,
             v1);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1D1u, 0LL);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
    return (unsigned int)-2003304438;
  }
  return v2;
}
