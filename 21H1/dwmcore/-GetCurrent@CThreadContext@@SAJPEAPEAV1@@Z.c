/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18004C550
 * Callers:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18000FBD0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180010550 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180013618 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x1800209EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x1800349B4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x1800349E4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180036940 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListCache@@@Z @ 0x18003A400 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListCache@@@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18004A940 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z @ 0x18004A9D0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18004AA04 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18004AB00 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x18004B0A0 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18004B150 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18004B710 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18004C2DC (PrimitiveStorage--Alloc_16_.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004D2B0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180055150 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B4B0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062E20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180064D30 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeConte.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800A6DC8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800ADE1C (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BB048 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x180212820 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x1802128FC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x180212938 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800D0018 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  unsigned int v2; // edi
  CThreadContext *Value; // rbx
  CThreadContext *v5; // rax
  __int64 v6; // rcx

  v2 = 0;
  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)operator new(0x118uLL);
    if ( v5 )
      Value = CThreadContext::CThreadContext(v5);
    else
      Value = 0LL;
    if ( !Value )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x42u, 0LL);
      return v2;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  *a1 = Value;
  return v2;
}
