/*
 * XREFs of McTemplateU0xx_EventWriteTransfer @ 0x180111D6E
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180078EAC (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800E59F0 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180299F98 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG McTemplateU0xx_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-48h] BYREF
  va_list v4; // [rsp+40h] [rbp-38h]
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  va_list v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, _QWORD);
  va_copy(v4, va);
  v6 = 0;
  v5 = 8;
  va_copy(v7, va1);
  v9 = 0;
  v8 = 8;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, v11, 3u, &v3);
}
