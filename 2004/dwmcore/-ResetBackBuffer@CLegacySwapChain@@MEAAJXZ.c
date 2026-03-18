/*
 * XREFs of ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x18008EC90
 * Callers:
 *     ?ResetBackBuffer@CLegacyStereoSwapChain@@MEAAJXZ @ 0x18024C040 (-ResetBackBuffer@CLegacyStereoSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18008EE10 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::ResetBackBuffer(CLegacySwapChain *this)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  int DeviceTextureTarget; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v20 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 48LL))(v20, (char *)this + 56);
  }
  v4 = *v1;
  *v1 = 0LL;
  if ( v4 )
  {
    v21 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v5 = *((_QWORD *)this + 9);
  *((_BYTE *)this + 268) = 0;
  if ( v5 )
  {
    v23 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v5 + 72LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v23);
    v7 = v6(v5, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v23);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802AB078, 2u, v7, 0x4A2u, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = (**v23)(v23, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 88);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802AB078, 2u, v11, 0x4A4u, 0LL);
      }
      else
      {
        v13 = *v1;
        v14 = *((_QWORD *)this + 8);
        *v1 = 0LL;
        if ( v13 )
        {
          v22 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                                v14,
                                v23,
                                *((unsigned int *)this + 34),
                                *((unsigned int *)this + 35),
                                *((_DWORD *)this + 38),
                                *((_DWORD *)this + 40),
                                1,
                                v1);
        v9 = DeviceTextureTarget;
        if ( DeviceTextureTarget < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802AB078, 2u, DeviceTextureTarget, 0x4ACu, 0LL);
        }
        else
        {
          v17 = *v1 + 8LL + *(int *)(*(_QWORD *)(*v1 + 8LL) + 8LL);
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 40LL))(v17, (char *)this + 56);
          LOBYTE(v18) = *((_BYTE *)this + 164);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 16LL))(*v1, v18);
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802AB078, 2u, -2003304307, 0x4B4u, 0LL);
  }
  return v9;
}
