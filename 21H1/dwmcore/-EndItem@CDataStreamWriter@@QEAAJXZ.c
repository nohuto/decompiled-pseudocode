/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B49B8
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001FCC0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180020BD0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180038BF4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x1800399E0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x1800C1AF0 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x1800C4D60 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800C6D50 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800C9190 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1800D0B70 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801532B0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180153590 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180153D50 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801547E0 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801548F0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int v2; // eax
  unsigned int v3; // r10d
  __int64 v4; // rdx
  int v5; // r11d
  int v6; // r10d
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v14; // rdx
  unsigned int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 6) && !*((_DWORD *)this + 14) )
  {
    v10 = -2147418113;
    v14 = 219LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)v10,
      v15);
    return v10;
  }
  v2 = *((_DWORD *)this + 14);
  v3 = (v2 + 3) & 0xFFFFFFFC;
  if ( v3 >= v2 )
  {
    v4 = *((_QWORD *)this + 4);
    v5 = -1;
    *((_DWORD *)this + 14) = v3;
    v6 = v3 - v2;
    v7 = -1;
    v8 = *(_DWORD *)(v4 + 20);
    v9 = v8 + v6;
    if ( (unsigned int)v9 >= v8 )
      v7 = v8 + v6;
    v10 = (unsigned int)v9 < v8 ? 0x80070216 : 0;
    *(_DWORD *)(v4 + 20) = v7;
    if ( (unsigned int)v9 < v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x232u, 0LL);
    }
    else
    {
      v11 = *((unsigned int *)this + 11);
      v12 = v11 + v6;
      if ( (int)v11 + v6 >= (unsigned int)v11 )
        v5 = v11 + v6;
      v10 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      *((_DWORD *)this + 11) = v5;
      if ( v12 >= (unsigned int)v11 )
      {
        **((_DWORD **)this + 6) = *((_DWORD *)this + 14);
        *((_QWORD *)this + 6) = 0LL;
        *((_DWORD *)this + 14) = 0;
        return 0LL;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x233u, 0LL);
    }
    v14 = 243LL;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEE,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)0x80070216LL,
    v15);
  return 2147942934LL;
}
