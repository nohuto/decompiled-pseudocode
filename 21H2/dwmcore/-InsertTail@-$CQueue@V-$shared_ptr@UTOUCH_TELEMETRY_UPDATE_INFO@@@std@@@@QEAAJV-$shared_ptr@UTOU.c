/*
 * XREFs of ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802753AC
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10 (-UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulatio.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x18000889C (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802752A8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  std::_Ref_count_base *v7; // rcx
  unsigned int v8; // edi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v10, a2);
  v6 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert(v5, v4, v3);
  v7 = (std::_Ref_count_base *)a2[1];
  v8 = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v8;
}
