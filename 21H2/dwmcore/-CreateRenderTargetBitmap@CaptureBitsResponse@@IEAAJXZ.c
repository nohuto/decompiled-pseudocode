/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003083C
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180043474 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180030A18 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180031074 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F200 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FAE0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180060864 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180238C6C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // edi
  int v4; // xmm0_4
  CDeviceManager *v5; // rcx
  int Device; // eax
  unsigned int v7; // ecx
  CD3DDevice *v8; // rdi
  unsigned int v9; // esi
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // rcx
  CDeviceManager *v16; // rcx
  int WarpDevice; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  CD3DDevice *v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  CD3DDevice *v24; // rcx
  _QWORD *v25; // [rsp+38h] [rbp-19h]
  CD3DDevice *v26; // [rsp+48h] [rbp-9h] BYREF
  int v27; // [rsp+50h] [rbp-1h]
  __int64 v28; // [rsp+58h] [rbp+7h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v29; // [rsp+60h] [rbp+Fh]
  _DWORD v30[2]; // [rsp+68h] [rbp+17h] BYREF
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
  v30[0] = v1;
  v30[1] = *((_DWORD *)this + 418);
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
  v10 = (_QWORD *)((char *)this + 64);
  v11 = *v10;
  *v10 = 0LL;
  if ( v11 )
  {
    v15 = v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v26 = (CD3DDevice *)"DWM Scratch Rendertarget (capturebits)";
  v27 = 38;
  v12 = CD3DDevice::CreateRenderTargetBitmap(v8, &v26, v30, &v28, &v31, 1, v10);
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
        v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v25 = v10;
      v21 = v26;
      v36 = "DWM Scratch Rendertarget (capturebits)";
      v37 = 38;
      v22 = CD3DDevice::CreateRenderTargetBitmap(v26, &v36, v30, &v28, &v31, 1, v25);
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
