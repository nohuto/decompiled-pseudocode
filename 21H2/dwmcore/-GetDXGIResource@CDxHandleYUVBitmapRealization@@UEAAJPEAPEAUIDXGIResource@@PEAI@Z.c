/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x1802A59C0
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18010C4F0 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802A57B0 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A5538 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1802B368C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(
        CD3DTexture **this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int DXGIResource; // eax
  __int64 v10; // rcx

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  v6 = CDxHandleYUVBitmapRealization::EnsureTexture((CDxHandleYUVBitmapRealization *)(this - 64));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x174u);
  }
  else
  {
    DXGIResource = CD3DTexture::GetDXGIResource(*(this - 17), a2);
    v8 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, DXGIResource, 0x176u);
    }
    else if ( a3 )
    {
      *a3 = *((_DWORD *)*(this - 17) + 37);
    }
  }
  return v8;
}
