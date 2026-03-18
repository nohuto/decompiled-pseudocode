/*
 * XREFs of ?RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800C3B5C
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18003B5A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?FirstFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_KI@Z @ 0x1801622D4 (-FirstFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatenc.c)
 *     ?SteadyStateFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_KI@Z @ 0x180165378 (-SteadyStateFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouch.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RecordRenderGlitch(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  char *v4; // rbx
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v8; // rcx
  unsigned __int16 v9; // ax

  v3 = 0;
  v4 = (char *)this + 208;
  do
  {
    if ( *((_DWORD *)v4 - 12) && a2 >= *(_QWORD *)v4 )
    {
      v8 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 408 * v3 + 8);
      if ( a2 == *(_QWORD *)v4 )
      {
        v4[62] += a3;
        v4[61] = 1;
        InteractionTraceProvider::FirstFrameRenderGlitch(v8, a2, a3);
      }
      else
      {
        v9 = *((_WORD *)v4 + 78);
        ++*((_WORD *)v4 + 77);
        *((_WORD *)v4 + 79) += a3;
        if ( v9 <= (unsigned __int16)a3 )
          v9 = a3;
        *((_WORD *)v4 + 78) = v9;
        InteractionTraceProvider::SteadyStateFrameRenderGlitch(v8, a2, a3);
      }
    }
    ++v3;
    v4 += 408;
  }
  while ( v3 < 0xA );
}
