/*
 * XREFs of ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x1800A41D0
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800A17D0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::CalcMaxTextureSize(CD3DDevice *this)
{
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v9[12]; // [rsp+38h] [rbp-38h] BYREF

  if ( *((_QWORD *)this + 76) )
  {
    *((_DWORD *)this + 242) = 0x800000;
  }
  else
  {
    v2 = *((_DWORD *)this + 156);
    if ( v2 <= 37376 )
    {
      v4 = *((_QWORD *)this + 74);
      v8 = 0LL;
      v9[6] = 0;
      v9[7] = 0;
      v9[9] = 0;
      v9[10] = 0;
      v9[0] = 2100;
      v9[1] = 1;
      v9[2] = 1;
      v9[3] = 1;
      v9[4] = 61;
      v9[5] = 1;
      v9[8] = 8;
      v5 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v4 + 40LL);
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v8);
      v6 = v5(v4, v9, 0LL, &v8);
      v7 = 2048;
      if ( v6 >= 0 )
        v7 = 4096;
      *((_DWORD *)this + 242) = v7;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
    }
    else if ( v2 == 37632 )
    {
      *((_DWORD *)this + 242) = 4096;
    }
    else
    {
      v3 = 0x4000;
      if ( v2 <= 41216 )
        v3 = 0x2000;
      *((_DWORD *)this + 242) = v3;
    }
  }
}
