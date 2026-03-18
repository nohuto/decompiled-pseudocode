/*
 * XREFs of ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802526BC
 * Callers:
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x180252158 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180252280 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D6740 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::ResetBackBuffer(CCompSwapChain *this)
{
  _QWORD *v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int DeviceTextureTarget; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 72);
  }
  v5 = *v1;
  *v1 = 0LL;
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v22 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v7 + 72LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v22);
    v9 = v8(v7, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v22);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802F1898, 2u, v9, 0x193u, 0LL);
    }
    else
    {
      v12 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = (**v22)(v22, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 104);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802F1898, 2u, v13, 0x195u, 0LL);
      }
      else
      {
        v15 = *v1;
        v16 = *((_QWORD *)this + 10);
        *v1 = 0LL;
        if ( v15 )
        {
          v17 = v15 + 8 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                                v16,
                                (__int64)v22,
                                *((_DWORD *)this + 31),
                                *((_DWORD *)this + 32),
                                *((_DWORD *)this + 35),
                                *((_DWORD *)this + 37),
                                1,
                                v1);
        v11 = DeviceTextureTarget;
        if ( DeviceTextureTarget < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802F1898, 2u, DeviceTextureTarget, 0x19Du, 0LL);
        }
        else
        {
          v20 = *v1 + 8LL + *(int *)(*(_QWORD *)(*v1 + 8LL) + 8LL);
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 40LL))(v20, (char *)this + 72);
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  }
  else
  {
    v11 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802F1898, 2u, -2003304307, 0x1A3u, 0LL);
  }
  return v11;
}
