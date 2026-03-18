/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C001AA70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x200000000000LL) != 0
    && (qword_1C032A410 & 0x200000000000LL) == qword_1C032A410 )
  {
    v5 = 0;
    v3 = &v1;
    v1 = 0x1000000LL;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A3F8, (int)&dword_1C02F0C3D, 0, 0, 3u, &v2);
  }
  return 1LL;
}
