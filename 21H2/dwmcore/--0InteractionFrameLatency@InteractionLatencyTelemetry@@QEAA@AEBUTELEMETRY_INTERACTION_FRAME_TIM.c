/*
 * XREFs of ??0InteractionFrameLatency@InteractionLatencyTelemetry@@QEAA@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E1B68
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 * Callees:
 *     ?ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E2370 (-ComputeLatency@InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAXAEBUTELEMETRY_INTERACT.c)
 */

InteractionLatencyTelemetry::InteractionFrameLatency *__fastcall InteractionLatencyTelemetry::InteractionFrameLatency::InteractionFrameLatency(
        InteractionLatencyTelemetry::InteractionFrameLatency *this,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_OWORD *)((char *)this + 68) = 0LL;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  InteractionLatencyTelemetry::InteractionFrameLatency::ComputeLatency(this, a2);
  return this;
}
