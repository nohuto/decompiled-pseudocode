/*
 * XREFs of ?ScreenOnStudyStartCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0020ED0
 * Callers:
 *     <none>
 * Callees:
 *     LogMonitorOnOffTelemetry @ 0x1C0166D94 (LogMonitorOnOffTelemetry.c)
 */

__int64 __fastcall ScreenOnStudyStartCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  return LogMonitorOnOffTelemetry(a2, a1, a3);
}
