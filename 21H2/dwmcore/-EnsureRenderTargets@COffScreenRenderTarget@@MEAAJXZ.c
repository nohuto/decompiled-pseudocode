/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180185870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180031074 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F200 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FAE0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180060864 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18006E9E8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180185E44 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(struct D2D_SIZE_U *this)
{
  unsigned int v2; // edi
  enum DXGI_FORMAT v3; // ebx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 (__fastcall ***v5)(_QWORD, CD3DDevice **); // rcx
  int updated; // eax
  CDisplayManager *v7; // rcx
  CDeviceManager *v8; // rcx
  int Device; // eax
  __int64 v10; // rcx
  CD3DDevice *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 width; // rax
  CD3DDevice *v15; // r8
  UINT32 v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  CD3DDevice *v19; // rcx
  struct IRenderTargetBitmap *v21; // [rsp+40h] [rbp-40h] BYREF
  struct _LUID v22; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+54h] [rbp-2Ch]
  int v25; // [rsp+58h] [rbp-28h]
  char v26; // [rsp+5Ch] [rbp-24h]
  CD3DDevice *v27[2]; // [rsp+60h] [rbp-20h] BYREF

  v2 = 0;
  if ( this[225].width )
    return v2;
  v3 = DXGI_FORMAT_B8G8R8A8_UNORM;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*(_QWORD *)&this[2]
                                                                                                + 88LL));
  if ( PrimaryMonitorTarget )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, CD3DDevice **))((char *)PrimaryMonitorTarget
                                                         + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                                         + 8);
    v3 = *(_DWORD *)(**v5)(v5, v27);
  }
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, v3);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, updated, 0x44u, 0LL);
    return v2;
  }
  CDisplayManager::GetPrimaryAdapterLuid(v7, &v22);
  v23 = DisplayId::None;
  v25 = 0;
  v24 = 0;
  v26 = 0;
  v27[0] = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v27);
  Device = CDeviceManager::GetDevice(v8, v22, v27);
  v2 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Device, 0x4Eu, 0LL);
    v19 = v27[0];
    if ( v27[0] )
      goto LABEL_19;
    return v2;
  }
  v11 = v27[0];
  v21 = 0LL;
  v12 = CD3DDevice::CreateRenderTargetBitmap(
          v27[0],
          (const struct CResourceTag *)&this[233],
          this + 10,
          (const struct PixelFormatInfo *)&this[11],
          (struct RenderTargetInfo *)&v22,
          0,
          &v21);
  v2 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x56u, 0LL);
  }
  else
  {
    width = this[225].width;
    v15 = v21;
    v21 = 0LL;
    v27[0] = v15;
    v16 = width + 1;
    if ( (int)width + 1 >= (unsigned int)width )
    {
      if ( v16 <= this[224].height )
      {
        v2 = 0;
        *(_QWORD *)(*(_QWORD *)&this[222] + 8 * width) = v15;
        this[225].width = v16;
        goto LABEL_16;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[222], 8, 1, v27);
      v2 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, 0xC0u, 0LL);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( (v2 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v2, 0x58u, 0LL);
  }
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  if ( v11 )
  {
    v19 = v11;
LABEL_19:
    CD3DDevice::Release(v19);
  }
  return v2;
}
