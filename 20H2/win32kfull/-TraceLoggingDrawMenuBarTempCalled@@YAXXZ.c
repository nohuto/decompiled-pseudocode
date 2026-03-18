/*
 * XREFs of ?TraceLoggingDrawMenuBarTempCalled@@YAXXZ @ 0x1C0224894
 * Callers:
 *     NtUserDrawMenuBarTemp @ 0x1C01F8250 (NtUserDrawMenuBarTemp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void TraceLoggingDrawMenuBarTempCalled(void)
{
  __int64 v0; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x200000000000LL) != 0
    && (qword_1C032A410 & 0x200000000000LL) == qword_1C032A410 )
  {
    v0 = 0x1000000LL;
    v2 = &v0;
    v4 = 0;
    v3 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032A3F8, (unsigned __int8 *)dword_1C02F0F05, 0LL, 0LL, 3u, &v1);
  }
}
