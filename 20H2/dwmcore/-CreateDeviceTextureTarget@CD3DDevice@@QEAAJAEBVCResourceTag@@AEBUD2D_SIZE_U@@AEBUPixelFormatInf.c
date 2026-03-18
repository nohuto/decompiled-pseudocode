/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D2964
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BC74 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180263CAC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800476AC (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18004963C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        struct CD2DResourceManager **this,
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
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // xmm0_4
  struct CD2DResourceManager *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  void *v20; // [rsp+20h] [rbp-89h]
  int v21; // [rsp+28h] [rbp-81h]
  struct ID3D11Texture2D *v22; // [rsp+50h] [rbp-59h] BYREF
  __int64 v23; // [rsp+58h] [rbp-51h]
  __int128 v24; // [rsp+60h] [rbp-49h] BYREF
  int v25; // [rsp+70h] [rbp-39h]
  __int64 v26; // [rsp+74h] [rbp-35h]
  int v27; // [rsp+7Ch] [rbp-2Dh]
  struct D2D_SIZE_U v28; // [rsp+80h] [rbp-29h] BYREF
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  int v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+94h] [rbp-15h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]
  int v35; // [rsp+A0h] [rbp-9h]
  int v36; // [rsp+A4h] [rbp-5h]
  int v37; // [rsp+A8h] [rbp-1h]
  __int128 v38; // [rsp+B0h] [rbp+7h]

  v22 = 0LL;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v26 = 0LL;
  v27 = 0;
  *a6 = 0LL;
  v8 = *(_OWORD *)a2;
  v28 = *a3;
  v31 = *(_DWORD *)a4;
  v9 = *((_BYTE *)a5 + 20) != 0;
  v29 = 1;
  v38 = v8;
  v30 = 1;
  v32 = 1;
  v37 = v9 ? 0x80000 : 0;
  v35 = 40;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v11 = CD3DDevice::CreateTexture((CD3DDevice *)this, (const struct DWM_TEXTURE2D_DESC *)&v28, v10, &v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802AA538, 2u, v11, 0x67Cu, 0LL);
  }
  else
  {
    v14 = *((_DWORD *)a4 + 2);
    v15 = *((_DWORD *)a5 + 4);
    v16 = this[28];
    LODWORD(v23) = v31;
    HIDWORD(v23) = *((_DWORD *)a4 + 1);
    *(_QWORD *)&v24 = v23;
    v21 = *((_DWORD *)a5 + 2);
    LODWORD(v20) = v14;
    *((_QWORD *)&v24 + 1) = 0x42C0000042C00000LL;
    v25 = 1;
    v17 = CDeviceTextureTarget::Create(v16, (__int64)v22, (__int64)&v28, &v24, v20, v21, v15, 0, (unsigned __int64 *)a6);
    v13 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802AA538, 2u, v17, 0x68Du, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return v13;
}
