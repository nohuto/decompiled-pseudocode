/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021E480
 * Callers:
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 0x40) != 0 && (qword_1C0330B48 & 0x40) == qword_1C0330B48 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0330B30, (unsigned __int8 *)dword_1C02F139C, 0LL, 0LL, 2u, &v0);
}
