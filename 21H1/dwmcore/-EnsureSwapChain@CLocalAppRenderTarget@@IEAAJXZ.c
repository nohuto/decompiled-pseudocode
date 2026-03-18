/*
 * XREFs of ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018E91C
 * Callers:
 *     ?PreRender@CLocalAppRenderTarget@@UEAAJXZ @ 0x18018EC48 (-PreRender@CLocalAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ @ 0x18018ED2C (-ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ.c)
 *     ?SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z @ 0x18018EF48 (-SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180239888 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18023EA80 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 */

__int64 __fastcall CLocalAppRenderTarget::EnsureSwapChain(CLocalAppRenderTarget *this)
{
  CD3DDevice **v1; // rbx
  unsigned int v2; // esi
  int *v3; // rax
  CD3DDevice *v5; // rcx
  CDeviceManager *v6; // rcx
  int DefaultDevice; // eax
  __int64 v8; // rcx
  _QWORD *v9; // r14
  char v10; // r15
  __int64 v11; // rcx
  CD3DDevice *v12; // rbx
  int CompositionSwapChain; // eax
  __int64 v14; // rcx
  void *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+3Ch] [rbp-2Ch]
  int v24; // [rsp+40h] [rbp-28h]
  char v25; // [rsp+44h] [rbp-24h]
  int v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+74h] [rbp+Ch]

  v1 = (CD3DDevice **)((char *)this + 144);
  v2 = 0;
  v3 = (int *)*((_QWORD *)this + 18);
  v5 = (CD3DDevice *)v3;
  if ( v3 && v3[282] < 0 )
  {
    CLocalAppRenderTarget::ReleaseSwapChain(this);
    v5 = *v1;
  }
  if ( v5
    || (wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v1),
        DefaultDevice = CDeviceManager::GetDefaultDevice(v6, v1),
        v2 = DefaultDevice,
        DefaultDevice >= 0) )
  {
    v9 = (_QWORD *)((char *)this + 152);
    v10 = 0;
    v11 = *((_QWORD *)this + 19);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 40LL))(v11, &v26);
      if ( v26 != *((_DWORD *)this + 20) || v27 != *((_DWORD *)this + 21) )
        v10 = 1;
    }
    if ( *((_DWORD *)this + 20) && *((_DWORD *)this + 21) )
    {
      if ( *v9 )
      {
        if ( !v10 )
          return v2;
        v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v9 + 48LL))(*v9, (char *)this + 80);
        v2 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE0u, 0LL);
          return v2;
        }
      }
      else
      {
        v12 = *v1;
        v23 = 0;
        v25 = 0;
        v24 = 0;
        v21 = *((_QWORD *)v12 + 117);
        v22 = DisplayId::None;
        wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 19);
        CompositionSwapChain = CD3DDevice::CreateCompositionSwapChain(
                                 v12,
                                 (const struct D2D_SIZE_U *)this + 10,
                                 (CLocalAppRenderTarget *)((char *)this + 88),
                                 (const struct RenderTargetInfo *)&v21,
                                 v20,
                                 (struct ICompositionSwapChain **)this + 19);
        v2 = CompositionSwapChain;
        if ( CompositionSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CompositionSwapChain, 0xD4u, 0LL);
          return v2;
        }
        v15 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 72LL))(*v9);
        v16 = *(int *)(*(_QWORD *)(*v9 + 8LL) + 12LL) + *v9 + 8LL;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 40LL))(v16, (char *)this + 136);
        CLocalAppRenderTarget::SendCompSurfHandle(this, v15);
      }
      *((_BYTE *)this + 129) = 1;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DefaultDevice, 0xB4u, 0LL);
  }
  return v2;
}
