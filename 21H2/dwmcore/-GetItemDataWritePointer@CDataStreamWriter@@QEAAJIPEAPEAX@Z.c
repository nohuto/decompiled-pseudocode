/*
 * XREFs of ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C
 * Callers:
 *     ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800188C0 (-GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18006DA50 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18006F450 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x180070090 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x1800705D0 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180070ED0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801A9E30 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801AA980 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1801AAD90 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801AB660 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1801ABB90 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801AC7F0 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801ACA20 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801ACDB0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x1800BD694 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::GetItemDataWritePointer(CDataStreamWriter *this, unsigned int a2, void **a3)
{
  CDataStreamWriter *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = this;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && a2
    && (this = (CDataStreamWriter *)*((_QWORD *)this + 4), *((_DWORD *)this + 4) - *((_DWORD *)this + 5) >= a2) )
  {
    *a3 = (char *)this + *((unsigned int *)this + 5) + 24;
    v5 = CDataStreamWriter::IncreaseWrittenByteCount(v4, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0xD8u);
    else
      *((_DWORD *)v4 + 14) += a2;
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147418113, 0xD1u);
  }
  return v7;
}
