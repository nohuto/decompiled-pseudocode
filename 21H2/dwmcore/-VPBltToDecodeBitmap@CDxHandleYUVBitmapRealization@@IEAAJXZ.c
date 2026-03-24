/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802667B8
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180265C54 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180265FDC (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180030A40 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x180265C24 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x180265FC0 (-GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180266464 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18026695C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180266B40 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  CDxHandleYUVBitmapRealization *v1; // rbx
  int v3; // eax
  bool IsHardwareProtected; // al
  int v5; // ecx
  CDecodeBitmap *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]
  bool v19; // [rsp+64h] [rbp-Ch]
  struct D2D_SIZE_U v20; // [rsp+80h] [rbp+10h] BYREF

  v1 = (CDxHandleYUVBitmapRealization *)((char *)this + 456);
  v20 = *(struct D2D_SIZE_U *)((char *)this + 188);
  CDxHandleYUVBitmapRealization::GetAdapterLuid((CDxHandleYUVBitmapRealization *)((char *)this + 456), &v15);
  v3 = *((_DWORD *)this + 62);
  v17 = 0;
  v18 = 0;
  v16 = v3;
  IsHardwareProtected = CDxHandleYUVBitmapRealization::IsHardwareProtected(v1);
  v5 = *((_DWORD *)this + 35);
  v19 = IsHardwareProtected;
  if ( IsDXGIColorSpaceRec2020(v5) && *((int *)CDxHandleYUVBitmapRealization::GetDevice(v1) + 156) >= 40960 )
  {
    v18 = (int)FLOAT_1_0;
    LODWORD(v13) = 10;
    v14 = 1;
  }
  else
  {
    v14 = 0;
    LODWORD(v13) = 28;
  }
  v6 = (CDecodeBitmap *)*((_QWORD *)this + 32);
  HIDWORD(v13) = 3;
  v7 = CDecodeBitmap::EnsureTargetBitmap(
         v6,
         &v20,
         (const struct PixelFormatInfo *)&v13,
         (const struct RenderTargetInfo *)&v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1E4u, 0LL);
  }
  else
  {
    v10 = CDecodeBitmap::VideoProcessorBlt(
            *((_QWORD *)this + 32) + 120LL,
            *(_QWORD *)(*((_QWORD *)this + 43) + 112LL),
            *((unsigned int *)this + 60),
            *((unsigned int *)this + 35),
            (char *)this + 144,
            1,
            0LL,
            (char *)this + 196,
            v13,
            v14);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1F3u, 0LL);
  }
  return v9;
}
