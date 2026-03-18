/*
 * XREFs of ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C01ACE90
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01ACC38 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 *     ?MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z @ 0x1C01ACDF0 (-MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CMouseSensor::OnMouseReportRateLimitingTimerNotification(struct DEVICEINFO **this)
{
  CMouseSensor::FlushMouseReports((CMouseSensor *)this);
  InputTraceLogging::Mouse::MouseReportRateLimitingTimerFired(this[212]);
  return 0LL;
}
