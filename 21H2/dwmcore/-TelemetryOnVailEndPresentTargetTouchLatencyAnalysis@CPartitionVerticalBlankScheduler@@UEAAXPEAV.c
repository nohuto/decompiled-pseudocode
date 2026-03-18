/*
 * XREFs of ?TelemetryOnVailEndPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1801AE710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryOnVailEndPresentTargetTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        struct IRenderTarget *a2)
{
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetPostPresent(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
    a2);
}
