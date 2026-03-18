/*
 * XREFs of ?MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z @ 0x1C01AF170
 * Callers:
 *     ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C01AF210 (-OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::MouseReportRateLimitingTimerFired(struct DEVICEINFO *a1)
{
  __int64 v1; // r8
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = v1;
    v5 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0246A70, (unsigned __int8 *)dword_1C021AD4D, 0LL, 0LL, 3u, &v3);
  }
}
