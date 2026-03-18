/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021D5F0
 * Callers:
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C032FB30 > 4 && (qword_1C032FB40 & 0x40) != 0 && (qword_1C032FB48 & 0x40) == qword_1C032FB48 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032FB30, (unsigned __int8 *)dword_1C02F09AC, 0LL, 0LL, 2u, &v0);
}
