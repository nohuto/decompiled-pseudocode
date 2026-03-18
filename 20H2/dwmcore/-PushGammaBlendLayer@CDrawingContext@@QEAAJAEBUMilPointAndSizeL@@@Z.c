/*
 * XREFs of ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x180177D90
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1DF8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x18006C2B0 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006D6D4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x180191390 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushGammaBlendLayer(struct IDeviceTarget **this, const struct MilPointAndSizeL *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  COffScreenRenderingLayer *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = CGammaBlendLayer::Create(this[4], a2, &v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xE71u, 0LL);
  }
  else
  {
    v6 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v9, 1, 0);
    v5 = v6;
    if ( v6 >= 0 )
      return v5;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE77u, 0LL);
  }
  if ( v9 )
    COffScreenRenderingLayer::`vector deleting destructor'(v9, 1);
  return v5;
}
