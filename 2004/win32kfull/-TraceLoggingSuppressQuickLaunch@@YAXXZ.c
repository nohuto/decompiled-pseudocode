/*
 * XREFs of ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C02261DC
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void TraceLoggingSuppressQuickLaunch(void)
{
  __int64 v0; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C032B3F8 > 5
    && (qword_1C032B408 & 0x400000000000LL) != 0
    && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
  {
    v0 = 0x1000000LL;
    v2 = &v0;
    v4 = 0;
    v3 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B3F8, (unsigned __int8 *)dword_1C02F15FA, 0LL, 0LL, 3u, &v1);
  }
}
