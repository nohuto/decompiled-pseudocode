/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x180067084
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802A6874 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18006A66C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18006B4E0 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct IDeviceTextureTarget **a6)
{
  __int128 v8; // xmm0
  bool v9; // cf
  struct D3D11_SUBRESOURCE_DATA *v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int v20; // [rsp+28h] [rbp-81h]
  int v21; // [rsp+30h] [rbp-79h]
  struct ID3D11Texture2D *v22; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v23[5]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v24; // [rsp+6Ch] [rbp-3Dh]
  int v25; // [rsp+74h] [rbp-35h]
  struct D2D_SIZE_U v26; // [rsp+80h] [rbp-29h] BYREF
  int v27; // [rsp+88h] [rbp-21h]
  int v28; // [rsp+8Ch] [rbp-1Dh]
  int v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+94h] [rbp-15h]
  int v31; // [rsp+98h] [rbp-11h]
  int v32; // [rsp+9Ch] [rbp-Dh]
  int v33; // [rsp+A0h] [rbp-9h]
  int v34; // [rsp+A4h] [rbp-5h]
  int v35; // [rsp+A8h] [rbp-1h]
  __int128 v36; // [rsp+B0h] [rbp+7h]

  v22 = 0LL;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v24 = 0LL;
  v25 = 0;
  *a6 = 0LL;
  v8 = *(_OWORD *)a2;
  v26 = *a3;
  v29 = *(_DWORD *)a4;
  v9 = *((_BYTE *)a5 + 20) != 0;
  v27 = 1;
  v36 = v8;
  v28 = 1;
  v30 = 1;
  v35 = v9 ? 0x80000 : 0;
  v33 = 40;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v22);
  v11 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v26, v10, &v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802E18D0, 2u, v11, 0x4ADu, 0LL);
  }
  else
  {
    v14 = *((_DWORD *)a4 + 1);
    v15 = *((_DWORD *)a4 + 2);
    v21 = *((_DWORD *)a5 + 4);
    v23[0] = v29;
    v20 = *((_DWORD *)a5 + 2);
    v23[1] = v14;
    v16 = *((_QWORD *)this + 23);
    v23[2] = 1119879168;
    v23[3] = 1119879168;
    v23[4] = 1;
    v17 = CDeviceTextureTarget::Create(v16, v22, &v26, v23, v15, v20, v21, 0, a6);
    v13 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802E18D0, 2u, v17, 0x4BEu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return v13;
}
