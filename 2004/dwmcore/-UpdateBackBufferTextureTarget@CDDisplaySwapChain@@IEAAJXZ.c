/*
 * XREFs of ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x180239140
 * Callers:
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18023864C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180238ABC (-PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18008EE10 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::UpdateBackBufferTextureTarget(CDDisplaySwapChain *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int DeviceTextureTarget; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx

  v1 = (_QWORD *)((char *)this + 224);
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(v4, (char *)this + 56);
    v5 = *v1;
    *v1 = 0LL;
    if ( v5 )
    {
      v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    v8 = *v1;
    *v1 = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                            v7,
                            *(_QWORD *)(32LL * *((unsigned int *)this + 58) + *((_QWORD *)this + 25) + 16),
                            *((_DWORD *)this + 61),
                            *((_DWORD *)this + 62),
                            *((_DWORD *)this + 65),
                            *((_DWORD *)this + 67),
                            1,
                            v1);
    v12 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802EE908, 2u, DeviceTextureTarget, 0x96u, 0LL);
    }
    else
    {
      v13 = *(int *)(*(_QWORD *)(*v1 + 8LL) + 8LL) + *v1 + 8LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 40LL))(v13, (char *)this + 56);
    }
  }
  else
  {
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802EE908, 2u, -2003304307, 0x9Cu, 0LL);
  }
  return v12;
}
