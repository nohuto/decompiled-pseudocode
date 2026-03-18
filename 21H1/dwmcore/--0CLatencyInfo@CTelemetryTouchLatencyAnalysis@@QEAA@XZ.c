/*
 * XREFs of ??0CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DC3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CTelemetryTouchLatencyAnalysis::CLatencyInfo *__fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo(
        CTelemetryTouchLatencyAnalysis::CLatencyInfo *this)
{
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  return this;
}
