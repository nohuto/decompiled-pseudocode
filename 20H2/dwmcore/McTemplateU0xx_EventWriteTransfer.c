/*
 * XREFs of McTemplateU0xx_EventWriteTransfer @ 0x180155E6C
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18007FCC0 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800CD52C (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800DC628 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800DCB9C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECB10 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3118 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3234 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801EEE60 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801EF258 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180223B4C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
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
