/*
 * XREFs of ?IsSet@InteractionFrameLatency@InteractionLatencyTelemetry@@QEBA_NXZ @ 0x1801E25E4
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 * Callees:
 *     ?IsSet@VailLatency@InteractionLatencyTelemetry@@QEBA_NXZ @ 0x1801E2648 (-IsSet@VailLatency@InteractionLatencyTelemetry@@QEBA_NXZ.c)
 */

char __fastcall InteractionLatencyTelemetry::InteractionFrameLatency::IsSet(
        InteractionLatencyTelemetry::InteractionFrameLatency *this)
{
  char v1; // dl

  if ( *(_DWORD *)this
    || *((_DWORD *)this + 1)
    || *((_DWORD *)this + 2)
    || *((_DWORD *)this + 3)
    || *((_DWORD *)this + 4)
    || *((_DWORD *)this + 5)
    || *((_DWORD *)this + 6)
    || *((_DWORD *)this + 7)
    || *((_DWORD *)this + 8)
    || *((_DWORD *)this + 9)
    || *((_DWORD *)this + 10)
    || *((_DWORD *)this + 11)
    || *((_DWORD *)this + 12)
    || InteractionLatencyTelemetry::VailLatency::IsSet((InteractionLatencyTelemetry::InteractionFrameLatency *)((char *)this + 52)) )
  {
    return 1;
  }
  return v1;
}
