/*
 * XREFs of ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x180046814
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800466E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@IPEAPEAV1@@Z @ 0x180046954 (-Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180046E74 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180082FD8 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateD2DBitmap(
        __int64 a1,
        void *a2,
        bool a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  int v12; // ebx
  struct D3D11_SUBRESOURCE_DATA *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-99h]
  struct ID3D11Texture2D *v22[2]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-59h] BYREF
  int v24; // [rsp+68h] [rbp-51h]
  int v25; // [rsp+6Ch] [rbp-4Dh]
  int v26; // [rsp+70h] [rbp-49h]
  __int64 v27; // [rsp+74h] [rbp-45h]
  int v28; // [rsp+7Ch] [rbp-3Dh]
  D3D11_TEXTURE2D_DESC v29; // [rsp+80h] [rbp-39h] BYREF

  v22[0] = 0LL;
  v27 = 0LL;
  v28 = 0;
  *a9 = 0LL;
  v12 = *(_DWORD *)(a1 + 1128);
  memset(&v29, 0, sizeof(v29));
  if ( v12 < 0 )
  {
    v20 = v12;
    v21 = 1391;
    goto LABEL_9;
  }
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v22);
  v15 = CD3DDevice::OpenSharedTexture((CD3DDevice *)a1, &v29, v14, a2, a3, v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1397;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(a1 + 224);
  v26 = 0;
  v22[1] = (struct ID3D11Texture2D *)__PAIR64__(a4, v29.Format);
  v23 = __PAIR64__(a4, v29.Format);
  v24 = a7;
  v25 = a8;
  v15 = CD2DBitmap::Create(v17, v16, v22[0], &v29, &v23, a5, a6);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1418;
LABEL_7:
    v20 = v15;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802AA538, 2u, v20, v21, 0LL);
  }
  v18 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v12, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v22);
  return v18;
}
