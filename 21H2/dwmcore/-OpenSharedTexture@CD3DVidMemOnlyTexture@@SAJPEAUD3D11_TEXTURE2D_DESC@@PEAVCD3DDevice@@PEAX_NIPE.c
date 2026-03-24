/*
 * XREFs of ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18026D420
 * Callers:
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180265A9C (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003A2D4 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18026D328 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::OpenSharedTexture(
        struct D3D11_TEXTURE2D_DESC *a1,
        struct CD3DDevice *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        __int64 a4,
        unsigned int a5,
        struct CD3DVidMemOnlyTexture **a6)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  struct ID3D11Texture2D *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  v8 = CD3DDevice::OpenSharedTexture(a2, a1, a3, a3, 1, &v15);
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x94u, 0LL);
  }
  else
  {
    v12 = CD3DVidMemOnlyTexture::Create(v15, 0, v10, a2, a6);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9Au, 0LL);
    else
      *((_QWORD *)*a6 + 29) = a3;
  }
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->Release)(v15);
  return v11;
}
