/*
 * XREFs of ?DisplayTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02AF680
 * Callers:
 *     <none>
 * Callees:
 *     LogMonitorOnOffTelemetry @ 0x1C0175634 (LogMonitorOnOffTelemetry.c)
 */

__int64 __fastcall DisplayTelemetryEnabledCallback(struct DXGADAPTER *a1, __int64 a2)
{
  return LogMonitorOnOffTelemetry(a2, (__int64)a1, 2);
}
