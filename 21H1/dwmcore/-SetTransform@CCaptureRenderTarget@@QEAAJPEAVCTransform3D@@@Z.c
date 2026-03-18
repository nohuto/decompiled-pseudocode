/*
 * XREFs of ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x18018C35C
 * Callers:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801BACAC (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x1801BAEE4 (-ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLE.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801BB050 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CResource::RegisterNotifier((CResource *)this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xBEu, 0LL);
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
    this[18] = a2;
  }
  return v6;
}
