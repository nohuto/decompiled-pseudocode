/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18008BC74
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18008B768 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180031BE4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180032A3C (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE50 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18008D0DC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18023990C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  UINT32 v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // edi
  int v4; // xmm0_4
  CDeviceManager *v5; // rcx
  int Device; // eax
  __int64 v7; // rcx
  CD3DDevice *v8; // rdi
  unsigned int v9; // esi
  struct IRenderTargetBitmap **v10; // rbx
  struct IRenderTargetBitmap *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  CDeviceManager *v16; // rcx
  int WarpDevice; // eax
  __int64 v18; // rcx
  struct IRenderTargetBitmap *v19; // rdx
  __int64 v20; // rcx
  CD3DDevice *v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  CD3DDevice *v24; // rcx
  struct IRenderTargetBitmap **v25; // [rsp+38h] [rbp-19h]
  CD3DDevice *v26; // [rsp+48h] [rbp-9h] BYREF
  int v27; // [rsp+50h] [rbp-1h]
  __int64 v28; // [rsp+58h] [rbp+7h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v29; // [rsp+60h] [rbp+Fh]
  struct D2D_SIZE_U v30; // [rsp+68h] [rbp+17h] BYREF
  struct _LUID v31; // [rsp+70h] [rbp+1Fh] BYREF
  int v32; // [rsp+78h] [rbp+27h]
  int v33; // [rsp+7Ch] [rbp+2Bh]
  int v34; // [rsp+80h] [rbp+2Fh]
  char v35; // [rsp+84h] [rbp+33h]
  const char *v36; // [rsp+88h] [rbp+37h] BYREF
  int v37; // [rsp+90h] [rbp+3Fh]

  v1 = *((_DWORD *)this + 417);
  v3 = *((_DWORD *)this + 421);
  v28 = *(_QWORD *)((char *)this + 1676);
  v30.width = v1;
  v30.height = *((_DWORD *)this + 418);
  v29 = v3;
  if ( (_DWORD)v28 == 88 )
    v28 = 0x300000057LL;
  CDisplayManager::GetPrimaryAdapterLuid(this);
  v33 = 0;
  v32 = DisplayId::All;
  if ( IsDXGIColorSpaceHDR(v3) )
    v4 = (int)FLOAT_1_0;
  else
    v4 = 0;
  v26 = 0LL;
  v34 = v4;
  v35 = 0;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
  Device = CDeviceManager::GetDevice(v5, v31, &v26);
  v8 = v26;
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Device, 0x134u, 0LL);
    goto LABEL_9;
  }
  v10 = (struct IRenderTargetBitmap **)((char *)this + 64);
  v11 = *v10;
  *v10 = 0LL;
  if ( v11 )
  {
    v15 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v26 = (CD3DDevice *)"DWM Scratch Rendertarget (capturebits)";
  v27 = 38;
  v12 = CD3DDevice::CreateRenderTargetBitmap(
          v8,
          (const struct CResourceTag *)&v26,
          &v30,
          (const struct PixelFormatInfo *)&v28,
          (struct RenderTargetInfo *)&v31,
          1,
          v10);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x13Cu, 0LL);
    v26 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
    WarpDevice = CDeviceManager::GetWarpDevice(v16, &v26);
    v9 = WarpDevice;
    if ( WarpDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, WarpDevice, 0x142u, 0LL);
      v24 = v26;
      if ( !v26 )
        goto LABEL_9;
    }
    else
    {
      v19 = *v10;
      *v10 = 0LL;
      if ( v19 )
      {
        v20 = (__int64)v19 + *(int *)(*((_QWORD *)v19 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v25 = v10;
      v21 = v26;
      v36 = "DWM Scratch Rendertarget (capturebits)";
      v37 = 38;
      v22 = CD3DDevice::CreateRenderTargetBitmap(
              v26,
              (const struct CResourceTag *)&v36,
              &v30,
              (const struct PixelFormatInfo *)&v28,
              (struct RenderTargetInfo *)&v31,
              1,
              v25);
      v9 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x149u, 0LL);
      if ( !v21 )
        goto LABEL_9;
      v24 = v21;
    }
    CD3DDevice::Release(v24);
  }
LABEL_9:
  if ( v8 )
    CD3DDevice::Release(v8);
  return v9;
}
