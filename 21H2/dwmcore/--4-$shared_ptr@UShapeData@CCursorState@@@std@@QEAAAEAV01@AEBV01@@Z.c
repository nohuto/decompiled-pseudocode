/*
 * XREFs of ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801F2BA8 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026B2D4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802752A8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x1802A3880 (-GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV-$shared_ptr@VCRegion@@@.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *__fastcall std::shared_ptr<CCursorState::ShapeData>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v9, a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = a1[1];
  *a1 = v4;
  v6 = v3[1];
  v3[1] = v5;
  v7 = v9[1];
  a1[1] = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
