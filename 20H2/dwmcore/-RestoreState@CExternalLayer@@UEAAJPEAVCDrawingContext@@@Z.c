/*
 * XREFs of ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DFC0
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180006500 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FE30 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DCA0 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DD30 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018F7A0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018FDB0 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180190DC0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801914B0 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180192E10 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001AA98 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18004AD5C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18004D620 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x18004E0F4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A5C8 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  char v7; // dl
  int v8; // eax
  unsigned int v9; // ecx
  _BYTE v11[64]; // [rsp+30h] [rbp-78h] BYREF
  int v12; // [rsp+70h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp-28h] BYREF

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start,
      a3,
      1u,
      &v13);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    *((_QWORD *)a2 + 742) = v6;
  if ( *((_BYTE *)this + 34) )
  {
    CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 936), 0);
    *((_BYTE *)a2 + 5954) = 1;
    *((_BYTE *)this + 34) = v7;
  }
  if ( *((_BYTE *)this + 33) )
  {
    v8 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD3u, 0LL);
  }
  if ( *((_BYTE *)this + 32) )
  {
    v12 = 0;
    CMILMatrix::SetToInverse((CMILMatrix *)v11, (CExternalLayer *)((char *)this + 48));
    CDrawingContext::UpdateDeviceTransform(a2, (const struct CMILMatrix *)v11, 0LL);
    CDrawingContext::PopTransformInternal(a2, 0);
    *((_BYTE *)this + 32) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      a3,
      1u,
      &v13);
  return v3;
}
