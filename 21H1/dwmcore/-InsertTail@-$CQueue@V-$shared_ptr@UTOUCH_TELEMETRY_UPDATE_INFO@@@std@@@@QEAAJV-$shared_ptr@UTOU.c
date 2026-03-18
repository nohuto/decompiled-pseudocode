/*
 * XREFs of ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180233584
 * Callers:
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180233890 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180233478 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // eax
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v4 = *a2;
  v9[1] = v2;
  v9[0] = v4;
  v5 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert(a1, (__int64)a2, v9);
  v6 = (std::_Ref_count_base *)a2[1];
  v7 = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v7;
}
