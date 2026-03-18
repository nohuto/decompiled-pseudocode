/*
 * XREFs of ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800196E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x180019794 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x180021760 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180046C80 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18004B860 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180058320 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x18009D9C8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009DCD8 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x18009DD30 (-ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPE.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     LoadShaderBody @ 0x18009F134 (LoadShaderBody.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18009F46C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x18009F6C4 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009F70C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1800A02CC (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0AAC (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800A1078 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800A2548 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800A2638 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x1800A2A40 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800A2D84 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x1800A4B54 (-DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800A52F8 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B89A4 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800C4AF4 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800C4C84 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CCustomBlur@@MEAA@XZ @ 0x1800D064C (--1CCustomBlur@@MEAA@XZ.c)
 *     ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800D0758 (-Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z.c)
 *     ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x1800D1960 (-ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ.c)
 *     ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x1800D23F0 (--_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801949A8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A0CFC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BFDE4 (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801E3AB4 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x180222DEC (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025E720 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025E8E4 (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x18025EA70 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180260380 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1802611A8 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ?erase@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@Z @ 0x18026B4B4 (-erase@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$al.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
