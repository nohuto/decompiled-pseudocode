/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023EDF0
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018B6A8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003A2D4 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D09C8 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023EC68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        CD3DDevice *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        struct IRenderTargetBitmap **a8)
{
  int v11; // ebx
  struct D3D11_SUBRESOURCE_DATA *v12; // r8
  int RenderTargetBitmap; // eax
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-88h]
  struct ID3D11Texture2D *v17; // [rsp+40h] [rbp-68h] BYREF
  struct D3D11_TEXTURE2D_DESC v18; // [rsp+48h] [rbp-60h] BYREF

  v17 = 0LL;
  *a8 = 0LL;
  v11 = *((_DWORD *)a1 + 282);
  if ( v11 < 0 )
  {
    v14 = *((_DWORD *)a1 + 282);
    v16 = 1604;
    goto LABEL_8;
  }
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v17);
  RenderTargetBitmap = CD3DDevice::OpenSharedTexture(a1, &v18, v12, a2, 0, &v17);
  v11 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v16 = 1612;
    goto LABEL_5;
  }
  RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap((__int64)a1, (__int64)v17, a4, a5, a6, a7, a8);
  v11 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v16 = 1619;
LABEL_5:
    v14 = RenderTargetBitmap;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, &dword_1802F0D88, 2u, v14, v16, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return (unsigned int)v11;
}
