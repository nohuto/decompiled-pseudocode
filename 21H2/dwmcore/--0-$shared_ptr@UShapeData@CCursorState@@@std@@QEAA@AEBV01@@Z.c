/*
 * XREFs of ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C
 * Callers:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180005DD0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802679EC (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x180267CB8 (--$_Emplace_reallocate@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@U.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UShapeData@CCursorState@@@1@AEAV21@@Z @ 0x1802689C4 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802753AC (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10 (-UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulatio.c)
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180276520 (-UpdateOnRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJAEBUManipulat.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
