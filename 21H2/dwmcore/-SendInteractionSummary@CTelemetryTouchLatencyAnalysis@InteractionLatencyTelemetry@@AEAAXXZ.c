/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXXZ @ 0x1801D587C
 * Callers:
 *     ??1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADD08 (--1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSummaryInfo@2@_KQEBI@Z @ 0x1801D4104 (-InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSumm.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SendInteractionSummary(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v9[6]; // [rsp+28h] [rbp-30h] BYREF

  v1 = 0LL;
  if ( *((_BYTE *)this + 5256) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v3 = *((unsigned __int8 *)this + 5256);
    v4 = qword_1803D32C0 / 0x3E8uLL;
    v5 = (PerformanceCount.QuadPart - *((_QWORD *)this + 656)) / (qword_1803D32C0 / 0x3E8uLL);
    if ( *((_BYTE *)this + 5256) )
    {
      v6 = (_QWORD *)((char *)this + 5376);
      do
      {
        v7 = PerformanceCount.QuadPart - *v6++;
        v9[v1++] = v7 / v4;
      }
      while ( v1 < v3 );
    }
    InteractionLatencyTelemetry::InteractionTraceProvider::InteractionSummary(
      (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 5128),
      (unsigned int)v5,
      v9);
  }
}
