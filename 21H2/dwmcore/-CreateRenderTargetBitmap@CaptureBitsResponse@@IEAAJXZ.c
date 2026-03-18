/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003DF5C
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18003CFC8 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC84 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802772A0 (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // edi
  CDeviceManager *v4; // rcx
  int v5; // xmm0_4
  int Device; // eax
  unsigned int v7; // ecx
  CD3DDevice *v8; // rdi
  unsigned int v9; // esi
  char *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  CDeviceManager *v14; // rcx
  int WarpDevice; // eax
  unsigned int v16; // ecx
  CD3DDevice *v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  CD3DDevice *v20; // rcx
  char *v21; // [rsp+38h] [rbp-19h]
  CD3DDevice *v22; // [rsp+48h] [rbp-9h] BYREF
  int v23; // [rsp+50h] [rbp-1h]
  __int64 v24; // [rsp+58h] [rbp+7h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v25; // [rsp+60h] [rbp+Fh]
  _DWORD v26[2]; // [rsp+68h] [rbp+17h] BYREF
  struct _LUID v27; // [rsp+70h] [rbp+1Fh] BYREF
  int v28; // [rsp+78h] [rbp+27h]
  int v29; // [rsp+7Ch] [rbp+2Bh]
  int v30; // [rsp+80h] [rbp+2Fh]
  char v31; // [rsp+84h] [rbp+33h]
  const char *v32; // [rsp+88h] [rbp+37h] BYREF
  int v33; // [rsp+90h] [rbp+3Fh]

  v1 = *((_DWORD *)this + 409);
  v3 = *((_DWORD *)this + 413);
  v24 = *(_QWORD *)((char *)this + 1644);
  v26[0] = v1;
  v26[1] = *((_DWORD *)this + 410);
  v25 = v3;
  if ( (_DWORD)v24 == 88 )
    v24 = 0x300000057LL;
  CDisplayManager::GetPrimaryAdapterLuid(this, &v27);
  v29 = 0;
  v28 = DisplayId::All;
  if ( IsDXGIColorSpaceHDR(v3) )
    v5 = (int)FLOAT_1_0;
  else
    v5 = 0;
  v22 = 0LL;
  v30 = v5;
  v31 = 0;
  Device = CDeviceManager::GetDevice(v4, v27, &v22);
  v8 = v22;
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Device, 0x13Au, 0LL);
  }
  else
  {
    v10 = (char *)this + 64;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v10);
    v22 = (CD3DDevice *)"DWM Scratch Rendertarget (capturebits)";
    v23 = 38;
    v11 = CD3DDevice::CreateRenderTargetBitmap(v8, &v22, v26, &v24, &v27, 1, v10);
    v9 = v11;
    if ( v11 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x142u, 0LL);
    v22 = 0LL;
    WarpDevice = CDeviceManager::GetWarpDevice(v14, &v22);
    v9 = WarpDevice;
    if ( WarpDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, WarpDevice, 0x148u, 0LL);
      v20 = v22;
      if ( !v22 )
        goto LABEL_7;
      goto LABEL_17;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v10);
    v21 = v10;
    v17 = v22;
    v32 = "DWM Scratch Rendertarget (capturebits)";
    v33 = 38;
    v18 = CD3DDevice::CreateRenderTargetBitmap(v22, &v32, v26, &v24, &v27, 1, v21);
    v9 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x14Fu, 0LL);
    if ( v17 )
    {
      v20 = v17;
LABEL_17:
      CD3DDevice::Release(v20);
    }
  }
LABEL_7:
  if ( v8 )
    CD3DDevice::Release(v8);
  return v9;
}
