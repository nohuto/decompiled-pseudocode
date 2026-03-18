/*
 * XREFs of memcmp_0 @ 0x1800EED0F
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180011820 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180017DC0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180030704 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?ConfigureSampler@CRenderingTechnique@@QEAAXIW4Enum@InterpolationMode@@PEAUShaderLinkingSamplerDesc@@AEBUSurfaceSamplerData@1@@Z @ 0x18004E100 (-ConfigureSampler@CRenderingTechnique@@QEAAXIW4Enum@InterpolationMode@@PEAUShaderLinkingSamplerD.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800607D0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180083A10 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180088308 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800884C8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800904B4 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009DDBC (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009FF00 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800BA9D8 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EBB00 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18017CEA4 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x18017E7E4 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801858B8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18018D044 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019E16C (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801A8900 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801B2D5C (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B6974 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801FD1D4 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801FF99C (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     IsSolidColorSurface @ 0x18020FC30 (IsSolidColorSurface.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18023791C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
