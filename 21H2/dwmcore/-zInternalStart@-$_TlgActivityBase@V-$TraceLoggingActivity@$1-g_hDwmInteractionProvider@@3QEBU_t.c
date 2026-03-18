/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1801D661C
 * Callers:
 *     ?InteractionAnalysis@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBVInteractionFrameLatency@2@G@Z @ 0x1801D32FC (-InteractionAnalysis@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioI.c)
 *     ?InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSummaryInfo@2@_KQEBI@Z @ 0x1801D4104 (-InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSumm.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingActivity<&_tlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        __int64 a1)
{
  ULONG result; // eax

  if ( (unsigned int)dword_1803D0EB8 <= 5 )
    *(_OWORD *)(a1 + 8) = 0LL;
  else
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  *(_DWORD *)a1 = 1;
  return result;
}
