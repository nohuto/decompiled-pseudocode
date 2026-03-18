/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x18015C1C0
 * Callers:
 *     ?InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBVCLatencyInfo@3@G@Z @ 0x18015DF40 (-InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 *     ?InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@_KAEBVCLatencyInfo@3@QEBI33333333332333333333333M@Z @ 0x18015EA98 (-InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLaten.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteActivityAutoStop<0,5>(_DWORD *a1, const GUID *a2)
{
  ULONG result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 5u )
    return tlgWriteTransfer_EventWriteTransfer((__int64)a1, (unsigned __int8 *)dword_1802E0DBF, a2, 0LL, 2u, &v3);
  return result;
}
