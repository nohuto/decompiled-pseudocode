/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x180161610
 * Callers:
 *     ?InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBVCLatencyInfo@3@G@Z @ 0x18015DF40 (-InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 *     ?InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@_KAEBVCLatencyInfo@3@QEBI33333333332333333333333M@Z @ 0x18015EA98 (-InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLaten.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingActivity<&_tlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        __int64 a1)
{
  ULONG result; // eax

  if ( (unsigned int)dword_180341EB8 <= 5 )
    *(_OWORD *)(a1 + 8) = 0LL;
  else
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  *(_DWORD *)a1 = 1;
  return result;
}
