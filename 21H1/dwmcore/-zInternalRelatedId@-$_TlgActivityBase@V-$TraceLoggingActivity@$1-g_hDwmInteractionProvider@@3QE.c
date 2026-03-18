/*
 * XREFs of ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x1800E4B94
 * Callers:
 *     ?InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBVCLatencyInfo@3@G@Z @ 0x1801628B0 (-InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 *     ?InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@_KAEBVCLatencyInfo@3@QEBI33333333332333333333333M@Z @ 0x180163408 (-InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLaten.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TlgActivityBase<TraceLoggingActivity<&_tlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 4) )
    return 0LL;
  result = a1 + 24;
  if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 28) && !*(_DWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 36) )
    return 0LL;
  return result;
}
