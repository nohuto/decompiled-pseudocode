/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180188AD4
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801896C8 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180033C64 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180037E78 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18004718C (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180065D28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIRenderTargetBitmap@@$0A@@@QEAAJPEFBQEAVIRenderTargetBitmap@@I@Z @ 0x180186A2C (-AddMultipleAndSet@-$DynArray@PEAVIRenderTargetBitmap@@$0A@@@QEAAJPEFBQEAVIRenderTargetBitmap@@I.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x180188458 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180188DD4 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023CF48 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 *v1; // r14
  _QWORD *v2; // r8
  __int64 v3; // rsi
  struct IDXGIResource *CurrentFrameBuffer; // rax
  struct IDXGIResource **v6; // r8
  struct IDXGIResource *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  CDeviceManager *v11; // rcx
  int Device; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // xmm0_4
  CD3DDevice *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  struct IDXGIResource *v20; // rax
  struct IDXGIResource **v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  CD3DDevice *v25; // rcx
  struct IDXGIResource *v27; // [rsp+40h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+38h] BYREF
  __int64 v30; // [rsp+98h] [rbp+40h] BYREF
  CD3DDevice *v31; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+50h] BYREF

  v32 = 0LL;
  v1 = (__int64 *)((char *)this + 1920);
  v2 = (_QWORD *)*((_QWORD *)this + 240);
  v3 = 0LL;
  v30 = 0LL;
  while ( 1 )
  {
    if ( v2 == (_QWORD *)v1[1] )
      goto LABEL_7;
    CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    if ( *v6 == CurrentFrameBuffer )
      break;
    v2 = v6 + 2;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v30, (__int64)v6[1]);
  v3 = v30;
  if ( v30 )
    goto LABEL_22;
LABEL_7:
  v7 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v32);
  v8 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
         v7,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v32);
  LODWORD(v29) = v8;
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x263u, 0LL);
    goto LABEL_30;
  }
  v31 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v31);
  Device = CDeviceManager::GetDevice(v11, *(struct _LUID *)((char *)this + 1896), &v31);
  LODWORD(v29) = Device;
  v10 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Device, 0x266u, 0LL);
    v25 = v31;
    if ( !v31 )
      goto LABEL_30;
    goto LABEL_28;
  }
  v30 = 0LL;
  if ( v3 )
  {
    v14 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 24)) )
    v16 = (int)FLOAT_2_0;
  else
    v16 = 0;
  v17 = v31;
  v18 = CD3DDevice::CreateRenderTargetBitmap(v31, v32, *((unsigned int *)this + 23), v15, DisplayId::All, v16, &v30);
  LODWORD(v29) = v18;
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x26Du, 0LL);
    if ( !v17 )
      goto LABEL_30;
    v25 = v17;
LABEL_28:
    CD3DDevice::Release(v25);
    goto LABEL_30;
  }
  v28[0] = 0LL;
  v20 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  v3 = v30;
  v27 = v20;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v28, v30);
  v21 = (struct IDXGIResource **)v1[1];
  if ( (((unsigned __int64)v21 - *v1) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    v22 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + 8LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 40LL))(v22, (char *)this + 1880);
    v21 = (struct IDXGIResource **)v1[1];
  }
  if ( (struct IDXGIResource **)v1[2] == v21 )
  {
    std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
      v1,
      (__int64)v21,
      &v27);
  }
  else
  {
    *v21 = v27;
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      v21 + 1,
      v28[0]);
    v1[1] += 16LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
  if ( v17 )
    CD3DDevice::Release(v17);
LABEL_22:
  v29 = v3;
  v23 = DynArray<IRenderTargetBitmap *,0>::AddMultipleAndSet((__int64)this + 1776, &v29);
  LODWORD(v29) = v23;
  v10 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x280u, 0LL);
  else
    v30 = 0LL;
LABEL_30:
  if ( v10 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v10, 0, &v29);
    v10 = v29;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  return (unsigned int)v10;
}
