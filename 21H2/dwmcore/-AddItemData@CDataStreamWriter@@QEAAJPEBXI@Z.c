/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BF490
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001E2B0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001F2C0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x18005A1A0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18005D71C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x18005ED60 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800CFD30 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800D1FA0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800D4250 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1800DD030 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18014FF10 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1801501F0 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1801509B0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180151440 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180151550 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  int v3; // ebx
  CDataStreamWriter *v5; // rdi
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax

  v3 = 0;
  v5 = this;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && (this = (CDataStreamWriter *)*((_QWORD *)this + 4), *((_DWORD *)this + 4) - *((_DWORD *)this + 5) >= a3) )
  {
    if ( a3 )
    {
      memcpy_0((char *)this + *((unsigned int *)this + 5) + 24, a2, a3);
      v6 = *((_QWORD *)v5 + 4);
      v7 = -1;
      v8 = -1;
      v9 = *(_DWORD *)(v6 + 20);
      v10 = v9 + a3;
      if ( (unsigned int)v10 >= v9 )
        v8 = v9 + a3;
      v3 = (unsigned int)v10 < v9 ? 0x80070216 : 0;
      *(_DWORD *)(v6 + 20) = v8;
      if ( (unsigned int)v10 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x232u, 0LL);
      }
      else
      {
        v11 = *((unsigned int *)v5 + 11);
        v12 = v11 + a3;
        if ( (unsigned int)v11 + a3 >= (unsigned int)v11 )
          v7 = v11 + a3;
        v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
        *((_DWORD *)v5 + 11) = v7;
        if ( v12 < (unsigned int)v11 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x233u, 0LL);
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xC2u, 0LL);
      else
        *((_DWORD *)v5 + 14) += a3;
    }
  }
  else
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0xB6u, 0LL);
  }
  return (unsigned int)v3;
}
