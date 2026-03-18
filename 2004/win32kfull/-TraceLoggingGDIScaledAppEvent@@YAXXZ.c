/*
 * XREFs of ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C0153D44
 * Callers:
 *     SetAppCompatFlags @ 0x1C003C040 (SetAppCompatFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void TraceLoggingGDIScaledAppEvent(void)
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
    v4 = 0;
    v2 = &v0;
    v0 = 0x1000000LL;
    v3 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B3F8, (int)&dword_1C02F1C4C, 0, 0, 3u, &v1);
  }
}
