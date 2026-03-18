/*
 * XREFs of ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180019680
 * Callers:
 *     <none>
 * Callees:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB_K@Z @ 0x180019708 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)*((_QWORD *)this + 564);
  v3 = v2[32];
  v4 = *v2;
  v5 = 10000000 * (v3 / g_qpcFrequency.QuadPart) + 10000000 * (v3 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
    a2,
    v4,
    &v5);
}
