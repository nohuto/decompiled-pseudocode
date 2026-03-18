/*
 * XREFs of ?TelemetryOnVailBeginRenderTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1800794B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryOnVailBeginRenderTargetTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        struct IRenderTarget *a2)
{
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::OnRenderTargetBeginRender(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
    a2);
}
