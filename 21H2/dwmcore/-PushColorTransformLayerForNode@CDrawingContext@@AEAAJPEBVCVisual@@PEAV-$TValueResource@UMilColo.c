/*
 * XREFs of ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801B348C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800BA748 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1801AF500 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x1801AF918 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@PEAPEAV1@@Z @ 0x1801D8710 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayerForNode(
        CDrawingContext *this,
        struct CVisual *a2,
        __int64 a3)
{
  CColorSpaceLayer *v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorSpaceLayer *v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0xE3Cu);
  }
  else
  {
    v10 = CColorTransformLayer::Create(*((_QWORD *)this + 4), v15, a3, &v16);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xE41u);
      v4 = v16;
    }
    else
    {
      v4 = v16;
      v12 = CDrawingContext::PushLayer(this, a2, v16, 1, 1);
      v9 = v12;
      if ( v12 >= 0 )
        return v9;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xE47u);
    }
  }
  if ( v4 )
    CColorSpaceLayer::`vector deleting destructor'(v4, 1);
  return v9;
}
