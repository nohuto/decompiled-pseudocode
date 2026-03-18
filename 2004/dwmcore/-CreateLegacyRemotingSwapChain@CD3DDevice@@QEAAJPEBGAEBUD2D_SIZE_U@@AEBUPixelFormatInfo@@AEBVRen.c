/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DFB84
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DF990 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CC84 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180088C94 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800938F8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DFCB8 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGPEAVIRenderTargetBitmap@@PEAXPEAPEAVILe.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023CF48 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        unsigned __int16 *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  char *v9; // rsi
  signed int v10; // ebx
  __int64 *v11; // rcx
  int v12; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct D3D11_SUBRESOURCE_DATA *v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  HANDLE v22; // rax
  signed int LastError; // eax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v31; // [rsp+40h] [rbp-C0h] BYREF
  struct IRenderTargetBitmap *v32; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-A8h] BYREF
  struct ILegacyRemotingSwapChain **v35; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  _DWORD v41[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B4h] [rbp-4Ch]
  int v43; // [rsp+BCh] [rbp-44h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  WCHAR Name[64]; // [rsp+E0h] [rbp-20h] BYREF

  v36 = a2;
  v35 = a6;
  *a6 = 0LL;
  v9 = 0LL;
  v10 = *((_DWORD *)this + 282);
  v32 = 0LL;
  hObject = 0LL;
  if ( v10 < 0 )
  {
    v28 = v10;
    v30 = 65;
    goto LABEL_32;
  }
  v11 = (__int64 *)*((_QWORD *)this + 76);
  if ( !v11 || (*((_BYTE *)this + 964) & 4) == 0 )
  {
    DWORD2(v34) = 28;
    *(_QWORD *)&v34 = "DWM LegacyRemoting SwapChain";
    v12 = CD3DDevice::CreateRenderTargetBitmap(this, (const struct CResourceTag *)&v34, a3, a4, a5, 0, &v32);
    v10 = v12;
    if ( v12 < 0 )
    {
      v30 = 124;
LABEL_30:
      v28 = v12;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802AB078, 2u, v28, v30, 0LL);
      goto LABEL_5;
    }
LABEL_4:
    v12 = CLegacyRemotingSwapChain::Create(this, v36, v32, v9, v35);
    v10 = v12;
    if ( v12 >= 0 )
      goto LABEL_5;
    v30 = 132;
    goto LABEL_30;
  }
  v40 = 0LL;
  v39 = 2;
  v14 = *v11;
  v31 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v14 + 24))(v11, &v39);
  v10 = v15;
  if ( v15 < 0 )
  {
    v29 = 76;
    goto LABEL_20;
  }
  DWORD2(v34) = 28;
  v41[2] = 1;
  *(_QWORD *)&v34 = "DWM LegacyRemoting SwapChain";
  v41[0] = a3->width;
  v41[1] = a3->height;
  v17 = *(_DWORD *)a4;
  v41[3] = 1;
  v42 = 1LL;
  v41[4] = v17;
  v43 = 0;
  v46 = v34;
  v44 = 40LL;
  v45 = 2;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v31);
  v19 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v41, v18, &v31);
  v10 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802AB078, 2u, v19, 0x5Cu, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    v27 = *((_QWORD *)this + 76);
    v37 = 3;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 24LL))(v27, &v37);
    goto LABEL_6;
  }
  v21 = *((_QWORD *)this + 76);
  v37 = 3;
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v37);
  v10 = v15;
  if ( v15 < 0 )
  {
    v29 = 96;
    goto LABEL_20;
  }
  v15 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v38);
  v10 = v15;
  if ( v15 < 0 )
  {
    v29 = 102;
LABEL_20:
    v24 = v15;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802AB078, 2u, v24, v29, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_5;
  }
  SetLastError(0);
  v22 = OpenFileMappingW(0xF001Fu, 0, Name);
  if ( !v22 )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    v29 = 107;
    if ( v10 >= 0 )
      v10 = -2003304445;
    v24 = v10;
    goto LABEL_21;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    v22);
  v25 = CD3DDevice::CreateRenderTargetBitmap(
          this,
          v31,
          *((unsigned int *)a4 + 1),
          *((unsigned int *)a4 + 2),
          *((_DWORD *)a5 + 2),
          *((_DWORD *)a5 + 4),
          &v32);
  v10 = v25;
  if ( v25 >= 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
    v9 = (char *)hObject;
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1802AB078, 2u, v25, 0x73u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
  v9 = (char *)hObject;
LABEL_6:
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
LABEL_5:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
  return (unsigned int)v10;
}
