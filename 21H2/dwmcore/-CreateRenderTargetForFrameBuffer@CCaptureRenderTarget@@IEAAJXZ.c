/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C427C
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801C5904 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC84 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x1800BAB20 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1801C3AE0 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801C4B6C (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D638 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x18027DAF4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 *v1; // r12
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct IDXGIResource *CurrentFrameBuffer; // rbx
  int v8; // eax
  CDeviceManager *v9; // rcx
  int v10; // esi
  struct _LUID v11; // rdx
  int Device; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  float v15; // xmm0_4
  CD3DDevice *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  CD3DDevice *v19; // rcx
  enum DXGI_COLOR_SPACE_TYPE v20; // ecx
  int StereoRenderTargetBitmap; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct IDXGIResource *v24; // rax
  struct IDXGIResource **v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // r15d
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // ebx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v42; // [rsp+40h] [rbp-38h] BYREF
  CD3DDevice *v43; // [rsp+48h] [rbp-30h] BYREF
  struct IDXGIResource *v44; // [rsp+50h] [rbp-28h] BYREF
  __int64 v45[4]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v48; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+60h] BYREF

  v1 = (__int64 *)((char *)this + 1904);
  v2 = *((_QWORD *)this + 238);
  v3 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  while ( 1 )
  {
    if ( v2 == v1[1] )
      goto LABEL_7;
    if ( *(struct IDXGIResource **)v2 == CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
      break;
    v2 += 24LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v47, *(_QWORD *)(v2 + 8));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v48, *(_QWORD *)(v2 + 16));
  v6 = v47;
  v3 = v48;
  if ( v47 )
    goto LABEL_26;
LABEL_7:
  CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v49);
  v8 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))CurrentFrameBuffer->lpVtbl->QueryInterface)(
         CurrentFrameBuffer,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v49);
  LODWORD(v46) = v8;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = (struct _LUID)*((_QWORD *)this + 235);
    v43 = 0LL;
    Device = CDeviceManager::GetDevice(v9, v11, &v43);
    LODWORD(v46) = Device;
    v10 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, Device, 0x289u);
      v19 = v43;
      if ( !v43 )
        goto LABEL_47;
      goto LABEL_45;
    }
    if ( *((_BYTE *)this + 1898) )
    {
      v20 = *((_DWORD *)this + 30);
      v42 = 0LL;
      IsDXGIColorSpaceHDR(v20);
      v16 = v43;
      StereoRenderTargetBitmap = CD3DDevice::CreateStereoRenderTargetBitmap(v43, v49, *((unsigned int *)this + 29));
      LODWORD(v46) = StereoRenderTargetBitmap;
      v10 = StereoRenderTargetBitmap;
      if ( StereoRenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, StereoRenderTargetBitmap, 0x29Cu);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
        goto LABEL_15;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v47, 0LL);
      v23 = ((__int64 (__fastcall *)(_QWORD))*MEMORY[0])(0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v48, v23);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
      v3 = v48;
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v47);
      if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 30)) )
        v15 = FLOAT_2_0;
      else
        v15 = 0.0;
      v16 = v43;
      v17 = CD3DDevice::CreateRenderTargetBitmap(
              v43,
              v49,
              *((unsigned int *)this + 29),
              v14,
              DisplayId::All,
              LODWORD(v15),
              &v47);
      LODWORD(v46) = v17;
      v10 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x292u);
LABEL_15:
        if ( !v16 )
          goto LABEL_47;
        v19 = v16;
LABEL_45:
        CD3DDevice::Release(v19);
        goto LABEL_47;
      }
    }
    *(_OWORD *)v45 = 0LL;
    v24 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    v6 = v47;
    v44 = v24;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v45, v47);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v45[1], v3);
    v25 = (struct IDXGIResource **)v1[1];
    if ( v25 == (struct IDXGIResource **)*v1 )
    {
      v26 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL) + 8LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 40LL))(v26, (char *)this + 1864);
      v25 = (struct IDXGIResource **)v1[1];
    }
    if ( v25 == *((struct IDXGIResource ***)this + 240) )
    {
      std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        v1,
        (__int64)v25,
        &v44);
    }
    else
    {
      v27 = v45[0];
      *v25 = v44;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
        v25 + 1,
        v27);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
        v25 + 2,
        v45[1]);
      v1[1] += 24LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v45[1]);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v45);
    if ( v16 )
      CD3DDevice::Release(v16);
LABEL_26:
    v28 = (_QWORD *)((char *)this + 1760);
    v46 = v6;
    v29 = *((_DWORD *)this + 446);
    v30 = v29 + 1;
    if ( v29 + 1 < v29 )
    {
      v10 = -2147024362;
      v31 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_35:
      LODWORD(v46) = v10;
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x2B4u);
      goto LABEL_47;
    }
    if ( v30 > *((_DWORD *)this + 445) )
    {
      v38 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 1760, 8u, 1, &v46);
      v31 = v38;
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v38, 0xC0u);
        goto LABEL_35;
      }
    }
    else
    {
      v33 = *((unsigned int *)this + 446);
      *(_QWORD *)(*v28 + 8 * v33) = v6;
      v10 = 0;
      *((_DWORD *)this + 446) = v30;
    }
    LODWORD(v46) = v10;
    if ( *((_BYTE *)this + 1898) )
    {
      v34 = *((unsigned int *)this + 446);
      v46 = v3;
      v35 = v34 + 1;
      if ( (int)v34 + 1 < (unsigned int)v34 )
      {
        v10 = -2147024362;
        v36 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_40:
        LODWORD(v46) = v10;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, v36, 0x2B7u);
        goto LABEL_47;
      }
      if ( v35 > *((_DWORD *)this + 445) )
      {
        v39 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 1760, 8u, 1, &v46);
        v36 = v39;
        v10 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0xC0u);
          goto LABEL_40;
        }
        LODWORD(v46) = v39;
      }
      else
      {
        v10 = 0;
        *(_QWORD *)(*v28 + 8 * v34) = v3;
        *((_DWORD *)this + 446) = v35;
        LODWORD(v46) = 0;
      }
    }
    v47 = 0LL;
    v48 = 0LL;
    goto LABEL_47;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0LL, v8, 0x286u);
LABEL_47:
  if ( v10 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v10, 0, &v46);
    v10 = v46;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v48);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v49);
  return (unsigned int)v10;
}
