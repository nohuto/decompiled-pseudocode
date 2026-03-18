/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801C1220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801C1D6C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
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
  int v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  CD3DDevice *v21; // rcx
  struct IRenderTargetBitmap *v23; // [rsp+40h] [rbp-40h] BYREF
  struct _LUID v24; // [rsp+48h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+54h] [rbp-2Ch]
  int v27; // [rsp+58h] [rbp-28h]
  char v28; // [rsp+5Ch] [rbp-24h]
  CD3DDevice *v29[2]; // [rsp+60h] [rbp-20h] BYREF

  v2 = 0;
  if ( this[223].width )
    return v2;
  v3 = DXGI_FORMAT_B8G8R8A8_UNORM;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*(_QWORD *)&this[2]
                                                                                                + 216LL));
  if ( PrimaryMonitorTarget )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, CD3DDevice **))((char *)PrimaryMonitorTarget
                                                         + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                                         + 8);
    v3 = *(_DWORD *)(**v5)(v5, v29);
  }
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, v3);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0LL, updated, 0x44u);
    return v2;
  }
  CDisplayManager::GetPrimaryAdapterLuid(v7, &v24);
  v27 = 0;
  v25 = DisplayId::None;
  v26 = 0;
  v28 = 0;
  v29[0] = 0LL;
  Device = CDeviceManager::GetDevice(v8, v24, v29);
  v2 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, Device, 0x4Eu);
    v21 = v29[0];
    if ( v29[0] )
      goto LABEL_18;
    return v2;
  }
  v23 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v23);
  v11 = v29[0];
  v12 = CD3DDevice::CreateRenderTargetBitmap(
          v29[0],
          (const struct CResourceTag *)&this[231],
          this + 13,
          (const struct PixelFormatInfo *)&this[14],
          (struct RenderTargetInfo *)&v24,
          0,
          &v23);
  v2 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x56u);
  }
  else
  {
    width = this[223].width;
    v15 = v23;
    v23 = 0LL;
    v29[0] = v15;
    v16 = width + 1;
    if ( (int)width + 1 < (unsigned int)width )
    {
      v2 = -2147024362;
      v17 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x58u);
      goto LABEL_15;
    }
    if ( v16 <= this[222].height )
    {
      v2 = 0;
      *(_QWORD *)(*(_QWORD *)&this[220] + 8 * width) = v15;
      this[223].width = v16;
      goto LABEL_15;
    }
    v19 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&this[220], 8u, 1, v29);
    v17 = v19;
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0xC0u);
      goto LABEL_13;
    }
  }
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
  if ( v11 )
  {
    v21 = v11;
LABEL_18:
    CD3DDevice::Release(v21);
  }
  return v2;
}
