/*
 * XREFs of ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18026B448
 * Callers:
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180264420 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18026B540 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800D1080 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x18026B358 (--0CD3DVidMemOnlyTexture@@IEAA@_N@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18026B8C0 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::Create(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        __int64 a3,
        struct CD3DDevice *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DVidMemOnlyTexture *v8; // rax
  bool v9; // dl
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx

  *a5 = 0LL;
  v8 = (CD3DVidMemOnlyTexture *)operator new(0x100uLL);
  if ( v8 )
    v11 = (volatile signed __int32 *)CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(v8, v9);
  else
    v11 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v13 = CD3DTexture::Init((CD3DTexture *)v11, (struct CD3DDevice *)((char *)a4 + 1136), a1, a2);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x10Bu, 0LL);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0xCBu, 0LL);
      CMILPoolResource::Release((CMILPoolResource *)v11);
    }
    else
    {
      *a5 = (struct CD3DVidMemOnlyTexture *)v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xC3u, 0LL);
  }
  return (unsigned int)v12;
}
