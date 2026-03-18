/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x1800688DC
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001F2E0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180020280 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180067170 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180069DE0 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800CB4D0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CD740 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800CF9A0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1800D8510 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18014F830 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18014FB10 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801502D0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180150D60 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180150E70 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180068F14 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BB2B0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800BC038 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x1800D4910 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CChannel::BeginCommand(CDataStreamWriter **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebp
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebp
  int Recorder; // eax

  v4 = a3 + a4;
  if ( a3 + a4 < a3 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0x99u, 0LL);
  }
  else
  {
    if ( this[20] || (Recorder = CChannel::CreateRecorder((CChannel *)this), v10 = Recorder, Recorder >= 0) )
    {
      if ( v4 + 4 < v4 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0x165u, 0LL);
      }
      else
      {
        v8 = CDataStreamWriter::EnsureSize(this[20], v4 + 4);
        v10 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x167u, 0LL);
      }
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x107u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, Recorder, 0x101u, 0LL);
    }
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x9Au, 0LL);
    }
    else
    {
      CDataStreamWriter::BeginItem(this[20]);
      CDataStreamWriter::AddItemData(this[20], a2, a3);
    }
  }
  return v11;
}
