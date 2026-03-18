/*
 * XREFs of ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchScenarioInfo@2@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III_K@Z @ 0x18001B790
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 * Callees:
 *     ?SteadyStateFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@II_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@1@Z @ 0x18001A8C0 (-SteadyStateFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchS.c)
 *     ?FirstFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@IIAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@_K@Z @ 0x1801D29E0 (-FirstFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenari.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::DetectInputGlitch(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct InteractionLatencyTelemetry::TouchScenarioInfo *a2,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  __int64 v7; // rcx
  float v9; // xmm0_4
  float v10; // xmm0_4
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax

  v7 = *((_QWORD *)a3 + 23);
  if ( v7 < 0 )
  {
    v14 = *((_QWORD *)a3 + 23) & 1LL | (*((_QWORD *)a3 + 23) >> 1);
    v9 = (float)(int)v14 + (float)(int)v14;
  }
  else
  {
    v9 = (float)(int)v7;
  }
  v10 = v9 * 1.5;
  v11 = 0LL;
  if ( v10 >= 9.223372e18 )
  {
    v10 = v10 - 9.223372e18;
    if ( v10 < 9.223372e18 )
      v11 = 0x8000000000000000uLL;
  }
  v12 = v11 + (unsigned int)(int)v10;
  if ( *(_QWORD *)a3 )
    v13 = *(_QWORD *)a3;
  else
    v13 = *((_QWORD *)a3 + 18);
  if ( *((_QWORD *)a2 + 25) == a7 && *((_QWORD *)a3 + 20) - v13 > v12 )
  {
    *((_BYTE *)a2 + 328) = 1;
    InteractionLatencyTelemetry::InteractionTraceProvider::FirstFrameInputGlitch(a2, a4, a5, a3, v12);
  }
  else if ( (!*(_QWORD *)a3 || (v15 = *((_DWORD *)a2 + 127)) != 0 && a4 == v15 + 1)
         && *((_QWORD *)a2 + 61) - *((_QWORD *)a2 + 62) > v12 )
  {
    ++*((_WORD *)a2 + 228);
    InteractionLatencyTelemetry::InteractionTraceProvider::SteadyStateFrameInputGlitch(a2);
  }
}
