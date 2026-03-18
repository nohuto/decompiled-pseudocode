/*
 * XREFs of ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C0226424
 * Callers:
 *     ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C01D9B30 (-WinlogonHotkeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void TraceLoggingWinPHotKeyEvent(void)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B3F8, (unsigned __int8 *)dword_1C02F1F78, 0LL, 0LL, 3u, &v1);
  }
}
