/*
 * XREFs of McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18000EC4C (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18003F7A8 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18006A054 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078D88 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DC340 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z @ 0x18028ADE4 (-CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qqqq_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-19h] BYREF
  int *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  int *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 4LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v14 = &a6;
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 5u, &v7);
}
