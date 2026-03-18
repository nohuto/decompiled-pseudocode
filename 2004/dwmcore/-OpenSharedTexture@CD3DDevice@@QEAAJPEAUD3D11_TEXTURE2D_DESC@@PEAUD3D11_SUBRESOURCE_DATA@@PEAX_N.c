/*
 * XREFs of ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F000
 * Callers:
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x18003E9A0 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800E7C9C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023D0D0 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18026B540 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DDevice::OpenSharedTexture(
        CD3DDevice *this,
        struct D3D11_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void *a4,
        bool a5,
        struct ID3D11Texture2D **a6)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-58h]
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &OPEN_SHARED_TEXTURE_EVENT_Start, a4);
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 282);
  if ( v9 < 0 )
  {
    v15 = *((_DWORD *)this + 282);
    v16 = 2264;
  }
  else
  {
    v10 = (__int64 *)*((_QWORD *)this + 74);
    v11 = *v10;
    if ( a5 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v11 + 384))(
              v10,
              a4,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              a6);
      v9 = v12;
      if ( v12 >= 0 )
      {
LABEL_6:
        ((void (__fastcall *)(_QWORD, struct D3D11_TEXTURE2D_DESC *))(*a6)->lpVtbl->GetDesc)(*a6, a2);
        goto LABEL_7;
      }
      v16 = 2269;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v11 + 224))(
              v10,
              a4,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              a6);
      v9 = v12;
      if ( v12 >= 0 )
        goto LABEL_6;
      v16 = 2274;
    }
    v15 = v12;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v15, v16, 0LL);
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &OPEN_SHARED_TEXTURE_EVENT_Stop,
      v13,
      1LL,
      v17);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v9, 6LL);
}
