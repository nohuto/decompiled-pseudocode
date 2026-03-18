/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4
 * Callers:
 *     ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800188C0 (-GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18006DA50 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18006F450 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x180070090 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x1800705D0 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
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
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800BD6D0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x1800BD7E4 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800D0788 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CChannel::BeginCommand(CDataStreamWriter **this, void *a2, unsigned int a3, int a4)
{
  size_t v4; // r14
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // r15d
  int v11; // ebx
  unsigned int v12; // esi
  CDataStreamWriter *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  int Recorder; // eax
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  void *v20; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3;
  v7 = a3 + a4;
  if ( a3 + a4 < a3 )
  {
    v11 = -2147024362;
    v12 = -2147024362;
    v19 = 151;
    goto LABEL_17;
  }
  if ( !this[20] )
  {
    Recorder = CChannel::CreateRecorder((CChannel *)this);
    v11 = Recorder;
    if ( Recorder < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, Recorder, 0xFFu, 0LL);
      v12 = v11;
LABEL_15:
      v19 = 152;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, v19, 0LL);
      return v12;
    }
  }
  if ( v7 + 4 < v7 )
  {
    v11 = -2147024362;
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x17Au, 0LL);
    goto LABEL_14;
  }
  v8 = CDataStreamWriter::EnsureSize(this[20], v7 + 4);
  v10 = v8;
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x17Cu, 0LL);
LABEL_14:
    v12 = v11;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v10, 0x105u, 0LL);
    goto LABEL_15;
  }
  v12 = v8;
  CDataStreamWriter::BeginItem(this[20]);
  if ( (_DWORD)v4 )
  {
    v13 = this[20];
    v20 = 0LL;
    v14 = CDataStreamWriter::GetItemDataWritePointer(v13, v4, &v20);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB2u, 0LL);
    else
      memcpy_0(v20, a2, v4);
  }
  return v12;
}
