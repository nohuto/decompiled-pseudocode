/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180261FB8
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F3380 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTarge.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E174 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E370 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262474 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int updated; // eax
  __int64 v10; // rcx
  int DeviceTexture; // eax
  __int64 v12; // rcx

  *a3 = 0LL;
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this - 14))((char *)this - 112) )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 480));
    v8 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x7Bu, 0LL);
    }
    else
    {
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(
                        (CRenderTargetBitmap *)(*((_QWORD *)this - 28) + 240LL),
                        a2,
                        a3);
      v8 = DeviceTexture;
      if ( DeviceTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, DeviceTexture, 0x7Eu, 0LL);
    }
  }
  else
  {
    v6 = CDxHandleBitmapRealization::GetDeviceTexture(
           (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 48),
           a2,
           a3);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x77u, 0LL);
  }
  return v8;
}
